public class Conta {
    //atributos
    private int numero;
    private double saldo;

    //construtors

    public Conta(int numero, double saldo) {
        this.numero = numero;
        this.saldo = saldo;
    }

    public void depositar(double valor){
        System.out.println("\n\n");
        this.saldo += valor;
        if (valor > 500) {
            System.out.println("Valor maior que R$ 500,00");
            System.out.println("10% sera aplicado em caixinha");
            System.out.println("Valor da aplicação: R$" + (valor * 0.10));
        }

        System.out.println("Numero: " + this.numero);
        System.out.println("Saldo: " + this.saldo);
    }
    public void retirar(double valor){
        System.out.println("\n\n");
        if (valor < 0) {
            System.out.println("Não é possivel retirar valor menor que 0 (zero)");
        } else {
            this.saldo = this.saldo - valor;
        }


        System.out.println("Numero: " + this.numero);
        System.out.println("Saldo: " + this.saldo);
    }

    //metodos
}
