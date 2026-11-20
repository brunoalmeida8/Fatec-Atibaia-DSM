//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Carrinho carrinho = new Carrinho();

        carrinho.adicionar(new ItemCarrinho("Caderno", 18.90, 3));
        carrinho.adicionar(new ItemCarrinho("Caneta azul", 2.50, 4));
        carrinho.adicionar(new ItemCarrinho("Mochila", 149.90, 0));

        carrinho.exibirResumo();

        System.out.println();
        carrinho.adicionar(new ItemCarrinho("Mochila", 149.90, 1));
        carrinho.exibirResumo();
    }
}