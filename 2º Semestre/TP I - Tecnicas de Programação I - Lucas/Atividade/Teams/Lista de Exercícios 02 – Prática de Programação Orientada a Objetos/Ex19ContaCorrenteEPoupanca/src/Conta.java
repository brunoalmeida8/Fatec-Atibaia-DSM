public class Conta {
    //atributos
    private String titular;
    protected double saldo;

    //construtores
    public Conta(String titular, double saldoInicial) {
        this.titular = titular;
        this.saldo = saldoInicial;
    }

    //get e setters
    public String getTitular() {
        return titular;
    }

    public double getSaldo() {
        return saldo;
    }

    //metodos
    public void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
        }
    }

    public boolean sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            return true;
        }
        return false;
    }

    public void exibirExtrato() {
        System.out.println("Titular: " + titular + " | Saldo: R$ " + saldo);
    }
}