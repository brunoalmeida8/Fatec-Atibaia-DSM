// Objetivo: Exercicio 1 da P1
// Data: 24/03/2026
// Criado por: Bruno Almeida
algoritmo
	declare idade numerico classif literal
	escreva "Digite a sua idade"
	leia idade
	se idade < 0 entao
		classif <- "Idade Invalida"
	senao se idade >= 0 e idade <= 12 entao 
		classif <- "Criança"
	senao se idade >= 13 e idade <= 17 entao
		classif <- "Adolescente"
	senao se idade >= 18 e idade <= 59 entao
		classif <- "Adulto"
	senao se idade >= 60 entao
		classif <- "Idoso"
	escreva classif
fim_algoritmo
