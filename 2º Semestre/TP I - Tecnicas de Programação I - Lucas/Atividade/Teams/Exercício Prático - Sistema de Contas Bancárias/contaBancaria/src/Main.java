//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        ContaCorrente cc = new ContaCorrente(001, 200, 300);
        ContaPoupanca cp = new ContaPoupanca(002, 200, 0.04);

        System.out.println("\n========= Dados da Conta Corrente =======");
        cc.depositar(20);
        cc.usarLimite();
        cc.exibirSaldo();

        System.out.println("\n========= Dados da Conta Poupança =======");
        cp.depositar(50);
        cp.calcularRendimento();
        cp.exibirSaldo();
    }
}