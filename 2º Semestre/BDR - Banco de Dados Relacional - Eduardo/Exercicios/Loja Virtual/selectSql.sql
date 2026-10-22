-- ============================================================================
-- SELECT solicitado:
-- Retorna dados do cliente, conforme item e, que possuem carrinho e:
--   (a) não são das regiões CENTRO-OESTE nem SUL;
--   (b) existe ao menos um registro de carrinho para o cliente;
--   (c) A forma de pagamento seja em PIX ou Boleto Bancário
--   (d) não existe item em nenhuma compra desse cliente cuja unidade esteja
--       entre as três unidades excluídas: UN (Unidade), KG (Quilograma), L (Litro).
--   (e) Apresentar os seguintes dados:
--         - Id do cliente
--         - Nome do Cliente
--         - Descrição do Estado da Federação do Cliente
--         - Sigla do Estado 
--         - A Descrição da Região do Estado
--         - Em ordem de nome de cliente
-- ============================================================================ 

-- RESULTADO ESPERADO ---

-- Resultado esperado com os dados deste script:
-- id_cliente | nome_cliente   | descricao_estado | sigla_estado | regiao
-- 7          | Gabriela Lima  | Bahia            | BA           | NORDESTE
-- 8          | Henrique Costa | Pernambuco       | PE           | NORDESTE
SELECT C.id_cliente, C.nome_cliente, E.descricao_estado, E.sigla_estado, E.regiao
    FROM clientes AS C
    JOIN estados AS E
        ON C.id_estado = E.id_estado
        WHERE EXISTS (SELECT 1 
            FROM carrinho AS CA
            JOIN forma_pagamento AS FP
                ON CA.id_forma_pagamento = FP.id_forma_pagamento
            AND FP.descricao_forma_pagamento IN ('PIX', "Boleto bancário")
            JOIN produtos AS P
                ON CA.id_produto = P.id_produto
            WHERE C.id_cliente = CA.id_cliente
            AND E.regiao NOT IN ('CENTRO-OESTE', 'SUL')
            AND NOT EXISTS (SELECT 1 
                FROM produtos AS P
                JOIN unidades_medidas AS UM
                    ON P.id_unidade = UM.id_unidade
                AND sigla_unidade NOT IN ('UN', 'KG', 'L')
                WHERE P.id_unidade = UM.id_unidade))
    ORDER BY C.nome_cliente ASC;
    

