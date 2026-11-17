

-- mostra
-- unidade quantidade  soma_total  maximo minimo media
-- Caixa	1	        24.90	    24.90   24.90	24.900000
-- Par	    1	        16.90	    16.90	16.90   16.900000
SELECT U.descricao_unidade AS unidade,
    COUNT(*) AS quantidade,
    SUM(P.valor_produto) AS soma_total,
    MAX(P.valor_produto) AS maximo,
    MIN(P.valor_produto) AS minimo,
    AVG(P.valor_produto) AS media
    -- P.descricao_produto AS produto
    FROM produtos AS P
    JOIN unidades_medidas AS U
        ON P.id_unidade = U.id_unidade
    WHERE U.descricao_unidade NOT IN ('Metro', 'kit')
    GROUP BY descricao_unidade
    -- HAVING COUNT(*) > 1 -- pode ser HAVING quantidade > 1 -- isso no mysql funciona
    HAVING minimo > 7 AND maximo < 30
ORDER BY descricao_unidade ASC;







=================================
-- 3
CREATE DATABASE nv;
USE nv;
SELECT C.ds_cargo AS Cargo,

    FROM cargos AS C
    JOIN funcionarios AS F
        ON C.id_cargo = F.id_cargo;





SELECT ds_cargo AS Cargo,
    COUNT(*) AS quantidade,
    SUM(P.valor_produto) AS soma_total,
    MAX(P.valor_produto) AS maximo,
    MIN(P.valor_produto) AS minimo,
    AVG(P.valor_produto) AS media
    -- P.descricao_produto AS produto
    FROM produtos AS P
    JOIN unidades_medidas AS U
        ON P.id_unidade = U.id_unidade
    WHERE U.descricao_unidade NOT IN ('Metro', 'kit')
    GROUP BY descricao_unidade
    -- HAVING COUNT(*) > 1 -- pode ser HAVING quantidade > 1 -- isso no mysql funciona
    HAVING minimo > 7 AND maximo < 30
ORDER BY descricao_unidade ASC;




-- at 6
SELECT R.ds_regiao AS Região,
    COUNT(*) AS "Qtd. funcionários"
    FROM F.funcionarios AS F;
    JOIN estados AS E
        ON R.id_regiao = E.id_regiao
    JOIN cidades AS C
        ON E.id_estado = C.id_estado
    JOIN funcionarios
        ON id_cidade_
    GROUP BY R.ds_regiao;




-- at 2:

SELECT d.ds_departamento Departamento,
		COUNT(*) Quantidade,
        AVG(f.vl_salario) Media
       FROM funcionarios f
       JOIN departamentos d
       ON f.id_departamento = d.id_departamento
       GROUP BY D.ds_departamento
       HAVING AVG (vl_salario) >= 6000
       ORDER BY media DESC;





-- at 5
SELECT F.id_funcionario,
    F.nm_funcionario,
    D.ds_departamento,
    S.ds_status,
    F.vl_salario,
    F.ds_apresentacao
    FROM funcionarios AS F
    JOIN departamentos AS D
        ON F.id_departamento = D.id_departamento
    JOIN status AS S
        ON F.id_Status = S.id_Status
    WHERE D.id_departamento = '4000'
    AND S.ds_status = 'ATIVO'
    AND F.vl_salario < 5000
    AND NOT EXISTS (SELECT 1 FROM historico AS H
        WHERE F.id_funcionario = H.id_funcionario);


-- at 5
UPDATE funcionarios AS F
    JOIN departamentos AS D
        ON F.id_departamento = D.id_departamento
    JOIN status AS S
        ON F.id_Status = S.id_Status
       SET vl_salario = vl_salario * 1.10, ds_apresentacao = 'REAJUSTE SALARIAL DE 10%'
    WHERE D.id_departamento = '4000'
    AND S.ds_status = 'ATIVO'
    AND F.vl_salario < 5000
    AND NOT EXISTS (SELECT 1 FROM historico AS H
        WHERE F.id_funcionario = H.id_funcionario);