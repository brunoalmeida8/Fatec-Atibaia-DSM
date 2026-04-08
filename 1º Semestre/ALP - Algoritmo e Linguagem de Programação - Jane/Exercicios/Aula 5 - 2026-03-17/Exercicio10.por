// Objetivo: Estrutura faça - Fibonacci
// Data: 17/03/2026
// Criado por: Bruno Almeida
algoritmo
declare i, termo1, termo2, termo3 numerico
termo1 <- 0
termo2 <- 1
escreva termo1
escreva termo2
para i<-1 ate 6 faca passo 1
	inicio
		termo3 <- termo1 + termo2
		termo1 <- termo2
		termo2 <- termo3
		escreva termo3
	fim
	
fim_algoritmo
