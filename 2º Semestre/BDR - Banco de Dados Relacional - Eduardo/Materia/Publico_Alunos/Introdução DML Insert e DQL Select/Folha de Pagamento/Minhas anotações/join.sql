-- explicito
SELECT f.nm_funcionario,
        f.dt_nasc, c.ds_cargo, m.ds_cidade AS nasceu,
        r.ds_cidade AS reside, e.ds_uf nasceu_uf
FROM funcionarios AS f
JOIN cargos AS c
    ON f.id_cargo = c.id_cargo
JOIN cidades AS m
    ON f.id_cidade = m.id_cidade
JOIN cidades AS r
    ON f.id_cidade_reside = r.id_cidade
JOIN estados AS e
    ON m.id_uf = e.id_uf

-- pegar funcionario com nome, genero, cargo, departamento, 
-- em que salario < 2000 e não seja gerente.
-- usa JOIN pq genero, cargo, departamento estão em outra tabela e nao na funcionarios 
SELECT f.nm_funcionario AS nome,
    g.ds_genero AS genero,
    c.ds_cargo AS cargo,
    d.ds_departamento AS departamento
FROM funcionarios AS f
JOIN genero AS g
    ON f.id_genero = g.id_genero
JOIN cargos AS c
    ON f.id_cargo = c.id_cargo
JOIN departamentos AS d
    ON f.id_departamento = d.id_departamento
WHERE f.vl_salario < 2000
    AND c.ds_cargo NOT IN ('gerente');