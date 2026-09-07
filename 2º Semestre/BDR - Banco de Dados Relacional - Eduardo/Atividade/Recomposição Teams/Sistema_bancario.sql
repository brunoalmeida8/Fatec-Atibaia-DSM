-- BANCO DE DADOS
CREATE DATABASE IF NOT EXISTS sistema_bancario;
USE sistema_bancario;

-- table regioes
CREATE TABLE regioes(
    id_regiao INT AUTO_INCREMENT,
    ds_regiao VARCHAR(50) NOT NULL,
    PRIMARY KEY (id_regiao)
);

-- table estados
CREATE TABLE estados(
    id_estado INT AUTO_INCREMENT PRIMARY KEY,
    sg_estado CHAR(2) NOT NULL,
    ds_estado VARCHAR(100) NOT NULL,
    id_regiao INT NOT NULL,
    CONSTRAINT fk_estados_regioes FOREIGN KEY (id_regiao) 
    REFERENCES regioes(id_regiao)
);

-- table municipios
CREATE TABLE municipios(
    id_municipio INT AUTO_INCREMENT,
    ds_municipio VARCHAR(100) NOT NULL,
    id_estado INT NOT NULL,
    PRIMARY KEY (id_municipio)
);

-- fk_municipios_estados 
ALTER TABLE municipios 
ADD CONSTRAINT fk_municipios_estados FOREIGN KEY (id_estado)
REFERENCES estados (id_estado);


-- table enderecos
CREATE TABLE enderecos(
    id_endereco INT NOT NULL,
    nr_cep VARCHAR(8) NOT NULL,
    ds_logradouro VARCHAR(100) NOT NULL,
    nr_endereco VARCHAR(10),
    ds_complemento VARCHAR(50),
    nm_bairro VARCHAR(100),
    id_municipio INT
);

-- pk id_endereco e fk_enderecos_municipios
ALTER TABLE enderecos
ADD PRIMARY KEY (id_endereco),
MODIFY COLUMN id_endereco INT AUTO_INCREMENT,
ADD CONSTRAINT fk_enderecos_municipios
FOREIGN KEY (id_municipio) REFERENCES municipios (id_municipio)
ON UPDATE CASCADE;

-- table bancos
CREATE TABLE bancos(
    id_banco INT AUTO_INCREMENT PRIMARY KEY,
    cd_banco VARCHAR(10) NOT NULL,
    ds_banco VARCHAR(100) NOT NULL,
    tp_operacao VARCHAR(45) NOT NULL
)

-- table agencias
CREATE TABLE agencias(
    id_agencia INT AUTO_INCREMENT PRIMARY KEY,
    cd_agencia VARCHAR(10) NOT NULL,
    nm_fantasia VARCHAR(100) NOT NULL,
    nm_gerente VARCHAR(100) NOT NULL,
    id_banco INT,
    id_endereco INT,
    CONSTRAINT fk_agencias_bancos FOREIGN KEY (id_banco)
    REFERENCES bancos (id_banco)
    ON UPDATE CASCADE,
    CONSTRAINT fk_agencias_enderecos FOREIGN KEY (id_endereco)
    REFERENCES enderecos (id_endereco)
    ON UPDATE CASCADE
);

-- table telefones
CREATE TABLE telefones (
    id_telefone INT AUTO_INCREMENT PRIMARY KEY,
    nr_ddd INT NOT NULL,
    nr_telefone BIGINT NOT NULL,
    tp_telefone VARCHAR(45) NOT NULL,
    id_correntista INT
);

-- table correntistas
CREATE TABLE correntistas (
    id_correntista INT AUTO_INCREMENT PRIMARY KEY,
    nm_correntista VARCHAR(100) NOT NULL,
    nr_cpf VARCHAR(11) NOT NULL UNIQUE,
    dt_nascimento DATE NOT NULL,
    email VARCHAR(100) NOT NULL,
    id_endereco INT,
    CONSTRAINT fk_correntistas_enderecos FOREIGN KEY (id_endereco)
    REFERENCES enderecos (id_endereco)
    ON UPDATE CASCADE
);

-- fk_telefones_correntistas
ALTER TABLE telefones
ADD CONSTRAINT fk_telefones_correntistas FOREIGN KEY (id_correntista)
REFERENCES correntistas (id_correntista)
ON UPDATE CASCADE;


-- table tipos_conta
CREATE TABLE tipos_conta(
    id_tipo_conta INT AUTO_INCREMENT,
    ds_tipo_conta VARCHAR(30) NOT NULL,
    PRIMARY KEY (id_tipo_conta)
);

-- table contas
CREATE TABLE contas(
    id_conta INT AUTO_INCREMENT PRIMARY KEY,
    nr_conta VARCHAR(20) NOT NULL UNIQUE,
    st_conta VARCHAR(10) NOT NULL,
    id_correntista INT,
    id_agencia INT,
    id_tipo_conta INT,
    CONSTRAINT fk_contas_correntistas FOREIGN KEY (id_correntista)
    REFERENCES correntistas (id_correntista) ON UPDATE CASCADE,
    CONSTRAINT fk_contas_agencias FOREIGN KEY (id_agencia)
    REFERENCES agencias (id_agencia) ON UPDATE CASCADE,
    CONSTRAINT fk_contas_tipos_conta FOREIGN KEY (id_tipo_conta)
    REFERENCES tipos_conta (id_tipo_conta) ON UPDATE CASCADE
);

-- remover restricao UNIQUE de nr_conta
ALTER TABLE contas
DROP INDEX nr_conta;

-- adicionar restricoes UNIQUE na tabela estados
ALTER TABLE estados
ADD CONSTRAINT un_sg_estado UNIQUE (sg_estado),
ADD CONSTRAINT un_ds_estado UNIQUE (ds_estado);

-- Adicionar restrição UNIQUE no CPF do correntista
ALTER TABLE correntistas
ADD CONSTRAINT un_nr_cpf UNIQUE (nr_cpf);