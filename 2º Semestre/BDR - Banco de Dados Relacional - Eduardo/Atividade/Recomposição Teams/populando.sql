-- populando as tabelas
-- ====================================================================
-- SCRIPT DE POPULAÇÃO (5 Municípios por Estado = 135 Cidades, 10 Bancos, 27 UFs)
-- ====================================================================

-- 1. Regiões
INSERT INTO regioes (ds_regiao) VALUES 
('Norte'), ('Nordeste'), ('Centro-Oeste'), ('Sudeste'), ('Sul');

-- 2. Estados (27 UFs)
INSERT INTO estados (sg_estado, ds_estado, id_regiao) VALUES
('RO', 'Rondônia', 1), ('AC', 'Acre', 1), ('AM', 'Amazonas', 1), ('RR', 'Roraima', 1), ('PA', 'Pará', 1), ('AP', 'Amapá', 1), ('TO', 'Tocantins', 1),
('MA', 'Maranhão', 2), ('PI', 'Piauí', 2), ('CE', 'Ceará', 2), ('RN', 'Rio Grande do Norte', 2), ('PB', 'Paraíba', 2), ('PE', 'Pernambuco', 2), ('AL', 'Alagoas', 2), ('SE', 'Sergipe', 2), ('BA', 'Bahia', 2),
('MT', 'Mato Grosso', 3), ('MS', 'Mato Grosso do Sul', 3), ('GO', 'Goiás', 3), ('DF', 'Distrito Federal', 3),
('MG', 'Minas Gerais', 4), ('ES', 'Espírito Santo', 4), ('RJ', 'Rio de Janeiro', 4), ('SP', 'São Paulo', 4),
('PR', 'Paraná', 5), ('SC', 'Santa Catarina', 5), ('RS', 'Rio Grande do Sul', 5);

-- 3. Municípios (5 municípios para cada um dos 27 estados = 135 cidades)
INSERT INTO municipios (ds_municipio, id_estado) VALUES
-- Rondônia (1)
('Porto Velho', 1), ('Ji-Paraná', 1), ('Ariquemes', 1), ('Vilhena', 1), ('Cacoal', 1),
-- Acre (2)
('Rio Branco', 2), ('Cruzeiro do Sul', 2), ('Sena Madureira', 2), ('Tarauacá', 2), ('Feijó', 2),
-- Amazonas (3)
('Manaus', 3), ('Parintins', 3), ('Itacoatiara', 3), ('Manacapuru', 3), ('Coari', 3),
-- Roraima (4)
('Boa Vista', 4), ('Rorainópolis', 4), ('Caracaraí', 4), ('Pacaraima', 4), ('Mucajaí', 4),
-- Pará (5)
('Belém', 5), ('Ananindeua', 5), ('Santarém', 5), ('Marabá', 5), ('Parauapebas', 5),
-- Amapá (6)
('Macapá', 6), ('Santana', 6), ('Laranjal do Jari', 6), ('Oiapoque', 6), ('Porto Grande', 6),
-- Tocantins (7)
('Palmas', 7), ('Araguaína', 7), ('Gurupi', 7), ('Porto Nacional', 7), ('Paraíso do Tocantins', 7),
-- Maranhão (8)
('São Luís', 8), ('Imperatriz', 8), ('São José de Ribamar', 8), ('Timon', 8), ('Caxias', 8),
-- Piauí (9)
('Teresina', 9), ('Parnaíba', 9), ('Picos', 9), ('Piripiri', 9), ('Floriano', 9),
-- Ceará (10)
('Fortaleza', 10), ('Caucaia', 10), ('Juazeiro do Norte', 10), ('Maracanaú', 10), ('Sobral', 10),
-- Rio Grande do Norte (11)
('Natal', 11), ('Mossoró', 11), ('Parnamirim', 11), ('São Gonçalo do Amarante', 11), ('Macaíba', 11),
-- Paraíba (12)
('João Pessoa', 12), ('Campina Grande', 12), ('Santa Rita', 12), ('Patos', 12), ('Bayeux', 12),
-- Pernambuco (13)
('Recife', 13), ('Jaboatão dos Guararapes', 13), ('Olinda', 13), ('Caruaru', 13), ('Petrolina', 13),
-- Alagoas (14)
('Maceió', 14), ('Arapiraca', 14), ('Rio Largo', 14), ('Palmeira dos Índios', 14), ('União dos Palmares', 14),
-- Sergipe (15)
('Aracaju', 15), ('Nossa Senhora do Socorro', 15), ('Lagarto', 15), ('Itabaiana', 15), ('São Cristóvão', 15),
-- Bahia (16)
('Salvador', 16), ('Feira de Santana', 16), ('Vitória da Conquista', 16), ('Camaçari', 16), ('Juazeiro', 16),
-- Mato Grosso (17)
('Cuiabá', 17), ('Várzea Grande', 17), ('Rondonópolis', 17), ('Sinop', 17), ('Tangará da Serra', 17),
-- Mato Grosso do Sul (18)
('Campo Grande', 18), ('Dourados', 18), ('Três Lagoas', 18), ('Corumbá', 18), ('Ponta Porã', 18),
-- Goiás (19)
('Goiânia', 19), ('Aparecida de Goiânia', 19), ('Anápolis', 19), ('Rio Verde', 19), ('Águas Lindas de Goiás', 19),
-- Distrito Federal (20)
('Brasília', 20), ('Taguatinga', 20), ('Ceilândia', 20), ('Gama', 20), ('Guará', 20),
-- Minas Gerais (21)
('Belo Horizonte', 21), ('Uberlândia', 21), ('Contagem', 21), ('Juiz de Fora', 21), ('Betim', 21),
-- Espírito Santo (22)
('Vitória', 22), ('Vila Velha', 22), ('Serra', 22), ('Cariacica', 22), ('Cachoeiro de Itapemirim', 22),
-- Rio de Janeiro (23)
('Rio de Janeiro', 23), ('São Gonçalo', 23), ('Duque de Caxias', 23), ('Nova Iguaçu', 23), ('Niterói', 23),
-- São Paulo (24)
('São Paulo', 24), ('Guarulhos', 24), ('Campinas', 24), ('São Bernardo do Campo', 24), ('São José dos Campos', 24),
-- Paraná (25)
('Curitiba', 25), ('Londrina', 25), ('Maringá', 25), ('Ponta Grossa', 25), ('Cascavel', 25),
-- Santa Catarina (26)
('Joinville', 26), ('Florianópolis', 26), ('Blumenau', 26), ('São José', 26), ('Chapecó', 26),
-- Rio Grande do Sul (27)
('Porto Alegre', 27), ('Caxias do Sul', 27), ('Canoas', 27), ('Pelotas', 27), ('Santa Maria', 27);

