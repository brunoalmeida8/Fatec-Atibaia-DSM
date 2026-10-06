SELECT d.nm_dependente AS "nome do dependente",
    f.nm_funcionario AS "nome do funcionario",
    g.ds_grau AS "grau de parentesco"

FROM dependentes AS d
JOIN funcionarios AS f
    ON d.id_funcionario = f.id_funcionario
JOIN grau AS g
    ON d.id_grau = g.id_grau
JOIN estados AS e
    ON d.id_estado = e.id_estado
JOIN genero AS x
    ON d.id_genero = x.id_genero

WHERE g.ds_grau = 'FILHO(A)'
    AND (e.sg_estado NOT IN ('MG') OR e.sg_estado NOT IN ('PA'))
    AND x.ds_genero = 'FEMININO'
ORDER BY d.nm_dependente ASC;
