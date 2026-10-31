CREATE DATABASE IF NOT EXISTS veiculo;
USE veiculo;

-- 1. Tabela Proprietários
CREATE TABLE proprietarios (
    id_proprietario INT AUTO_INCREMENT PRIMARY KEY,
    nr_cpf BIGINT NOT NULL UNIQUE,
    nm_proprietario VARCHAR(100) NOT NULL
);

-- 2. Tabela Marcas
CREATE TABLE marcas (
    id_marca INT AUTO_INCREMENT PRIMARY KEY,
    ds_marca VARCHAR(50) NOT NULL UNIQUE
);

-- 3. Tabela Modelos
CREATE TABLE modelos (
    id_modelo INT AUTO_INCREMENT PRIMARY KEY,
    ds_modelo VARCHAR(50) NOT NULL UNIQUE,
    id_marca INT NOT NULL,
    CONSTRAINT fk_modelos_marcas 
        FOREIGN KEY (id_marca) 
        REFERENCES marcas(id_marca) 
        ON UPDATE CASCADE
);

-- 4. Tabela Estados
CREATE TABLE estados (
    id_estado INT AUTO_INCREMENT PRIMARY KEY,
    sg_estado CHAR(2) NOT NULL UNIQUE
);

-- 5. Tabela Cores
CREATE TABLE cores (
    id_cor INT AUTO_INCREMENT PRIMARY KEY,
    ds_cor VARCHAR(50) NOT NULL UNIQUE
);

-- 6. Tabela Veículos
CREATE TABLE veiculos (
    id_veiculo INT AUTO_INCREMENT PRIMARY KEY,
    nr_renavam BIGINT NOT NULL UNIQUE,
    placa CHAR(7) NOT NULL UNIQUE,
    ano_modelo INT NOT NULL,
    ano_fabricacao INT NOT NULL,
    id_proprietario INT NOT NULL,
    id_modelo INT NOT NULL,
    id_estado INT NOT NULL,
    id_cor INT NOT NULL,
    
    CONSTRAINT fk_veiculos_proprietarios 
        FOREIGN KEY (id_proprietario) 
        REFERENCES proprietarios(id_proprietario) 
        ON UPDATE CASCADE,
        
    CONSTRAINT fk_veiculos_modelos 
        FOREIGN KEY (id_modelo) 
        REFERENCES modelos(id_modelo) 
        ON UPDATE CASCADE,
        
    CONSTRAINT fk_veiculos_estados 
        FOREIGN KEY (id_estado) 
        REFERENCES estados(id_estado) 
        ON UPDATE CASCADE,
        
    CONSTRAINT fk_veiculos_cores 
        FOREIGN KEY (id_cor) 
        REFERENCES cores(id_cor) 
        ON UPDATE CASCADE
);