-- 4. Endereços (27 endereços vinculados à primeira cidade de cada estado)
INSERT INTO enderecos (nr_cep, ds_logradouro, nr_endereco, ds_complemento, nm_bairro, id_municipio) VALUES
('76801000', 'Av. Imigrantes', '100', NULL, 'Centro', 1),
('69900000', 'Rua Alvorada', '200', NULL, 'Bosque', 6),
('69010000', 'Av. Eduardo Ribeiro', '300', 'Sala 1', 'Comercial', 11),
('69301000', 'Av. Ene Garcês', '400', NULL, 'Centro', 16),
('66010000', 'Av. Presidente Vargas', '500', NULL, 'Campina', 21),
('68900000', 'Rua General Rondon', '600', NULL, 'Central', 26),
('77010000', 'Praça dos Girassóis', '700', NULL, 'Plano Diretor', 31),
('65010000', 'Rua Grande', '800', NULL, 'Centro', 36),
('64000000', 'Av. Frei Serafim', '900', NULL, 'Centro', 41),
('60060000', 'Av. Beira Mar', '1000', 'Bloco A', 'Meireles', 46),
('59010000', 'Rua João Pessoa', '110', NULL, 'Ribeira', 51),
('58013000', 'Av. Epitácio Pessoa', '220', NULL, 'Miramar', 56),
('50010000', 'Rua do Imperador', '330', NULL, 'Santo Antônio', 61),
('57020000', 'Rua do Comércio', '440', NULL, 'Centro', 66),
('49010000', 'Av. Ivo do Prado', '550', NULL, 'Centro', 71),
('40010000', 'Av. Sete de Setembro', '660', NULL, 'Vitória', 76),
('78005000', 'Av. Tenente Coronel Duarte', '770', NULL, 'Centro Norte', 81),
('79002000', 'Rua 14 de Julho', '880', NULL, 'Centro', 86),
('74003000', 'Av. Goiás', '990', NULL, 'Centro', 91),
('70040010', 'Esplanada dos Ministérios', '1', NULL, 'Zona Cívico-Administrativa', 96),
('30130000', 'Av. Afonso Pena', '123', NULL, 'Centro', 101),
('29010000', 'Av. Beira Mar', '234', NULL, 'Centro', 106),
('20021130', 'Av. Rio Branco', '345', NULL, 'Centro', 111),
('01310100', 'Av. Paulista', '1000', 'Conj 51', 'Bela Vista', 116),
('80010000', 'Rua XV de Novembro', '456', NULL, 'Centro', 121),
('88010000', 'Rua Felipe Schlichting', '567', NULL, 'Centro', 126),
('90010150', 'Rua dos Andradas', '789', NULL, 'Centro Histórico', 131);

