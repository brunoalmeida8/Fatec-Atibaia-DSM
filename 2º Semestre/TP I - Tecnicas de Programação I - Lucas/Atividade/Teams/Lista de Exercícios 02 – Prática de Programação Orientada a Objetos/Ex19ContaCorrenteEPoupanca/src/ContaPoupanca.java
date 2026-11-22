public class ContaPoupanca extends Conta {
    //atributos
    private double taxaRendimento;

    //construtores
    public ContaPoupanca(String titular, double saldoInicial, double taxaRendimento) {
        super(titular, saldoInicial);
        this.taxaRendimento = taxaRendimento;
    }

    //get e setters

    //metodos
    public void renderJuros() {
        saldo += saldo * (taxaRendimento / 100.0);
    }
}