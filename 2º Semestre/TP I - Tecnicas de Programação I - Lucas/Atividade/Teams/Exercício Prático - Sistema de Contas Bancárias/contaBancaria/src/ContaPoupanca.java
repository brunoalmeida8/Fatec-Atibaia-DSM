public class ContaPoupanca extends Conta {
    //atributos
    private double taxaRendimento;

    //construtor
    public ContaPoupanca(int numero, double saldo, double taxaRendimento) {
        super(numero, saldo);
        this.taxaRendimento = taxaRendimento;
    }

    //getters e setters
    public double getTaxaRendimento() {
        return taxaRendimento;
    }
    public void setTaxaRendimento(double taxaRendimento) {
        this.taxaRendimento = taxaRendimento;
    }

    //metodos
    public void calcularRendimento(){
        double valor = getSaldo() * this.taxaRendimento;
        System.out.println("Valor do Rendimento: RS " + valor);
    }
}