-- 5. Bancos (Os 10 principais do Brasil)
INSERT INTO bancos (cd_banco, ds_banco, tp_operacao) VALUES
('001', 'Banco do Brasil S.A.', 'Comercial Múltiplo'),
('104', 'Caixa Econômica Federal', 'Comercial / Federal'),
('237', 'Banco Bradesco S.A.', 'Comercial Múltiplo'),
('341', 'Itaú Unibanco S.A.', 'Comercial Múltiplo'),
('033', 'Banco Santander (Brasil) S.A.', 'Comercial Múltiplo'),
('260', 'Nu Pagamentos S.A. (Nubank)', 'Instituição de Pagamento'),
('077', 'Banco Inter S.A.', 'Múltiplo / Digital'),
('336', 'Banco C6 S.A.', 'Múltiplo / Digital'),
('208', 'Banco BTG Pactual S.A.', 'Investimento'),
('748', 'Banco Cooperativo Sicredi S.A.', 'Cooperativo');

-- 6. Agências (10 agências, garantindo pelo menos uma para cada um dos 10 bancos)
INSERT INTO agencias (cd_agencia, nm_fantasia, nm_gerente, id_banco, id_endereco) VALUES
('0001', 'BB Porto Velho', 'Carlos Silva', 1, 1),
('0100', 'Caixa Rio Branco', 'Ana Souza', 2, 2),
('1234', 'Bradesco Manaus', 'Marcos Lima', 3, 3),
('0500', 'Itaú Boa Vista', 'Juliana Rocha', 4, 4),
('3300', 'Santander Belém', 'Roberto Dias', 5, 5),
('0002', 'Nubank SP Tech', 'Fernanda Souza', 6, 24),
('0001', 'Inter BH Digital', 'Lucas Mendes', 7, 21),
('0001', 'C6 Bank SP', 'Patricia Lima', 8, 24),
('0001', 'BTG Pactual RJ', 'Bruno Costa', 9, 23),
('0101', 'Sicredi Curitiba', 'Mariana Prado', 10, 25);

-- 7. Correntistas (27 correntistas, exatamente um para cada estado)
INSERT INTO correntistas (nm_correntista, nr_cpf, dt_nascimento, email, id_endereco) VALUES
('Adalberto Souza', '11111111111', '1990-01-15', 'adalberto@email.com', 1),
('Biatriz Lima', '22222222222', '1992-02-20', 'biatriz@email.com', 2),
('Caio Mendes', '33333333333', '1985-03-10', 'caio@email.com', 3),
('Daniela Costa', '44444444444', '1995-04-05', 'daniela@email.com', 4),
('Eduardo Rocha', '55555555555', '1988-05-12', 'eduardo@email.com', 5),
('Fabiana Dias', '66666666666', '1993-06-18', 'fabiana@email.com', 6),
('Gabriel Prado', '77777777777', '1991-07-22', 'gabriel@email.com', 7),
('Helena Martins', '88888888888', '1987-08-30', 'helena@email.com', 8),
('Igor Ribeiro', '99999999999', '1994-09-14', 'igor@email.com', 9),
('Júlia Alencar', '10101010101', '1996-10-05', 'julia@email.com', 10),
('Kleber Santos', '12121212121', '1982-11-11', 'kleber@email.com', 11),
('Larissa Farias', '13131313131', '1997-12-01', 'larissa@email.com', 12),
('Marcos Vinicius', '14141414141', '1989-01-25', 'marcos@email.com', 13),
('Natália Queiroz', '15151515151', '1990-02-14', 'natalia@email.com', 14),
('Otávio Ramos', '16161616161', '1984-03-19', 'otavio@email.com', 15),
('Priscila Nogueira', '17171717171', '1995-05-08', 'priscila@email.com', 16),
('Quintino Barros', '18181818181', '1986-06-27', 'quintino@email.com', 17),
('Renata Teixeira', '19191919191', '1992-07-16', 'renata@email.com', 18),
('Sérgio Murilo', '20202020202', '1981-08-04', 'sergio@email.com', 19),
('Tatiane Freitas', '21212121212', '1998-09-29', 'tatiane@email.com', 20),
('Ubiratã Guedes', '23232323232', '1983-10-12', 'ubirata@email.com', 21),
('Vanessa Holanda', '24242424242', '1991-11-03', 'vanessa@email.com', 22),
('Wagner Moura', '25252525252', '1987-12-21', 'wagner@email.com', 23),
('Xênia Pires', '26262626262', '1994-01-30', 'xenia@email.com', 24),
('Yuri Bernardes', '27272727272', '1989-02-18', 'yuri@email.com', 25),
('Zilda Arantes', '28282828282', '1990-04-11', 'zilda@email.com', 26),
('Bruno Almeida', '29292929292', '1998-05-14', 'bruno.almeida@email.com', 27);

