
DML (DELETE / UPDATE)
DROP TABLE - DDL apaga a estrutura
TRUNCATE TABLE - DML rollback 
DELETE FROM TABLE
ALTER TABLE








SELECT E.ds_estado AS estado,
    I.ds_infracao AS infracoes,
    COUNT(*) AS Quantidade_Multas,
    SUM(M.vl_multa) AS Vl_Soma_Multas,
    MAX(M.vl_multa) AS Vl_Maior_Multa,
    MIN(M.vl_multa) AS Vl_Menor_Multa,
    AVG(M.vl_multa) AS Vl_Media_Multas
    FROM estados AS E
    JOIN multas AS M
        ON E.id_estado = M.id_estado
    JOIN infracoes AS I
        ON M.id_infracao = I.id_infracao
    JOIN veiculos AS V
        ON E.id_estado = V.id_estado
    WHERE E.ds_estado NOT IN ('paraiba', 'ceara', 'pernambuco', 'tocantins')
        AND I.qt_pontos > 4
    GROUP BY E.ds_estado, I.ds_infracao
    -- WHERE f.ds_fabricante in('Chevrolet','Honda','Ford','Fiat','Volkswagen','Toyota'))
    -- WHERE EXISTS (SELECT 1
       -- FROM )
    HAVING COUNT(*) > 2 -- qtd multas superior a 2
        AND SUM(M.vl_multa) > 550 -- (usando a função de grupo) soma multa > 550,00
        AND Vl_Maior_Multa > 200 -- (usando o apelido/alias AS) a maior multa da linha > 200,00
    ORDER BY E.ds_estado ASC, I.ds_infracao ASC;



















