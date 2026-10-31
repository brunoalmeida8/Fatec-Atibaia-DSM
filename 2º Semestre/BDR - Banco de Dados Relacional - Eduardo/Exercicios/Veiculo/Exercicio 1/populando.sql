-- ====================================================================
-- SCRIPT DE POPULAÇÃO LIMPO - SISTEMA DE VEÍCULOS
-- ====================================================================

USE veiculo;

-- --------------------------------------------------------------------
-- 1. ESTADOS (27 UFs)
-- --------------------------------------------------------------------
INSERT INTO estados (sg_estado) VALUES
('RO'), ('AC'), ('AM'), ('RR'), ('PA'), ('AP'), ('TO'),
('MA'), ('PI'), ('CE'), ('RN'), ('PB'), ('PE'), ('AL'), ('SE'), ('BA'),
('MT'), ('MS'), ('GO'), ('DF'),
('MG'), ('ES'), ('RJ'), ('SP'),
('PR'), ('SC'), ('RS');

-- --------------------------------------------------------------------
-- 2. CORES
-- --------------------------------------------------------------------
INSERT INTO cores (ds_cor) VALUES
('Branco'), ('Preto'), ('Prata'), ('Cinza'), ('Vermelho'), 
('Azul'), ('Verde'), ('Amarelo'), ('Marrom'), ('Branco Pérola');

-- --------------------------------------------------------------------
-- 3. MARCAS (27 Marcas Únicas)
-- --------------------------------------------------------------------
INSERT INTO marcas (ds_marca) VALUES
('Chevrolet'), ('Volkswagen'), ('Fiat'), ('Toyota'), ('Hyundai'), 
('Renault'), ('Honda'), ('Jeep'), ('Nissan'), ('Caoa Chery'), 
('Peugeot'), ('Citroën'), ('Ford'), ('Mitsubishi'), ('BMW'), 
('Mercedes-Benz'), ('Audi'), ('Volvo'), ('Land Rover'), ('Porsche'), 
('Kia'), ('Subaru'), ('Suzuki'), ('Lexus'), ('RAM'), 
('Mini'), ('BYD');

-- --------------------------------------------------------------------
-- 4. MODELOS (10 modelos para cada uma das 27 marcas)
-- --------------------------------------------------------------------
INSERT INTO modelos (ds_modelo, id_marca) VALUES
-- 1. Chevrolet (id_marca = 1)
('Cobalt LS 1.4', 1), ('Onix Plus', 1), ('Tracker Premier', 1), ('Cruze Sport6', 1), ('Spin Activ', 1),
('S10 High Country', 1), ('Equinox RS', 1), ('Camaro SS', 1), ('Montana LTZ', 1), ('Blazer EV', 1),

-- 2. Volkswagen (id_marca = 2)
('Gol 1.0', 2), ('Polo Track', 2), ('Virtus Highline', 2), ('T-Cross Comfortline', 2), ('Nivus Highline', 2),
('Taos Highline', 2), ('Amarok V6', 2), ('Jetta GLI', 2), ('Saveiro Robust', 2), ('ID.4 GTX', 2),

-- 3. Fiat (id_marca = 3)
('Argo 1.0', 3), ('Mobi Like', 3), ('Pulse Audace', 3), ('Fastback Limited', 3), ('Strada Volcano', 3),
('Toro Volcano', 3), ('Cronos Precision', 3), ('Fiorino Endurance', 3), ('Ducato Cargo', 3), ('Scudo Cargo', 3),

-- 4. Toyota (id_marca = 4)
('Corolla XEI', 4), ('Corolla Cross XRX', 4), ('Hilux SRX', 4), ('Yaris Hatch XL', 4), ('Yaris Sedan XS', 4),
('SW4 SRX', 4), ('RAV4 Hybrid', 4), ('Camry XLE', 4), ('Land Cruiser Prado', 4), ('Prius', 4),

-- 5. Hyundai (id_marca = 5)
('HB20 Comfort', 5), ('HB20S Limited', 5), ('Creta Ultimate', 5), ('Tucson GLS', 5), ('Santa Fe Calligraphy', 5),
('Kona Electric', 5), ('Ioniq 5', 5), ('Palisade', 5), ('Elantra', 5), ('Veloster', 5),

-- 6. Renault (id_marca = 6)
('Kwid Zen', 6), ('Stepway Iconic', 6), ('Duster Iconic', 6), ('Captur Intens', 6), ('Oroch Outsider', 6),
('Master Furgão', 6), ('Megane E-Tech', 6), ('Kangoo Express', 6), ('Fluence Privilège', 6), ('Sandero RS', 6),

-- 7. Honda (id_marca = 7)
('Civic Touring', 7), ('City Hatch EXL', 7), ('City Sedan EXL', 7), ('HR-V Advance', 7), ('ZR-V Touring', 7),
('CR-V Advanced Hybrid', 7), ('Accord Hybrid', 7), ('Civic Type R', 7), ('Fit EXL', 7), ('WR-V EXL', 7),

