// Objetivo: Tabuada com repetição enquanto
// Data: 24/03/2026
// Criado por: Bruno Almeida
algoritmo
	declare numero, cont, result numerico
	
	cont <- 1
	
	escreva "Digite um numero: "
	leia numero
	
	enquanto cont <=10 faca
		inicio
			result <- numero * cont
			escreva numero, " X ", cont, " = ", result
			cont <- cont + 1
		fim
fim_algoritmo
