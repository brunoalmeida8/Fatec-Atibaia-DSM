#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    FILE *arq;
    char buffer[100];

    // Abrir um arquivo para escrita
    arq = fopen("c:\\teste\\arqtexto.txt","w");

    if (arq == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // Escrever no arquivo
    fputs("Olá, mundo!",arq);
    fclose(arq);

    // Abrir o arquivo para leitura
    arq = fopen("c:\\teste\\arqtexto.txt", "r");
    if (arq == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // Ler do arquivo
    while (fgets(buffer, 100, arq) != NULL) {
        printf("%s", buffer);
    }
    fclose(arq);

    return 0;
}
