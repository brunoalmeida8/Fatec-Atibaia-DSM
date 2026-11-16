-- Funcões de Grupo


-- mostra 
-- STATUS   QUANTIDADE
---------   ----------
-- ATIVO       10
-- INATIVO     8
SELECT status_produto AS situacao, 
    COUNT(*) quantidade
    FROM produtos
    WHERE valor_produto BETWEEN 200 AND 1000
GROUP BY status_produto;


-- mostra 
-- UNIDADE   QUANTIDADE
---------   ----------
-- 1            10
-- 2            8
SELECT id_unidade,
    COUNT(*) AS quantidade
    FROM produtos
GROUP BY id_unidade;

-- mostra 
-- UNIDADE   QUANTIDADE
---------   ----------
-- unidade       8
-- pacote        1
SELECT U.descricao_unidade AS unidade,
    COUNT(*) AS quantidade
    FROM produtos AS P
    JOIN unidades_medidas AS U
        ON P.id_unidade = U.id_unidade
    GROUP BY descricao_unidade;


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
