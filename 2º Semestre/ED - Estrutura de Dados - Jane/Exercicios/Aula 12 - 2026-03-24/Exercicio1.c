#include<stdio.h>
#include<locale.h>



struct clientes
{
    int cod_cli;
    char nome[20];
    char fone[15];
    char endereco[20];
};

typedef struct documentos
{
    int num_doc;
    int cod_cli;
    int data_venc;
    int data_pag;
    float valor;
    float juros;
}documento;
    
int main()
{
    setlocale(LC_ALL, "portuguese");
    struct clientes cliente;
    documento doc;




    return 0;
}