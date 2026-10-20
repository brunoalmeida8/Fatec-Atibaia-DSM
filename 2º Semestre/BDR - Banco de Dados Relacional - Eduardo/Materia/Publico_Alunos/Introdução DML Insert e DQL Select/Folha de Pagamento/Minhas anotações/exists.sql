
-- criar table dependente_historico
-- Cria a tabela
CREATE TABLE dependente_historico (
    id_historico INT PRIMARY KEY,
    id_dependente INT,
    ds_historico VARCHAR(1000)
);

-- Adiciona a Foreign Key
ALTER TABLE dependente_historico ADD CONSTRAINT FK_dependente_historico_1
    FOREIGN KEY (id_dependente)
    REFERENCES dependentes (id_dependente)
    ON DELETE CASCADE;

-- ====================================================================
-- POPULAÇÃO DA TABELA DEPENDENTE_HISTORICO (10 registros)
-- ====================================================================

INSERT INTO dependente_historico (id_historico, id_dependente, ds_historico) VALUES
(1, 1, 'Inclusão do dependente no plano de saúde empresarial.'),
(2, 1, 'Apresentação da certidão de nascimento e cartão de vacinação atualizado.'),
(3, 2, 'Comprovante de matrícula escolar do ensino fundamental entregue.'),
(4, 3, 'Atualização de endereço residencial e telefone de contato do dependente.');



-- pegar funcionarios que tenham pelo menos um dependente que nao tenha histórico (ordem alfabetica)
SELECT F.nm_funcionario
    FROM funcionarios AS F
    WHERE EXISTS (SELECT 1 
                    FROM dependentes AS D
                    WHERE F.id_funcionario = D.id_funcionario
                    AND NOT EXISTS (SELECT 1 
                                        FROM dependente_historico AS DH
                                        WHERE D.id_dependente = DH.id_dependente))
    ORDER BY F.nm_funcionario ASC;



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
    

