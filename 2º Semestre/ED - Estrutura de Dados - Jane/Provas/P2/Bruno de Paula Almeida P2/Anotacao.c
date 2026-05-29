tenho q fazer um prog q faça em c.:
var inteiras value1 e value2 tenha sido definida e q value1 inicializa com 200000.
a> definir a var 1ptr para que serja um ponteiro para um obj do tipo long
b> atibuir o endereço da var value1 à var 1ptr e imprimir o valor do objeto apontado por 1ptr
c> atribuir o valor do obj apontado por 1ptr a var value2 e imprimir o valor de value2
d> imprimir o endereço de value1, imprimir o endereço em ptr1. o valor impresso é o mesmo q o endereço de value1?

o q é uma var long ??

programa para gerencia requisiçoes de i/o...cada req possui num identificador e uma descrição breve 
por exemplo 102 - leitura de bloco 57.
para organizar deve utilizar estrutura fila .. implemente usando alocacao dinamica apenas a estrutura necessaria para representar cada requisicao na fila,
contendo os campos apropriados para gerenciamento.´
OBS nao é necessario implementar "enfileirar, desinfileirar ou funcoes auxiliare, apenas as estrutura"

é que tem q implementar usando alocacao dinamica apenas a estrutura necessaria para representar cada requisicao na fila se vc fez isso entao é isso kkk



para esse agora:
assuma q vc possui a estrutura de nó (NO) e o ponteiro cabeça definidos abaixo para uma lista simplesmente encadeada:
typedef struct No {
    int dado;
    struct No* proximo;
}No;

No* cabeca = ...// ponteiro para o inicio da lista (pode ser NULL)
No* novoNo = ...// ponteiro para o novo nó a ser inserido, ja alocado com dados preenchidos
escreva em C a sequencia exata de duas operaçoes de atribuição de ponteiros necessarias para inserir 
o novoNo no inicio da lista, garantindo que o encadeamento seja mantido e q a lista anterior nao seja perdida


ta agora outro aqui:
assuma q vc esta implementando push em uma pilha implementada com uma lista simplesmente encadeadaem c.
a pilha é acesssada pelo ponteiro topo(que aponta para o nó superior).
vc ja aclocou o novo nó (novoNo) e preencheu seu campo de dados (dado).
preencha as duas linhas de cod C na sequencia correta para realizar a 
operaçao push utilizando o novoNo e atualizando o ponteiro topo. 0Objeto: inserir o novoNo no topo da pilha
//... codigo anteriro (alocação do novoNo e preenchimento dos dados)
//a seguir, a sequencia de operaçoes push:
1._____________________
2._____________________