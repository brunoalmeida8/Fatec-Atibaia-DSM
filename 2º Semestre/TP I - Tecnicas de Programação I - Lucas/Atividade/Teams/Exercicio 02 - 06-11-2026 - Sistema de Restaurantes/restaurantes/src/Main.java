//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Restaurante pizzaria = new Pizzaria("Bella Napoli", "Rua A, 10", 50, 4, 10.0);
        Restaurante churrascaria = new Churrascaria("Boi na Brasa", "Av. B, 20", 100, 60.0, 2);
        Restaurante sushibar = new Sushibar("Sakura Sushi", "Rua C, 30", 30, 15, 15.0);
        Restaurante lanchonete = new Lanchonete("King Burger", "Av. D, 40", 40, true, 0.10);

        System.out.println(pizzaria.calcularValorPedido(100));
        System.out.println(churrascaria.calcularValorPedido(100));
        System.out.println(sushibar.calcularValorPedido(100));
        System.out.println(lanchonete.calcularValorPedido(100));

    }
}