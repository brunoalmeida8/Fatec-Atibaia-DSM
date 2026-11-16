
DML (DELETE / UPDATE)
DROP TABLE - DDL apaga a estrutura
TRUNCATE TABLE - DML rollback 
DELETE FROM TABLE
ALTER TABLE

SELECT * FROM 
DELETE FROM unidades_medidas WHERE id_unidades_medidas=1;


-- SUBQUERY / SUB SELECT
SELECT F.nm_funcionario, F.vl_salario
    FROM funcionarios AS f
    -- WHERE F.id_cidade = 501 -- usa entao 
    WHERE F.id_cidade IN (SELECT id_cidade FROM cidades WHERE nm_cidade='ATIBAIA');

-- DELETA TODO MUNDO QUE É DA CIDADE DE ATIBAIA
DELETE FROM funcionarios
    -- WHERE id_cidade = 501 -- USA ENTAO
    WHERE id_cidade IN (SELECT id_cidade FROM cidades WHERE nm_cidade='ATIBAIA');

-- DELETAR TODOS DE ATIBAIA COM JOIN
DELETE F.id
SELECT F.nm_funcionario, F.vl_salario
    FROM funcionarios AS f
    INNER JOIN cidades C
        ON C.id_cidade = F.id_cidade
    -- WHERE F.id_cidade = 501 -- sem JOIN
    -- WHERE F.id_cidade IN (SELECT id_cidade FROM cidades WHERE nm_cidade='ATIBAIA'); -- JOIN
    WHERE C.nm_cidade = ('ATIBAIA');
    

-- DELETAR TODOS OS UFNCIONARIOS COM CARGO DE GERENTE E SALARIO ENTRE 2000 E 3000
-- PRIMEIRO FAZ O SELECT 
SELECT F.nm_funcionario,
    C.ds_cargo
    FROM funcionario AS F
    JOIN CARGOS AS C
        ON F.id_cargo = C.id_cargo
    WHERE c.ds_cargo - 'gerente'
    AND F.vl_salario BETWEEN 2000 AND 3000;
    -- SUBSTITUI O SELECT com os campos pelo alias da tabela FROM...
DELETE F FROM funcionario F
    JOIN CARGOS AS C
        ON F.id_cargo = C.id_cargo
    WHERE c.ds_cargo - 'gerente'
    AND F.vl_salario BETWEEN 2000 AND 3000;



-- UPDATE
SELECT id_funcionario,
    nm_funcionario,
    vl_salario
    FROM funcionarios

UPDATE funcionarios -- TABLE
    SET vl_salario = 2000 -- COLUNA Q QUER ALTERAR
    WHERE id_funcionario = 5; -- CONDIÇÃO

-- ALTERAR SALARIO EMAIL E SALARIO PARA + 10%
UPDATE funcionarios
    SET ds_email = 'rosangela@gmail.com', 
    vl_salario = vl_salario * 1.30
    WHERE id_funcionario = 5;

UPDATE funcionarios
SET vl_salario = vl_salario * 1.30
    WHERE id_cidade IN (SELECT C.id_cidade 
        FROM cidades C
        WHERE C.nm_cidade = 'ATIBAIA');

UPDATE funcionarios
    INNER JOIN cidades C
        ON C.id_cidade - F.id_cidade
    SET vl_salario = vl_salario * 1.30
    WHERE C.nm_cidade = 'ATIBAIA';



-- PERGUNTA ANDRE
UPDATE PRODUTOS
    SET id_unidades_medidas = 2
    WHERE id_unidades_medidas IS NULL;



SELECT F.nm_funcionario,
    C.ds_cargo
    FROM funcionario AS F
    JOIN CARGOS AS C
        ON F.id_cargo = C.id_cargo
    WHERE c.ds_cargo - 'gerente'
    AND F.vl_salario BETWEEN 2000 AND 3000;
    -- SUBSTITUI O SELECT com os campos pelo alias da tabela FROM...
DELETE F FROM funcionario F
    JOIN CARGOS AS C
        ON F.id_cargo = C.id_cargo
    WHERE c.ds_cargo - 'gerente'
    AND F.vl_salario BETWEEN 2000 AND 3000;




DELETE historico dos funcionarios que reside em ATIBAIA

SELECT F.nm_funcionario, 
    C.nm_cidade,
    H.id_historico
    FROM funcionarios AS F
    INNER JOIN cidades AS C
        ON C.id_cidade - F.id_cidade
    INNER JOIN historico AS H
        ON F.id_funcionario = F.id_funcionario
    WHERE C.nm_cidade = 'ATIBAIA';

DELETE FROM historico
    WHERE id_funcionario IN (SELECT F.nm_funcionario, 
        C.nm_cidade,
        H.id_historico
        FROM funcionarios AS F
        INNER JOIN cidades AS C
            ON C.id_cidade - F.id_cidade
        INNER JOIN historico AS H
            ON F.id_funcionario = F.id_funcionario
        WHERE C.nm_cidade = 'ATIBAIA';)