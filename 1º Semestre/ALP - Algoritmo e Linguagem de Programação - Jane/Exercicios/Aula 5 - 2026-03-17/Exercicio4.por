// Objetivo: Estrutura faça
// Data: 17/03/2026
// Criado por: Bruno Almeida
algoritmo
declare i, idade, jovem, altura, somaAltura, mediaAltura, peso, idoso, somaIdade, totalPessoas, magro, percentMagro numerico
resultado literal
para i<-1 ate 3 faca passo 1
	inicio
		escreva "Digite sua idade: "
		leia idade
		escreva "Digite sua altura em cm: "
		leia altura
		escreva "Digite seu peso em kg: "
		leia peso
		totalPessoas <- totalPessoas + 1
		se idade > 50 entao	
			idoso <- idoso + 1
		
		senao se idade >= 10 e idade <= 20 entao
			somaAltura <- somaAltura + altura
			jovem <- jovem + 1
		se peso < 40 entao
			magro <- magro + 1
	fim
escreva "Total de pessoas acima de isodsas (acima de 50 anos): ", idoso, " pessoas"
mediaAltura <- somaAltura/jovem
percentMagro <- magro / totalPessoas * 100
se mediaAltura > 0 entao
	escreva "A media de altura das pessoas jovens (entre 10 e 20 anos): ", mediaAltura, "cm"
senao escreva "Não teve ninguem entre 
escreva "O % de pessoas magras (<40kg): ", percentMagro, "%"
fim_algoritmo
