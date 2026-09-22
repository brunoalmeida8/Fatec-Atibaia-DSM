-- * é todas as colunas
SELECT * FROM cargos;

SELECT ds_cargo FROM cargos;

-- só as colunas id e ds , da tabela cargos, só das linhas 
SELECT id_cargo, ds_cargo FROM cargos WHERE ds_cargo = "diretor";

-- apelido usa o AS mas nao é obrigatorio
SELECT id_cargo AS codigo, ds_cargo descricao FROM cargos WHERE ds_cargo = "diretor";

-- trazendo todos os funcionario usanso apelido
SELECT nm_funcionario AS nome, ds_email email, ds_apresentacao apresentação FROM funcionarios;

-- ordem alfabetica
SELECT nm_funcionario AS nome,
    ds_email email,
    ds_apresentacao apresentação
    FROM funcionarios
    ORDER BY nm_funcionario ASC;

-- salario entre 1000 e abaixo de 2000
SELECT nm_funcionario AS nome,
    vl_salario as salario ,
    ds_apresentacao apresentação
    FROM funcionarios
    -- WHERE vl_salario >= 1000 AND vl_salario < 2000
    WHERE vl_salario BETWEEN 1000 AND 2000
    ORDER BY nome;-- ou nm_funcionario

-- funcionarios masculino e salario entre 1000 e 2000
SELECT nm_funcionario AS nome,
    vl_salario AS salario,
    id_genero AS genero
    FROM funcionarios
    WHERE vl_salario BETWEEN 1000 AND 2000 AND id_genero = 1
    ORDER BY nome;-- ou nm_funcionario

-- funcionarios da cidade sp jundiai e londrina e tbm departamento financeiro
SELECT nm_funcionario AS nome
    FROM funcionarios
    WHERE (id_cidade = 500 OR id_cidade = 505 OR id_cidade = 525)
    AND id_departamento = 2000
    ORDER BY nm_funcionario ASC;