

SELECT E.ds_estado AS estado,
    I.ds_infracao AS infracoes,
    COUNT(*) AS Quantidade_Multas,
    SUM(vl_multa) AS Vl_Soma_Multas,
    MAX(vl_multa) AS Vl_Maior_Multa,
    MIN(vl_multa) AS Vl_Menor_Multa,
    AVG(vl_multa) AS Vl_Media_Multas
    FROM multas AS M
        JOIN infracoes AS I
        ON M.id_infracao = I.id_infracao
    JOIN veiculos AS V
        ON M.id_veiculo = V.id_veiculo
    JOIN estados AS E
        ON M.id_estado = E.id_estado
    GROUP BY E.ds_estado, I.ds_infracao;



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