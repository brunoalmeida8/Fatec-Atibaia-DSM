CREATE DATABASE petshop_mvc;
USE petshop_mvc;
CREATE TABLE cliente(
    clienteId INT NOT NULL AUTO_INCREMENT,
    nome VARCHAR(100) DEFAULT NULL,
    cpf VARCHAR(14) DEFAULT NULL,
    telefone VARCHAR(20) DEFAULT NULL,
    email VARCHAR(100) DEFAULT NULL,
    PRIMARY KEY(clienteId)
);

CREATE TABLE pet(
    petId INT NOT NULL AUTO_INCREMENT,
    nome VARCHAR(200) DEFAULT NULL,
    especie VARCHAR(100) DEFAULT NULL,
    raca VARCHAR(50) DEFAULT NULL,
    dataNascimento DATE DEFAULT NULL,
    clienteId INT DEFAULT NULL,
    PRIMARY KEY(petId),
    CONSTRAINT fk_cliente FOREIGN KEY (clienteId)
    REFERENCES cliente(clienteId)
);

DESCRIBE cliente;