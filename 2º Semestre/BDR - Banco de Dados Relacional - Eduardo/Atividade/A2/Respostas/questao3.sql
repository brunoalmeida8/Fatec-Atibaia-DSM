

SELECT f.nm_funcionario AS nome,
    g.ds_genero AS genero,
    ci.nm_cidade AS cidade,
    ca.ds_cargo AS cargo,
    d.ds_departamento AS departamento
FROM funcionarios AS f
JOIN genero AS g
    ON f.id_genero = g.id_genero
JOIN cidades AS ci
    ON f.id_cidade = ci.id_cidade
JOIN cargos AS ca
    ON f.id_cargo = ca.id_cargo
JOIN departamentos AS d
    ON f.id_departamento = d.id_departamento
JOIN status AS s
    ON f.id_status = s.id_status
JOIN estados AS e
    ON ci.id_estado = e.id_estado
JOIN regioes AS r
    ON e.id_regiao = r.id_regiao

WHERE s.ds_status NOT IN ("AFASTAMENTO INSS")
    AND r.ds_regiao NOT IN ('SUL')
    AND (ca.ds_cargo = 'GERENTE' OR ca.ds_cargo = 'SECRETARIA')
    AND d.ds_departamento = 'FINANCEIRO'
ORDER BY ca.ds_cargo ASC;





