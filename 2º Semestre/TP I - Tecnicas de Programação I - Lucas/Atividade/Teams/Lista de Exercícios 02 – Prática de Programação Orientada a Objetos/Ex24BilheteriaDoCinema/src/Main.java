//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Bilheteria b1 = new Bilheteria();
        double base = 36.00;

        Ingresso i1 = new Ingresso("O Farol", "19h", base);
        MeiaEntrada m1 = new MeiaEntrada("O Farol", "19h", base, "Estudante");
        IngressoVip v1 = new IngressoVip("O Farol", "21h", base, "F7");
        MeiaEntrada m2 = new MeiaEntrada("Rota 66", "21h", base, "Professor");

        b1.vender(i1);
        b1.vender(m1);
        b1.vender(v1);
        b1.vender(m2);

        System.out.println("\nQuantidade vendida: " + b1.quantidadeVendida());
        System.out.println("Total arrecadado: R$ " + b1.totalArrecadado());
    }
}