SELECT f.nm_funcionario AS nome,
    c.ds_cargo AS cargo,
    d.ds_departamento AS departamento,
    f.vl_salario AS salario
FROM funcionarios AS f
JOIN cargos AS c
    ON f.id_cargo = c.id_cargo
JOIN departamentos AS d
    ON f.id_departamento = d.id_departamento
JOIN status AS s
    ON f.id_status = s.id_status


 WHERE f.vl_salario BETWEEN 2100 AND 3500 
    AND s.ds_status = 'ativo'
	AND (d.ds_departamento = 'TI' OR d.ds_departamento = 'RH')
ORDER BY f.nm_funcionario ASC;