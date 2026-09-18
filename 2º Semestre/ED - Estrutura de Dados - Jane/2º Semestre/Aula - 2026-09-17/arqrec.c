// Gravação do arquivo binário
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    struct cliente
    {
        int numero;
        char nome[20];
    };

    FILE *cli;
    struct cliente c;

    //Criação da pasta
    //system("md c:\\exemplo\\teste");

    cli = fopen("c:\\exemplo\\teste\\clientes.dat", "ab+");
    if (cli == NULL)
        printf("\nErro na abertura do arquivo");
    else
    {
      while (1){
        printf("\nDigite o número do cliente a ser incluído: (0 para encerrar) ");
        scanf("%d%*c", &c.numero);

        if (c.numero == 0)
            break;

        printf("Digite o nome do cliente a ser incluído: ");
        gets(c.nome);


        if (!feof( stdin ))
        {
          fwrite(&c, sizeof(struct cliente), 1, cli);
          if (ferror(cli))
            perror("Erro na gravação ");
          else printf("Gravação realizada com sucesso ");
            //fclose(cli);
        }}
    }
   // getchar();
    fclose(cli);
    return 0;

}

/*
printf("\nDigite o número do cliente a ser incluído ");
        scanf("%d%*c", &c.numero);
        printf("Digite o nome do cliente a ser incluído ");
        gets(c.nome);

        fwrite(&c, sizeof(struct cliente), 1, cli);
        if (ferror(cli))
            perror("Erro na gravação ");
        else printf("Gravação realizada com sucesso ");
            fclose(cli);*/
