//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Pedido pedido = new Pedido(101, "Mesa 4");

        pedido.adicionarItem("X-salada", 22.50);
        pedido.adicionarItem("Suco de laranja", 9, 2);
        pedido.adicionarItem("Batata frita", 12, 0);
        pedido.adicionarItem("Pudim", 8.50);

        pedido.fechar();
    }
}