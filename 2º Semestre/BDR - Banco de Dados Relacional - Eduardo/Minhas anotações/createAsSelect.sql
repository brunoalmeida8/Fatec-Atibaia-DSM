    -- funcionarios que tenham pelo menos um dependente que nao tenha histórico 
    -- dependente que seja grau de parentesco FILHO(A)
    -- (ordem alfabetica)
SELECT F.nm_funcionario AS nome, C.ds_cargo AS cargo
    FROM funcionarios AS F
    JOIN cargos AS C
        ON F.id_cargo = C.id_cargo
        WHERE EXISTS (SELECT 1 
                    FROM dependentes AS D
                    JOIN grau AS G
                    ON D.id_grau = G.id_grau

                    WHERE F.id_funcionario = D.id_funcionario
                    AND G.ds_grau IN ('FILHO(A)')
                    AND NOT EXISTS (SELECT 1 
                                        FROM dependente_historico AS DH
                                        WHERE D.id_dependente = DH.id_dependente))
    ORDER BY F.nm_funcionario ASC;

-- cria uma tabela atraves de um SELECT
FROM funcionarios F
JOIN departamentos D
    ON id_
CREATE TABLE backup_func AS
    SELECT F.nm_funcionario AS nome, C.ds_cargo AS cargo
        FROM funcionarios AS F
        JOIN cargos AS C
            ON F.id_cargo = C.id_cargo
        ORDER BY F.nm_funcionario; 

-- UNION - une dois selects com duas tabelas um embaixo do outro uma tabela a partir de duas
-- mesma qtd de colunas
-- mesma natureza
-- dar um apelido para cada coluna
CREATE TABLE clientes (
    id_cliente int,
    ds_cliente VARCHAR (30),
    st_cliente VARCHAR(1)
);
CREATE TABLE fornecedores (
    id_fornecedor int,
    ds_fornecedor VARCHAR (30),
    st_fornecedor VARCHAR(1)
);

INSERT INTO clientes VALUES(1, 'Cliente A', 'A');
INSERT INTO clientes VALUES(2, 'Cliente B', 'B');
INSERT INTO clientes VALUES(3, 'Cliente C', 'I');

INSERT INTO fornecedores VALUES(1, 'Fornecedor A', 'A');
INSERT INTO fornecedores VALUES(2, 'Fornecedor B', 'A');
INSERT INTO fornecedores VALUES(3, 'Fornecedor C', 'I');

SELECT id_cliente codigo,
    ds_cliente nome,
    st_cliente ds_status,
    'é um cliente' AS observação
    FROM clientes
UNION
SELECT id_fornecedor codigo,
    ds_fornecedor nome,
    st_fornecedor ds_status,
    'é um fornecedor' AS observação
    FROM fornecedores;


-- LEFT JOIN
-- RIGHT JOIN 
SELECT 
    A.id_cargo

    LEGHT

-- funções de grupo
-- COUNT 
-- MAX
-- MIN
SELECT COUNT (*) AS quantidade FROM funcionarios;
SELECT SUM (vl_salario) AS valor_folha, AVG(vl_salario) AS media FROM funcionarios;
SELECT COUNT(*) qtd,
    SUM (vl_salario) AS valor_folha, 
    AVG(vl_salario) AS media,
    MIN(vl_salario) AS minimo,
    FROM funcionarios;


-- 

/*
    departamento    qtde    folha
    ------------    ----    -------
    contabilidade   23      2342342.0
    financeiro      43      3238423.9
*/
SELECT D.ds_departamento AS departamento,
    COUT (*) AS qtde,
    SUM (f.vl_salario) AS folha, 
    FROM funcionarios AS F
    JOIN departamentos AS D
        ON F.id_departamento = D.id_departamento
    WHERE D.ds_departamento IN ('CONTABILIDADE, FINANCEIRO')
    GROUP BY D.ds_departamento
    HAVING qtde > 19 AND folha > 138000;

-- funcoes de grupo composto

SELECT D.ds_departamento AS departamento,
    C.ds_cargo  AS cargo,
    COUT (*) AS qtde,
    SUM (f.vl_salario) AS folha, 
    FROM funcionarios AS F
    JOIN departamentos AS D
        ON F.id_departamento = D.id_departamento
    WHERE D.ds_departamento IN ('CONTABILIDADE, FINANCEIRO')
    GROUP BY D.ds_departamento, C.ds_cargo
    HAVING qtde > 19 AND folha > 138000;
