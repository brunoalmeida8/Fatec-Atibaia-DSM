//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

public class Estoque {
    //atributos
    private List<Produto> produtos;

    //construtor

    public Estoque() {
        this.produtos = new ArrayList<>();
    }

    //get e set
    //metodos
    public void adicionar(Produto p){
        produtos.add(p);
    }

    public double valorTotal(){
        double total = 0;
        for (Produto p : produtos){
            total += p.valorEmEstoque();
        }
        return total;
    }
    public Produto buscarPorCodigo(String codigo){
        for (Produto p : produtos){
            if (p.codigo.equalsIgnoreCase(codigo)) {
                return p; //achou o produto
            }
        }
        return null;//nao achou o produto
    }
    public void exibirRelatorio(){
        System.out.println("\n===== RELATORIO DO ESTOQUE =====");
        for(Produto p : produtos){
            p.exibirDetalhes();
        }
        System.out.println("Valor total em estoque R$ " + this.valorTotal());
    }


    public void exibirMenu(){

        System.out.println("\n=== MENU ESTOQUE DE AUTOPEÇAS ===");
        System.out.println("1 - Cadastrar Peça Mecânica");
        System.out.println("2 - Cadastrar Peça Elétrica");
        System.out.println("3 - Cadastrar Óleo");
        System.out.println("4 - Cadastrar Pneu");
        System.out.println("5 - Exibir Relatório (Acervo e Valor Total)");
        System.out.println("6 - Buscar Produto por Código");
        System.out.println("0 - Sair");
        System.out.print("Escolha uma opção: ");

        return;
    }






    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        Estoque estoque = new Estoque();
        int opcao = -1;
        do {
            estoque.exibirMenu();
            if (teclado.hasNextInt()){
                opcao = teclado.nextInt();
                teclado.nextLine();//limpa o buffer do teclado
            } else {
                System.out.println("\nDigite uma opção em numero inteiro (de 0 a 6), cabeça oca");
                teclado.nextLine();//descarta seja la o que usuario digitou
                opcao = -1;// deixa como uma opcao invalida para nao resgatar a ultima
                continue;//"continue o loop" do começo, volta la na linha "do {"
            }

            switch (opcao) {
                //se for 1 ou 2 ou 3 ou 4 cadastra o que é padrao em todos
                case 1:
                case 2:
                case 3:
                case 4:
                    System.out.print("Código: ");
                    String codigo = teclado.nextLine();
                    System.out.print("Descrição: ");
                    String descricao = teclado.nextLine();
                    System.out.print("Preço Unitário: ");
                    double precoUnitario = teclado.nextDouble();
                    System.out.print("Quantidade: ");
                    int quantidade = teclado.nextInt();
                    teclado.nextLine();//limpa o buffer do teclado
                    if (opcao == 1) {
                        System.out.print("Material: ");
                        String material = teclado.nextLine();
                        PecaMecanica pm1 = new PecaMecanica(codigo, descricao, precoUnitario, quantidade, material);
                        estoque.adicionar(pm1);

                    } else if (opcao == 2) {
                        System.out.print("Voltagem: ");
                        int voltagem = teclado.nextInt();
                        teclado.nextLine();
                        estoque.adicionar(new PecaEletrica(codigo, descricao, precoUnitario, quantidade, voltagem));

                    } else if (opcao == 3) {
                        System.out.print("Volume em Litros: ");
                        double litros = teclado.nextDouble();
                        teclado.nextLine();
                        estoque.adicionar(new Oleo(codigo, descricao, precoUnitario, quantidade, litros));

                    } else if (opcao == 4) {
                        System.out.print("Aro: ");
                        int aro = teclado.nextInt();
                        teclado.nextLine();
                        estoque.adicionar(new Pneu(codigo, descricao, precoUnitario, quantidade, aro));
                    }

                    System.out.println("Produto cadastrado com sucesso!");
                    break; // Fecha o bloco de 1 a 4

                case 5:
                    estoque.exibirRelatorio();
                    break;

                case 6:
                    System.out.print("Digite o codigo para busca: ");
                    codigo = teclado.nextLine();
                    Produto p = estoque.buscarPorCodigo(codigo);
                    if (p == null) {
                        System.out.println("Produto não encontrado");
                    } else{
                        p.exibirDetalhes();
                    }
                    break;

                case 0:
                    System.out.println("Saindo...");
                    break;

                default:
                    System.out.println("\nDigite uma opção valida (de 0 a 6)");
            }
        } while (opcao != 0);

    }
}