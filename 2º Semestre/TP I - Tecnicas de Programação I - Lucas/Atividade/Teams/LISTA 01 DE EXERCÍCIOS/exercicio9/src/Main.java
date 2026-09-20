//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Produto item = new Produto("Café", 19.99, 130);
        System.out.println(String.format("Total investido em " + item.getnome() + " - R$ %.2f", item.valorTotalEmEstoque()));

    }
}