-- 8. Telefones (Pelo menos um telefone para cada um dos 27 correntistas)
INSERT INTO telefones (nr_ddd, nr_telefone, tp_telefone, id_correntista) VALUES
(69, 981111111, 'Celular', 1),
(68, 982222222, 'Celular', 2),
(92, 983333333, 'Celular', 3),
(95, 984444444, 'Celular', 4),
(91, 985555555, 'Celular', 5),
(96, 986666666, 'Celular', 6),
(63, 987777777, 'Celular', 7),
(98, 988888888, 'Celular', 8),
(86, 989999999, 'Celular', 9),
(85, 991111111, 'Celular', 10),
(84, 992222222, 'Celular', 11),
(83, 993333333, 'Celular', 12),
(81, 994444444, 'Celular', 13),
(82, 995555555, 'Celular', 14),
(79, 996666666, 'Celular', 15),
(71, 997777777, 'Celular', 16),
(65, 998888888, 'Celular', 17),
(67, 999999999, 'Celular', 18),
(62, 981122334, 'Celular', 19),
(61, 982233445, 'Celular', 20),
(31, 983344556, 'Celular', 21),
(27, 984455667, 'Celular', 22),
(21, 985566778, 'Celular', 23),
(11, 986677889, 'Celular', 24),
(41, 987788990, 'Celular', 25),
(48, 988899001, 'Celular', 26),
(51, 989900112, 'Celular', 27);

-- 9. Tipos de Conta
INSERT INTO tipos_conta (ds_tipo_conta) VALUES
('Conta Corrente'),
('Conta Poupança'),
('Conta Salário');

-- 10. Contas (Uma conta vinculada para cada correntista)
INSERT INTO contas (nr_conta, st_conta, id_correntista, id_agencia, id_tipo_conta) VALUES
('10001-1', 'Ativa', 1, 1, 1),
('10002-2', 'Ativa', 2, 2, 1),
('10003-3', 'Ativa', 3, 3, 1),
('10004-4', 'Ativa', 4, 4, 2),
('10005-5', 'Ativa', 5, 5, 1),
('10006-6', 'Ativa', 6, 6, 3),
('10007-7', 'Ativa', 7, 7, 1),
('10008-8', 'Ativa', 8, 8, 2),
('10009-9', 'Ativa', 9, 9, 1),
('10010-0', 'Ativa', 10, 10, 3),
('10011-1', 'Ativa', 11, 1, 2),
('10012-2', 'Ativa', 12, 2, 1),
('10013-3', 'Ativa', 13, 3, 3),
('10014-4', 'Ativa', 14, 4, 1),
('10015-5', 'Ativa', 15, 5, 2),
('10016-6', 'Ativa', 16, 6, 1),
('10017-7', 'Ativa', 17, 7, 3),
('10018-8', 'Ativa', 18, 8, 1),
('10019-9', 'Ativa', 19, 9, 2),
('10020-0', 'Ativa', 20, 10, 1),
('10021-1', 'Ativa', 21, 1, 3),
('10022-2', 'Ativa', 22, 2, 1),
('10023-3', 'Ativa', 23, 3, 2),
('10024-4', 'Ativa', 24, 4, 1),
('10025-5', 'Ativa', 25, 5, 3),
('10026-6', 'Ativa', 26, 6, 1),
('10027-7', 'Ativa', 27, 7, 2);