//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Conta c1 = new Conta(2323, 1000.00);
        Conta c2 = new Conta(5243, 1000.00);

        c1.depositar(100.00);
        c1.retirar(55);

        c2.depositar(555.00);
        c2.retirar(-10);
    }
}