-- 8. Jeep (id_marca = 8)
('Renegade Sport', 8), ('Compass Longitude', 8), ('Commander Overland', 8), ('Grand Cherokee 4xe', 8), ('Wrangler Rubicon', 8),
('Gladiator Rubicon', 8), ('Cherokee Limited', 8), ('Patriot', 8), ('Liberty', 8), ('Commander Limited', 8),

-- 9. Nissan (id_marca = 9)
('Kicks Exclusive', 9), ('Versa Exclusive', 9), ('Frontier Pro-4X', 9), ('Sentra Advance', 9), ('Leaf Tekna', 9),
('March SV', 9), ('Pathfinder', 9), ('X-Trail', 9), ('Murano', 9), ('GT-R', 9),

-- 10. Caoa Chery (id_marca = 10)
('Tiggo 5X Pro', 10), ('Tiggo 7 Pro Max', 10), ('Tiggo 8 Pro', 10), ('Arrizo 6 Pro', 10), ('iCar', 10),
('Tiggo 2', 10), ('Tiggo 3X', 10), ('Arrizo 5', 10), ('QQ Impulso', 10), ('Exeed TXL', 10),

-- 11. Peugeot (id_marca = 11)
('208 Like', 11), ('2008 Griffe', 11), ('3008 GT', 11), ('5008 GT', 11), ('Expert Furgão', 11),
('Partner Rapid', 11), ('Boxer Furgão', 11), ('408 Turbo', 11), ('308 Allure', 11), ('e-208 GT', 11),

-- 12. Citroën (id_marca = 12)
('C3 Live', 12), ('C3 Aircross Feel', 12), ('C4 Cactus Feel', 12), ('Jumpy Furgão', 12), ('Berlingo', 12),
('Jumper Furgão', 12), ('C4 Lounge', 12), ('C5 Aircross', 12), ('Ami', 12), ('C3 Picasso', 12),

-- 13. Ford (id_marca = 13)
('Ranger Limited', 13), ('Maverick Lariat', 13), ('Mustang Mach 1', 13), ('Territory Titanium', 13), ('Bronco Sport', 13),
('Transit Furgão', 13), ('F-150 Lariat', 13), ('Mustang Mach-E', 13), ('Edge ST', 13), ('Ka Sedan', 13),

-- 14. Mitsubishi (id_marca = 14)
('L200 Triton Sport', 14), ('Eclipse Cross HPE', 14), ('Outlander Sport', 14), ('Pajero Sport HPE', 14), ('ASX AWD', 14),
('Lancer Evolution', 14), ('Attrage', 14), ('Montero', 14), ('i-MiEV', 14), ('Galant', 14),

-- 15. BMW (id_marca = 15)
('Série 3 320i', 15), ('X1 sDrive20i', 15), ('X3 xDrive30i', 15), ('X5 xDrive50e', 15), ('Série 1 118i', 15),
('Z4 Roadster', 15), ('M3 Competition', 15), ('i4 M50', 15), ('iX xDrive40', 15), ('Série 7 740i', 15),

-- 16. Mercedes-Benz (id_marca = 16)
('Classe C 180', 16), ('Classe A 200', 16), ('GLA 200', 16), ('GLB 200', 16), ('GLE 400d', 16),
('EQE 300', 16), ('EQS 450+', 16), ('Sprinter Furgão', 16), ('Classe G 63', 16), ('AMG GT', 16),

-- 17. Audi (id_marca = 17)
('A3 Sedan Performance', 17), ('A4 Prestige', 17), ('Q3 Performance Black', 17), ('Q5 S-Line', 17), ('Q8 e-tron', 17),
('RS6 Avant', 17), ('RS7 Sportback', 17), ('TT Roadster', 17), ('A5 Sportback', 17), ('Q7 Ambient', 17),

-- 18. Volvo (id_marca = 18)
('XC40 Recharge', 18), ('XC60 Ultimate', 18), ('XC90 Recharge', 18), ('C40 Recharge', 18), ('EX30 Single Motor', 18),
('EX90 Excellence', 18), ('S60 Inscription', 18), ('V60 Cross Country', 18), ('S90 Momentum', 18), ('V90 Cross Country', 18),

-- 19. Land Rover (id_marca = 19)
('Defender 110', 19), ('Discovery Sport', 19), ('Range Rover Evoque', 19), ('Range Rover Velar', 19), ('Range Rover Sport', 19),
('Range Rover Autobiography', 19), ('Discovery Metropolitan', 19), ('Freelander 2', 19), ('Defender 90', 19), ('Defender 130', 19),

-- 20. Porsche (id_marca = 20)
('911 Carrera', 20), ('Cayenne Coupe', 20), ('Macan S', 20), ('Panamera 4', 20), ('Taycan 4S', 20),
('718 Cayman', 20), ('718 Boxster', 20), ('911 GT3 RS', 20), ('Cayenne Turbo GT', 20), ('Taycan Turbo S', 20),

