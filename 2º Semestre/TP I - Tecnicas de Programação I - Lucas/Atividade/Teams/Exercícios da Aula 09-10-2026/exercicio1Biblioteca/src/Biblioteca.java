
//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

public class Biblioteca {
    //atributos
    private List<Item> itens;//lista chamada itens e cada elemento é um objeto da Classe Item

    //construtor
    //eu não sei, só sei que foi assim...
    public Biblioteca(){
        this.itens = new ArrayList<>();//??????
    }

    //getters e setters, pq? pq sim, poh...
    public List<Item> getItens() {
        return itens;
    }
    public void setItens(List<Item> itens) {
        this.itens = itens;
    }

    //metodos
    public void adicionar(Item item){
        itens.add(item);
    }

    public void exibirAcervo(){
        System.out.println("=== Acervo ===");
        for (Item i : itens){
            i.exibirDetalhes();
        }
        System.out.println("Total de itens: " + itens.size()); // quantidade de item na lista itens
    }

    // main - faz o menu e chama os outros metodos quando necessario
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        Biblioteca biblioteca = new Biblioteca(); //tbm nao sei, só sei que é assim kkk
        int opcao;
        do {
            System.out.println("\n=== MENU BIBLIOTECA ===");
            System.out.println("1 - Cadastrar Livro");
            System.out.println("2 - Cadastrar Revista");
            System.out.println("3 - Listar Acervo");
            System.out.println("0 - Sair");
            opcao = teclado.nextInt();
            teclado.nextLine();//limpa o buffer do teclado (enter do nextInt())

            switch (opcao){
                case 1:
                    System.out.print("Titulo: ");
                    String tituloLivro = teclado.nextLine();
                    System.out.print("Autor: ");
                    String autor = teclado.nextLine();
                    System.out.print("Ano: ");
                    int anoLivro = teclado.nextInt();
                    teclado.nextLine(); // limpa o buffer do teclado (enter do int)

                    Livro livro = new Livro(tituloLivro, anoLivro, autor); //instancia um livro com essas informações
                    biblioteca.adicionar(livro); //adiciona esse livro na lista

                    break;
                case 2:
                    System.out.print("Titulo: ");
                    String tituloRevista = teclado.nextLine();
                    System.out.print("Edição: ");
                    int edicao = teclado.nextInt();
                    teclado.nextLine(); //limpa o enter do teclado do nextInt()
                    System.out.print("Ano: ");
                    int anoRevista = teclado.nextInt();
                    teclado.nextLine();//tira o enter do buffer do nextInt()

                    Revista revista = new Revista(tituloRevista, anoRevista, edicao);
                    biblioteca.adicionar(revista);//adiciona essa revista na lista
                    break;
                case 3:
                    biblioteca.exibirAcervo();
                    break;
                case 0:
                    System.out.println("Até logo!");
                    break;
                default:
                    System.out.println("Opção inválida.");
            }
        } while (opcao != 0);

        teclado.close();
    }
}