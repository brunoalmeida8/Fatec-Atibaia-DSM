public class ContaCorrente extends Conta {
    //atributos
    private double limite;
    private double tarifaMensal;

    //construtores
    public ContaCorrente(String titular, double saldoInicial, double limite, double tarifaMensal) {
        super(titular, saldoInicial);
        this.limite = limite;
        this.tarifaMensal = tarifaMensal;
    }

    //get e setters

    //metodos
    @Override
    public boolean sacar(double valor) {
        if (valor > 0 && valor <= saldo + limite) {
            saldo -= valor;
            return true;
        }
        return false;
    }

    public void cobrarTarifa() {
        saldo -= tarifaMensal;
    }
}