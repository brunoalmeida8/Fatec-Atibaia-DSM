#include<stdio.h>
//#include<locale.h>//usar essa ou a <windows.h>
#include<windows.h>//Biblioteca mágica para o Windows  (acentos)
#include<string.h> //biblioteca para usar a função strcmp
//strcmp(escolhaTitulo, livro[i].titulo)
//recebe 2 parametros string, se forem iguais retorna 0 positivo
//se não forem iguais não sei o que retorna pq a IA nao me explicou direito né kkk

typedef struct fichaLivro//para usar typedef não é obrigatorio dar um nome para struct, aqui eu colocquei pq eu quis
{
    int cod_livro;
    char titulo[50];
    int ano_lancamento;
    int edicao;
    char autor[50];
    char editora[50];
}fichaLivro;

void exibirLivro (fichaLivro livrinho)//aqui fichaLivro é apelido do tipo struct fichaLivro
//livrinho é parametro recebido aqui. Na função "livrinho", la em baixo "livro[i]"
{
    printf("\nCodigo do livro: %d", livrinho.cod_livro);
    printf("\nTitulo do livro: %s", livrinho.titulo);
    printf("\nAno de lancamento do livro: %d", livrinho.ano_lancamento);
    printf("\nEdicao do livro: %d", livrinho.edicao);
    printf("\nAutor do livro: %s", livrinho.autor);
    printf("\nEditora do livro: %s\n", livrinho.editora);
}

