// Objetivo: Tabuada com repetição repita até
// Data: 24/03/2026
// Criado por: Bruno Almeida
algoritmo
	declare numero, cont, result numerico
	
	cont <- 1
	
	escreva "Digite um numero: "
	leia numero
	repita
		result <- numero * cont
		escreva numero, " X ", cont, " = ", result
		cont <- cont + 1
	ate cont > 10
fim_algoritmo
