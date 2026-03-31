// Objetivo: Exercicio 2 da P1
// Data: 24/03/2026
// Criado por: Bruno Almeida
algoritmo
	declare i, venda, total, alta numerico
	para i <- 1 ate 8 faca 
	inicio
		escreva "Digite o valor da venda ", i
		leia venda
		
		total <- total + venda
		
		se venda >= 100 entao
		alta <- alta + 1 //alta é venda maior que 100 reais		
	fim
	escreva "O valor total das vendas é igual a: R$", total
	escreva "A quantidade de vendas acima de 100 reais é: ",alta
fim_algoritmo
