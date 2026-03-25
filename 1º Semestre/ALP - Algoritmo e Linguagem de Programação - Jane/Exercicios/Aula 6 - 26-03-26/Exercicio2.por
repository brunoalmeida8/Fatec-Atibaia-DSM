// Objetivo: media aritmetica com repetição repita até
// Data: 24/03/2026
// Criado por: Bruno Almeida
algoritmo
	declare numero, cont, total, media numerico
	repita 
		escreva "--------Menu Media aritmetica---------"
		escreva "Digite um numero (ou 0 para calcular): "
		leia numero
		se numero <> 0 entao
			inicio
			total <- total + numero
			cont <- cont + 1
			fim
	ate numero = 0	
	media <- total / cont
	escreva "A media aritmetica é: ", media
	
fim_algoritmo