-- 21. Kia (id_marca = 21)
('Sportage EX', 21), ('Stonic SX', 21), ('Niro SX', 21), ('Carnival EX', 21), ('Sorento', 21),
('Cerato SX', 21), ('Soul EV', 21), ('Stinger GT', 21), ('Mohave', 21), ('EV6 GT', 21),

-- 22. Subaru (id_marca = 22)
('Forester Touring', 22), ('Outback Field', 22), ('XV Crosstrek', 22), ('WRX STI', 22), ('Impreza Hatch', 22),
('BRZ Coupe', 22), ('Ascent', 22), ('Legacy', 22), ('Tribeca', 22), ('Justy', 22),

-- 23. Suzuki (id_marca = 23)
('Vitara Yoki', 23), ('Jimny Sierra Style', 23), ('Grand Vitara', 23), ('Swift Sport', 23), ('S-Cross', 23),
('Baleno', 23), ('Ignis', 23), ('Celerio', 23), ('Ertiga', 23), ('XL7', 23),

-- 24. Lexus (id_marca = 24)
('UX 250h', 24), ('NX 350h', 24), ('RX 500h', 24), ('ES 300h', 24), ('LS 500h', 24),
('IS 300 F-Sport', 24), ('LC 500', 24), ('LX 600', 24), ('RC F', 24), ('RZ 450e', 24),

-- 25. RAM (id_marca = 25)
('RAM 1500 Rebel', 25), ('RAM 2500 Laramie', 25), ('RAM 3500 Longhorn', 25), ('RAM Rampage Rebel', 25), ('RAM Rampage Laramie', 25),
('RAM Classic', 25), ('RAM 1500 Limited', 25), ('RAM TRX', 25), ('RAM ProMaster', 25), ('RAM 4000', 25),

-- 26. Mini (id_marca = 26)
('Mini Cooper S', 26), ('Mini Countryman ALL4', 26), ('Mini Clubman', 26), ('Mini Cabrio', 26), ('Mini Electric', 26),
('Mini JCW GP', 26), ('Mini Paceman', 26), ('Mini One', 26), ('Mini Cooper SE', 26), ('Mini Aceman', 26),

-- 27. BYD (id_marca = 27)
('Dolphin Plus', 27), ('Song Plus DM-I', 27), ('Seal EV', 27), ('Yuan Plus', 27), ('Han EV', 27),
('Tan EV', 27), ('King DM-I', 27), ('Shark', 27), ('Dolphin Mini', 27), ('U8 Yangwang', 27);

-- --------------------------------------------------------------------
-- 5. PROPRIETÁRIOS (Incluindo o Bruno Almeida)
-- --------------------------------------------------------------------
INSERT INTO proprietarios (nr_cpf, nm_proprietario) VALUES
(29292929292, 'Bruno Almeida'),
(11111111111, 'Adalberto Souza'),
(22222222222, 'Biatriz Lima'),
(33333333333, 'Caio Mendes'),
(44444444444, 'Daniela Costa'),
(55555555555, 'Eduardo Rocha'),
(66666666666, 'Fabiana Dias'),
(77777777777, 'Gabriel Prado'),
(88888888888, 'Helena Martins'),
(99999999999, 'Igor Ribeiro');

-- --------------------------------------------------------------------
-- 6. VEÍCULOS (Garantindo o Cobalt do Bruno e outros cadastros)
-- --------------------------------------------------------------------
INSERT INTO veiculos (nr_renavam, placa, ano_modelo, ano_fabricacao, id_proprietario, id_modelo, id_estado, id_cor) VALUES
(12345678901, 'ABC1D23', 2013, 2013, 1, 1, 24, 2), -- Cobalt do Bruno (SP, Preto)
(22345678902, 'XYZ9W87', 2022, 2022, 2, 11, 1, 1), -- Adalberto (RO) com Gol 1.0
(32345678903, 'BRA2E19', 2021, 2020, 3, 21, 2, 3), -- Caio (AC) com Argo 1.0
(42345678904, 'RIO4F56', 2023, 2023, 4, 31, 23, 4), -- Daniela (RJ) com Corolla
(52345678905, 'MIN5G67', 2019, 2018, 5, 41, 21, 5), -- Eduardo (MG) com HB20
(62345678906, 'BAH6H78', 2022, 2022, 6, 51, 16, 1), -- Fabiana (BA) com Kwid
(72345678907, 'PAR7I89', 2020, 2020, 7, 61, 25, 6), -- Gabriel (PR) com Civic
(82345678908, 'SUL8J90', 2021, 2021, 8, 71, 26, 3), -- Helena (SC) com Renegade
(92345678909, 'CEN9K01', 2024, 2024, 9, 81, 20, 2), -- Igor (DF) com Kicks
(13345678910, 'NOR0L12', 2018, 2018, 10, 101, 10, 7); -- 10º proprietário com Peugeot 208

-- Reativa as verificações de chave estrangeira
SET FOREIGN_KEY_CHECKS = 1;