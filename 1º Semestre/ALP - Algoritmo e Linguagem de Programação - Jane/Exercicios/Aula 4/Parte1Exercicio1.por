// Objetivo: calcular a media ponderada e apresentar o conceito para o aluno
// Data: 10/03/2026
// Criado por: Bruno Almeida
algoritmo
	declare nota_trab, aval_sem, exame, media numerico
	
	escreva "Digite a nota do trabalho de laboratorio: "
	leia nota_trab
	escreva "Digite a nota da avaliação semestral: "
	leia aval_sem
	escreva "Digite a nota do exame final"
	leia exame
	media <- (nota_trab * 2 + aval_sem * 3 + exame * 5)/10
	
	escreva "Media ponderada: ", media
	
	se media >= 8 e media <= 10
		entao escreva "Obteve conceito A"
	se media >= 7 e media < 8
		entao escreva "Obteve conceito B"
	se media >= 6 e media < 7
		entao escreva "Obteve conceito C"
	se media >= 5 e media < 6
		entao escreva "Obteve conceito D"
	se media >= 0 e media < 5
		entao escreva "Obteve conceito E"
	
fim_algoritmo
