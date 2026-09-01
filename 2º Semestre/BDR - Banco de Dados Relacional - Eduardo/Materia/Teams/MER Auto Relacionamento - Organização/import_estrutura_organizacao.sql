-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 18/08/2026 às 15:37
-- Versão do servidor: 10.4.32-MariaDB
-- Versão do PHP: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `erp`
--

-- --------------------------------------------------------

--
-- Estrutura para tabela `estado`
--

CREATE TABLE `estado` (
  `id_estado` int(11) NOT NULL,
  `ds_estado` varchar(50) NOT NULL,
  `sg_estado` varchar(2) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `estrutura`
--

CREATE TABLE `estrutura` (
  `id_estrutura` int(11) NOT NULL,
  `cd_estrutura` varchar(50) NOT NULL,
  `id_tipo_estrutura` int(11) NOT NULL,
  `id_estrutura_pai` int(11) DEFAULT NULL,
  `ds_estrutura` varchar(255) NOT NULL,
  `nr_cnpj` varchar(14) NOT NULL,
  `id_municipio` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `municipio`
--

CREATE TABLE `municipio` (
  `id_municipio` int(11) NOT NULL,
  `id_estado` int(11) NOT NULL,
  `ds_municipio` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `tipo_estrutura`
--

CREATE TABLE `tipo_estrutura` (
  `id_tipo_estrutura` int(11) NOT NULL,
  `ds_tipo_estrutura` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Índices para tabelas despejadas
--

--
-- Índices de tabela `estado`
--
ALTER TABLE `estado`
  ADD PRIMARY KEY (`id_estado`),
  ADD UNIQUE KEY `uk_ds_estado` (`ds_estado`);

--
-- Índices de tabela `estrutura`
--
ALTER TABLE `estrutura`
  ADD PRIMARY KEY (`id_estrutura`),
  ADD KEY `FK_municipio` (`id_municipio`),
  ADD KEY `FK_estrutura_tipo` (`id_tipo_estrutura`),
  ADD KEY `FK_estrutura_pai` (`id_estrutura_pai`);

--
-- Índices de tabela `municipio`
--
ALTER TABLE `municipio`
  ADD PRIMARY KEY (`id_municipio`),
  ADD KEY `Fk_estado` (`id_estado`);

--
-- Índices de tabela `tipo_estrutura`
--
ALTER TABLE `tipo_estrutura`
  ADD PRIMARY KEY (`id_tipo_estrutura`),
  ADD UNIQUE KEY `uk_ds_tp_estrutura` (`ds_tipo_estrutura`);

--
-- AUTO_INCREMENT para tabelas despejadas
--

--
-- AUTO_INCREMENT de tabela `estado`
--
ALTER TABLE `estado`
  MODIFY `id_estado` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `estrutura`
--
ALTER TABLE `estrutura`
  MODIFY `id_estrutura` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `municipio`
--
ALTER TABLE `municipio`
  MODIFY `id_municipio` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `tipo_estrutura`
--
ALTER TABLE `tipo_estrutura`
  MODIFY `id_tipo_estrutura` int(11) NOT NULL AUTO_INCREMENT;

--
-- Restrições para tabelas despejadas
--

--
-- Restrições para tabelas `estrutura`
--
ALTER TABLE `estrutura`
  ADD CONSTRAINT `FK_estrutura_pai` FOREIGN KEY (`id_estrutura_pai`) REFERENCES `estrutura` (`id_estrutura`),
  ADD CONSTRAINT `FK_estrutura_tipo` FOREIGN KEY (`id_tipo_estrutura`) REFERENCES `tipo_estrutura` (`id_tipo_estrutura`),
  ADD CONSTRAINT `FK_municipio` FOREIGN KEY (`id_municipio`) REFERENCES `municipio` (`id_municipio`);

--
-- Restrições para tabelas `municipio`
--
ALTER TABLE `municipio`
  ADD CONSTRAINT `Fk_estado` FOREIGN KEY (`id_estado`) REFERENCES `estado` (`id_estado`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
