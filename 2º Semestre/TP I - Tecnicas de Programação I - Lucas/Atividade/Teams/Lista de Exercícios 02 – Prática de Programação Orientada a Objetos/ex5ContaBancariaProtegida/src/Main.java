//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        ContaBancaria conta = new ContaBancaria("Renata");
        conta.depositar(500);
        conta.depositar(-50);
        conta.sacar(120);
        conta.sacar(1000);

        System.out.println("Titular: " + conta.getTitular() + " | Saldo: " + conta.getSaldo());
        // conta.saldo = 1000000;
        //nao compila pois esta como privado. o atributo só pode ser alterado usando sacar ou depositar

    }
}