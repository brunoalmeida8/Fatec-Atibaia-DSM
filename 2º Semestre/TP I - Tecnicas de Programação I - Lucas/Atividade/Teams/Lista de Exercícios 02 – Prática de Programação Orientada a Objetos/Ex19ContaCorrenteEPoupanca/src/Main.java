//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        ContaCorrente cc1 = new ContaCorrente("Hugo", 300.0, 500.0, 12.90);
        System.out.println("Saque 700 Hugo: " + cc1.sacar(700.0));
        System.out.println("Saque 200 Hugo: " + cc1.sacar(200.0));
        cc1.cobrarTarifa();
        cc1.exibirExtrato();

        System.out.println();

        ContaPoupanca cp1 = new ContaPoupanca("Íris", 1000.0, 0.5);
        System.out.println("Saque 1500 Íris: " + cp1.sacar(1500.0));
        cp1.depositar(200.0);
        cp1.renderJuros();
        cp1.exibirExtrato();
    }
}