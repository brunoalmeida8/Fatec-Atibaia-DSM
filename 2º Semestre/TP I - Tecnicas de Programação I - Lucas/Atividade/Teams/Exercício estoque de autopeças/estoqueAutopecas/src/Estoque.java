//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

public class Estoque {
    //atributos
    private List<Produto> produtos;

    //construtor

    public Estoque(List<Produto> produtos) {
        this.produtos = produtos;
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







    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        Estoque estoque = new Estoque();

        System.out.print("Informe o codigo da Peça Mecanica: ");
        String codigo = teclado.nextLine();




        PecaMecanica pm1 = new PecaMecanica()

    }
}