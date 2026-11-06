CREATE DATABASE bd_projeto_mvc;
USE bd_projeto_mvc;

CREATE TABLE produtos(
    id INT AUTO_INCREMENT PRIMARY KEY,
    codigo VARCHAR(20) NOT NULL,
    nome VARCHAR(100) NOT NULL,
    descricao TEXT,
    categoria VARCHAR(50),
    preco DECIMAL(10,2) NOT NULL
);

USE bd_projeto_mvc;

CREATE TABLE clientes(
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    cpf VARCHAR(15) NOT NULL,
    telefone VARCHAR(20) NOT NULL,
    endereco VARCHAR(100) NOT NULL
);



