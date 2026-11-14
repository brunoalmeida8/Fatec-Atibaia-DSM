//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Bebida suco = new Bebida("Suco", 10.00);
        Lanche hamburguer = new Lanche("Hambúrguer", 15.00);


        Pedido p1 = new Pedido(suco, 2);
        Pedido p2 = new Pedido(hamburguer, 3);

        p1.exibir();
        p2.exibir();


        Produto variavel = hamburguer;
        System.out.println("Preço final (via Produto): R$ " + String.format("%.2f", variavel.calcularPrecoFinal()));
    }
}