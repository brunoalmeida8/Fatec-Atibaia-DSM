create database 

create table proprietarios(
    id_estado int auto_increment primary key,
    nr_cpf bigint(11) not null unique,
    nm_proprietario varchar(100) not null
);