int main()
{
    //setlocale(LC_ALL, "Portuguese");//usar isso ou o de baixo pq da conflito
    SetConsoleOutputCP(65001);// Força o terminal a usar UTF-8 (o mesmo do VS Code)

    //fichaLivro livro[100];//note que fichaLivro, aqui, é o apelido da struct

    //agora usando alocação dinamica (o limite nao é mais 100 livros)
    fichaLivro *livro = NULL;//começa sem nada
    int opcao, total = 0, escolhaCodigo, achou;
    // tirei o int i = 0, pq vou usar o total como indice agora
    char escolhaTitulo[50];

    do
    {
        //fflush(stdin); // Adicione isso para limpar o lixo do teclado (Windows)
        printf("\033[1;32m"); // Verde
        printf("\n\n===============================\n");
        printf("--------Menu de opções--------\n");
        printf("===============================\n");
        printf("\033[0m"); // Reset
        printf("===============================\n");
        printf("\n1 - Inserir");
        printf("\n2 - Consultar por codigo");
        printf("\n3 - Consultar por titulo");
        printf("\n4 - Imprimir lista completa");
        printf("\n5 - Sair\n\n");
        printf("===============================\n");
        // 1. O scanf tenta ler um número. Se o usuário digitar letra, o retorno será 0 (diferente de 1)
        if (scanf("%d", &opcao) != 1) 
        {
            // 2. Avisa o usuário que ele errou feio
            printf ("\nErro: Digite apenas números de 1 a 5!\n\n");

            // 3. LIMPEZA DE TRILHO: Consome a letra que o usuário digitou (ex: 'sdf') 
            // para o teclado não ficar "entupido" na próxima tentativa
            while (getchar() != '\n'); 

            // 4. Pausa para o usuário conseguir ler o erro antes da tela limpar
            system("pause");

            // 5. O PULO DO GATO: O 'continue' interrompe o que vem abaixo (o switch) 
            // e força o programa a saltar direto para o início do 'do', mostrando o menu de novo.
            continue; 
        }
                
        switch (opcao)
        {
            case 1:
                //realloc: aumenta o espaço de 'livro' para o novo tamanho (total+1)
                livro = (fichaLivro *) realloc(livro, (total+1) *sizeof(fichaLivro));
                if (livro == NULL)// poderia ser "if (!livro)" aqui tbm tipo -> se NÃO existir ponteiro entao: imprima o erro e return 1;
                {
                    printf("Erro fatal: Memoria insuficiente");
                    return 1;//Sai do programa imediatamente
                }

                printf("\n\nInsira o livro\n\n");
                // O scanf tenta ler um número. Se conseguir, retorna 1. 
                // Se o usuário digitar uma letra, ele retorna 0.
                // --- PROTEÇÃO DO CÓDIGO ---
                printf("Digite o codigo do livro: ");
                while (scanf("%d", &livro[total].cod_livro) != 1) {
                    printf("Erro! Digite um número para o código: ");
                    while(getchar() != '\n'); // Limpa o lixo do buffer
                }
                //scanf("%d", &livro[i].cod_livro);//vou usar o livro[total] agora
                //scanf("%d", &livro[total].cod_livro);
                printf("Digite o titulo do livro: ");
                scanf(" %[^\n]s", livro[total].titulo);

                // --- PROTEÇÃO DO ANO ---
                printf("Digite o ano de lancamento do livro: ");
                while (scanf("%d", &livro[total].ano_lancamento) != 1) {
                    printf("Erro: Digite um ano válido (números)! Tente de novo: ");
                    while(getchar() != '\n');
                }

                // --- PROTEÇÃO DA EDIÇÃO ---
                printf("Digite a edicao do livro: ");
                while (scanf("%d", &livro[total].edicao) != 1) {
                    printf("Erro: Digite um número para a edição! Tente de novo: ");
                    while(getchar() != '\n');
                }
                printf("Digite o autor do livro: ");
                scanf(" %[^\n]s", livro[total].autor);
                printf("Digite a editora do livro: ");
                scanf(" %[^\n]s", livro[total].editora);
                //i = i + 1;//saiu pq agora o indice é total
                total = total + 1;
                printf("\n");
                system("pause");// O programa espera você apertar uma tecla antes de limpar a tela e voltar ao menu
                system("cls");// Limpa tudo o que foi impresso antes
                break;
            
            case 2:
                achou = 0;
                printf("Digite o codigo do livro para buscar: ");
                scanf("%d", &escolhaCodigo);// variavel para definir qual livro vai buscar
                for (int i = 0; i < total; i++)
                {
                    if (escolhaCodigo == livro[i].cod_livro)
                    {
                        achou = 1; //verifica se encontrou esse codigo (1-vdd, 0-falso)
                        printf("\n\nLivro encontrado\n\n");
                        exibirLivro(livro[i]);//chama a função passando livro[i] como parametro
                        /* 
                        isso eu vou tirar ja que tem a função exibir livro
                        printf("O Codigo do livro e: %d", livro[i].cod_livro);
                        */
                        break;
                    }
                }
                if (achou == 0)// pode ser if(!achou)// tbm funciona igual
                {
                    printf("\nO codigo digitado nao esta cadastrado\n");
                }
                printf("\n");
                system("pause");// O programa espera você apertar uma tecla antes de limpar a tela e voltar ao menu
                system("cls"); // Limpa tudo o que foi impresso antes
                break;
             
            case 3:
                achou = 0;
                printf("Digite o titulo do livro para buscar: ");
                scanf(" %[^\n]s", escolhaTitulo);//variavel para definir qual livro vai buscar
                for (int i = 0; i < total; i++)
                {
                    if (strcmp(escolhaTitulo, livro[i].titulo) == 0)//compara string
                    {
                        //if(escolhaTitulo == livro[i].titulo);//isso nao funciona com string
                        achou = 1;
                        printf("\n\nLivro encontrado\n\n");
                        exibirLivro(livro[i]);//chama a função passando livro[i] como parametro
                        break;
                    }
                }
                /*pode ser if(!achou) aqui tbm
                veja: se achou for zero entao eu quero entrar no meu if
                só que if (0) é como o if entender que a condição é falsa (0)
                ai usa o ! para a condição ser not falsa
                ou seja if (0 do achou for não 0 entenderia como CONDIÇÂO verdadeira)
                entao if (achou == 0) é o mesmo que if (!achou)
                */
                if (achou == 0)//pode ser if(!achou) aqui tbm
                {
                    printf("\nO titulo digitado nao esta cadastrado\n");
                }
                printf("\n");
                system("pause");
                system("cls");// Limpa tudo o que foi impresso antes
                break;

            case 4:
                printf("\n\nLista completa dos livros\n\n");
                for (int i = 0; i < total; i++)
                {
                printf("\n\nLivro %d", i+1);
                //chama a função exibirLivro livro[i]
                exibirLivro(livro[i]);
                }
                printf("\n");
                system("pause");
                system("cls"); // Limpa tudo o que foi impresso antes
                break;  

            case 5:
                printf("\n");
                printf("\nSaindo do programa... Até logo!\n");
                system("pause"); // Agora o ser humano consegue ler! kkk
                break;         

            default:
                printf("Selecione uma opção valida de 1 a 5");
                printf("\n");
                system("pause");
                break;
        }
        
    } while (opcao != 5);
    
    free(livro);

    return 0;
}


/*
    Dica para a prova:
    break: Sai do switch ou do loop.
    continue: Pula o que resta do loop atual e volta para o próximo "round" (início do loop).
*/