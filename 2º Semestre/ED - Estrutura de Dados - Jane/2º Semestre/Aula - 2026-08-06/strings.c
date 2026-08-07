#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    //Declaração do tipo vetor de char
    char nome[20] = "Fatec";
    char cidade[20] = "Guarulhos";
    int numero;

    // Apresentação do conteúdo
    printf("A melhor %s fica na cidade de %s",nome,cidade);


    //Funções de manipulação de strings

    puts("\n\n << Numero de caracteres >>");
    //strlen - retorna o numero de caracteres na string
    printf("número de caracteres: %d\n",strlen(nome));


    puts("\n\n << Copia de cadeia de caracteres >>");
    char xpto[20] = "Boa Aula";
    char xpto1[20] = "Algoritmos";
    puts("Antes de copiar");
    puts(xpto);
    puts(xpto1);

    puts("\nDepois de copiar");
    strcpy(xpto,xpto1);
    strcpy(xpto,"teste");
    puts(xpto);
    puts(xpto1);


    puts("\n\n << Copia de cadeia de caracteres definindo a quantidade >>");
    char xpto2[20] = "Boa Aula";
    char xpto3[20] = "Algoritmos";
    puts("Depois de copiar");
    strncpy(xpto2,xpto3,5);
    puts(xpto2);
    puts(xpto3);


    puts("\n\n << Concatenando cadeia de caracteres >>");
    char xpto4[20] = "  Boa Aula";
    char xpto5[20] = "Algoritmos,";
    strcat(xpto5, xpto4);
    puts(xpto5);




    puts("\n\n << Concatenando cadeia de caracteres com numero determinad de caracteres>>");
    char xpto6[20] = " Boa Aula";
    char xpto7[20] = "Algoritmos,";
    // Para indicar o numero de caracteres a concatenar
    strncat(xpto7, xpto6,3);
    puts(xpto7);


    puts("\n\n << Comparando cadeia de caracteres >>");
    int resul;
    char valor1[20] = "Boa Aula";
    char valor2[20] = "Boa aula";
    resul = strcmp(valor1,valor2);
    if (resul==0)
        printf("Valores iguais para strcmp, resultado = %d ",resul);
    else
        printf("Valores diferentes para strcmp, resultado = %d ",resul);


    // Diferença
    resul = stricmp(valor1,valor2);
    if (resul == 0)
        printf("\nValores iguais para stricmp, resultado = %d ",resul);
    else
        printf("\nValores diferentes para stricmp, resultado = %d ",resul);


    puts("\n\n << Procura caractere numa string >>");
    int posi;
    posi = strchr(valor1,'a')-valor1;
    printf("Valor encontrado na posição %d",posi);


    puts("\n\n << Procura uma string em outra string >>");
    char texto1[]="Programa de computador";
    char texto2[]="de";
    int posic;
    posic=strstr(texto1,texto2)-texto1;
    printf("Valor encontrado na posição = %d",posic);


    puts("\n\n\n << Converte caracteres para maiuscula >>");
    char valor3[20]="Fatec";
    printf("%s",strupr(valor3));


    puts("\n\n\n << Converte caracteres para minúscula >>");
    printf("%s",strlwr(valor3));


    puts("\n\n << Substitui uma string por outro caractere >>");
    char texto3[20] = "Qualquer coisa";
    char texto4[20] = "Qualquer coisa";
    puts(texto3);
    strset(texto3,'?');
    puts(texto3);

    strnset(texto4,'?',3);
    puts(texto4);


    puts("\n\n << Verificando código de caracteres >>");
    char x1;
    x1 = 65;
    printf("O valor encontrado é: %c",x1);

    char x2;
    x2 = '\101';
    printf("\nO valor encontrado é: %c",x2);

    int x3;
    x3 = toascii('a');
    printf("\nO código ASCII para A é: %d",x3);

    printf("\n\n");
    return;
}
