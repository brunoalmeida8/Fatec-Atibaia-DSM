// Objetivo: Estrutura faça
// Data: 17/03/2026
// Criado por: Bruno Almeida
algoritmo
declare i, nota, total, media numerico
resultado literal
para i<-1 ate 4 faca passo 1
	inicio
		escreva "Digite uma nota: "
		leia nota
		total <- total + nota
	fim
	media <- total / i
	
	se media >=6 entao
		resultado <- "Aprovado"
	senao
		resultado <- "Reprovado"
	
escreva "A media aritmetica é: ", media
escreva "O aluno foi ", resultado
fim_algoritmo
