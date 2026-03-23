// Objetivo: calcular a media ponderada e apresentar o conceito para o aluno
// Data: 11/03/2026
// Criado por: Bruno Almeida
algoritmo
	declare precoAtual, n2, escolha, resul numerico
	
	escreva "Digite o preco atual do produto: "
	leia precoAtual
	se precoAtual <= 30
		entao ...
	senao se precoAtual >30
	
	
	
	escreva "Digite o segundo numero: "
	leia n2
	escreva "Escolha a ocao desejada"
	escreva "Digite 1 - Media"
	escreva "Digite 2 - Diferenca "
	escreva "Digite 3 - Produto"
	escreva "Digite 4 - Divisao"
	leia escolha
	se escolha = 1 entao
		resul <- (n1 + n2)/2
	senao se escolha = 2 entao
		resul <- n1 - n2	
	senao se escolha = 3 entao
		resul <- n1 * n2
	senao se escolha = 4 entao
		se n2=0 entao
		escreva "Divisao nao pode ter denominador igual a zero"
	senao
		inicio
			resul <- n1 / n2
			escreva "Resultado: ", resul
		fim
	senao escreva "Opcao digitada invalida"
	
	
fim_algoritmo
