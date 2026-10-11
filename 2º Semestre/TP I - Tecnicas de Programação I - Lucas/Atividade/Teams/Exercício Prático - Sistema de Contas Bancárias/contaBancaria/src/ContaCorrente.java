public class ContaCorrente extends Conta{
    //atributos
    private double limite;

    //construtor
    public ContaCorrente(int numero, double saldo, double limite) {
        super(numero, saldo);
        this.limite = limite;
    }

    //getters e setters
    public double getLimite() {
        return limite;
    }
    public void setLimite(double limite) {
        this.limite = limite;
    }

    //metodos
    public void usarLimite(){
        System.out.println("Limite de cheque especial disponível: R$ " + this.limite);
    }
}
