#include<stdio.h>//entradas e saidas
#include<locale.h>//colocar em portugues - usar caracteres especiais
#include<stdlib.h>//usar calloc, malloc, realloc...

//definição da struct usando apelido medicamento (mesmo nome para facilitar)
typedef struct medicamento
{
    int codigo;
    char nome[50];
    int qtd;
    float preco;
}medicamento;

//função cadastrar recebendo parametros *remedio(referencia) e qtd a ser cadastrada
void cadastrarMedicamento (medicamento *remedio, int quantidade)
{

    for (int i = 0; i < quantidade; i++)
    {
        printf("\n\nMedicamento %d\n", i+1);
        printf("Digite o codigo do medicamento: ");
        scanf("%d", &remedio[i].codigo); 
        printf("Digite o nome do medicamento: ");
        scanf(" %[^\n]s", remedio[i].nome);//le ate digitar enter
        printf("Digite a quantidade do medicamento: ");
        scanf(" %d", &remedio[i].qtd);
        printf("Digite o preco do medicamento: ");
        scanf(" %f", &remedio[i].preco);
    }
    return;
}

//funcao exibir todos os medicamenos cadastrados pelo usuario
void listarMedicamento(medicamento *remedio, int quantidade)
{
    if (quantidade == 0)
    {
        printf("Nenhum medicamento cadastrado\n");
        return;
    }
    printf("\n\n\n======Medicamentos cadastrados========\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("\nMedicamento %d\n", i + 1);
        printf("Codigo:     %d\n", remedio[i].codigo);
        printf("Nome:       %s\n", remedio[i].nome);
        printf("Quantidade: %d\n", remedio[i].qtd);
        printf("Preco:      R$ %.2f\n", remedio[i].preco); 
    }
    return;
}

//funcao buscar os medicamentos cadastrados pelo codigo
void buscarMedicamento(medicamento *remedio, int quantidade)
{
    int cod, achou = 0;

    printf("Digite o codigo do medicamento que deseja buscar: ");
    scanf("%d", &cod);

    for (int i = 0; i < quantidade; i++)
    {
        if (cod == remedio[i].codigo)
        {
            printf("\n\n\n========Medicamento encontrado=========\n");
            printf("\nMedicamento %d\n", i + 1);
            printf("Codigo:     %d\n", remedio[i].codigo);
            printf("Nome:       %s\n", remedio[i].nome);
            printf("Quantidade: %d\n", remedio[i].qtd);
            printf("Preco:      R$ %.2f\n", remedio[i].preco); 
            achou++;//verifica quantos com aquele codigo existem cadastrados
        }
    }
    if (achou != 0)
    {
        printf("\nEncontrado %d medicamento(s) com o codigo %d\n\n", achou, cod);
    }
    else 
        printf("\nMedicamento com codigo: %d nao cadastrado\n\n", cod);

    return;
}



int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao, quantidade = 0;
    medicamento *remedio = NULL;//null para depois ver se tem algo ja cadastrado

    do
    {
        printf("\n\n--- Menu Sistema Farmacia ---\n");
        printf("1 - Cadastrar medicamentos\n");
        printf("2 - Listar medicamentos\n");
        printf("3 - Buscar medicamento por codigo\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (remedio == NULL)//como começa com null entao ele pode cadastrar
            {
                //qtd na main para alocar memoria aqui na main tbm
                printf("Quantos medicamentos vai cadastrar? ");
                scanf("%d", &quantidade);
    
                remedio = (medicamento*) calloc(quantidade, sizeof(medicamento));
        
                // verificar se foi alocado corretamente
                if (remedio == NULL)
                {
                    printf("ERRO: Falha ao alocar memoria.\n");
                    printf("O sistema sera encerrado.\n");
                    return 1; 
                }

                cadastrarMedicamento(remedio, quantidade);//chama a função cadastrar

            } else {
                printf("Remedios ja foram cadastrados\n");
            }
            
            break;

        case 2:
            listarMedicamento(remedio, quantidade);
            break;

        case 3:
            buscarMedicamento(remedio, quantidade);
            break;

        case 4:
            printf("O programa sera fechado\n");
            system("pause");

        default:// se digitar outro numero <1 ou >4
            printf("Opcao invalida. Escolha entre 1 e 4\n");
            break;
        }
        
    } while (opcao != 4);
    

    free(remedio);//liberando memoria no final
    return 0;
}