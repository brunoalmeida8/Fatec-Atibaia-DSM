public class ContaBancaria {
    //atributos
    private String titular;
    private double saldo;

    //construtor

    public ContaBancaria(String titular, double saldo) {
        this.titular = titular;
        this.saldo = saldo;
    }

    //getters e setters

    public String getTitular() {
        return titular;
    }
    public void setTitular(String titular) {
        this.titular = titular;
    }
    public double getSaldo() {
        return saldo;
    }

    //metodos
    public boolean depositar(double valor){
        if(valor <= 0){
            System.out.println("Erro valor informado <= 0!");
            return false;
        } else {
            this.saldo = this.saldo + valor;
            System.out.println("Deposito realizado com sucesso!");
            return true;
        }
    }
    public boolean sacar(double valor){
        if(valor <= 0){
            System.out.println("Erro valor informado <= 0!");
            return false;
        } else if(valor > this.saldo){
            this.saldo = this.saldo - valor;
            System.out.println("Saque realizado com sucesso!");
            return true;
        } else {
            return false;
        }
    }
}
