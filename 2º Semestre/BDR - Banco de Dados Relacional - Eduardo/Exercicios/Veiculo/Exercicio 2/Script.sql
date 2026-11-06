

SELECT E.ds_estado AS estado,
    I.ds_infracao AS infracoes,
    M.vl_multa,
    COUNT(*) AS Quantidade_Multas,
    SUM(M.vl_multa) AS Vl_Soma_Multas,
    MAX(M.vl_multa) AS Vl_Maior_Multa,
    MIN(M.vl_multa) AS Vl_Menor_Multa,
    AVG(M.vl_multa) AS Vl_Media_Multas
    FROM estados AS E
    JOIN multas AS M
        ON E.id_estado = M.id_estado
    JOIN infracoes AS I
        ON M.id_infracao = I.id_infracao
    JOIN veiculos AS V
       ON M.id_estado = V.id_estado
    
    -- se fosse tentar mostrar ds_fabricante, colocando WHERE + JOIN
    -- JOIN modelos AS MO
    --     ON V.id_modelo = MO.id_modelo
    -- JOIN fabricante AS F
    --     ON MO.id_fabricante = F.id_fabricante   

-- condições
    WHERE E.ds_estado NOT IN ('paraiba', 'ceara', 'pernambuco', 'tocantins')
       AND I.qt_pontos > 4
       AND vl_multa BETWEEN 500 AND 1500 -- aqui só traz uma linha, prof usou OR q estaria equivocado

-- premissas
    -- se fosse tentar mostrar ds_fabricante com WHERE + JOIN
    -- AND f.ds_fabricante in('Chevrolet','Honda','Ford','Fiat','Volkswagen','Toyota')
    
    AND EXISTS (SELECT 1
        FROM modelos AS MO
        JOIN fabricante AS F
            ON MO.id_fabricante = F.id_fabricante
        WHERE MO.id_modelo = V.id_modelo
        AND F.ds_fabricante in('Chevrolet','Honda','Ford','Fiat','Volkswagen','Toyota')
    )
    
    AND NOT EXISTS(SELECT 1
        FROM processos AS P
        WHERE M.id_multa = P.id_multa)

    GROUP BY E.ds_estado, I.ds_infracao, M.vl_multa
    
-- resultados
    HAVING COUNT(*) > 2 -- qtd multas superior a 2
        AND SUM(M.vl_multa) > 550 -- (usando a função de grupo) soma multa > 550,00
        AND Vl_Maior_Multa > 200 -- (usando o apelido/alias AS) a maior multa da linha > 200,00
    
-- ordem
    ORDER BY E.ds_estado ASC, I.ds_infracao ASC;





SELECT D.ds_departamento AS departamento,
    C.ds_cargo  AS cargo,
    COUT (*) AS qtde,
    SUM (f.vl_salario) AS folha, 
    FROM funcionarios AS F
    JOIN departamentos AS D
        ON F.id_departamento = D.id_departamento
    WHERE D.ds_departamento IN ('CONTABILIDADE, FINANCEIRO')
    GROUP BY D.ds_departamento, C.ds_cargo
    HAVING qtde > 19 AND folha > 138000;

###-------------------------------------------------------------------------------- Tarefa

Desenvolva uma única instrução SQL que apresente as seguintes informações:

1. A descrição do estado da federação.
2. A descrição da infração.
3. A quantidade de multas aplicadas, utilizando a função `COUNT(*)`.
4. A soma dos valores das multas, utilizando a função `SUM()`.
5. O maior valor de multa aplicada, utilizando a função `MAX()`.
6. O menor valor de multa aplicada, utilizando a função `MIN()`.
7. A média dos valores das multas, utilizando a função `AVG()`.

###-------------------------------------------------------------------------------- Resultado Esperado

Estado   	Infracao					Quantidade_Multas	Vl_Soma_Multas	Vl_Maior_Multa	Vl_Menor_Multa	Vl_Media_Multas	
------          ---------------------------------------------   -----------------       --------------  --------------  --------------  ---------------
Amapá	        Conduzir veículo sem licenciamento		3			880.41		293.47		293.47		293.470000	
Amazonas	Estacionar em vaga reservada sem credencial	3			880.41		293.47		293.47		293.470000	
Goiás	        Avançar o sinal vermelho do semáforo		3			880.41		293.47		293.47		293.470000	
Maranhão	Não dar preferência ao pedestre na faixa	3			880.41		293.47		293.47		293.470000	
Rondônia	Conduzir veículo sem licenciamento		3			880.41		293.47		293.47		293.470000	
Rondônia	Transitar em velocidade superior à máxima 	3			2641.23		880.41		880.41		880.410000	
Roraima   	Estacionar em vaga reservada sem credencial	3			880.41		293.47		293.47