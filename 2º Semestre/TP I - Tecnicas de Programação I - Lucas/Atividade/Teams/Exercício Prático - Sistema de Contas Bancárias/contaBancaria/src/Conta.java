public class Conta {
    //atributos
    private int numero;
    private double saldo;
    //construtor

    public Conta(int numero, double saldo) {
        this.numero = numero;
        this.saldo = saldo;
    }

    //getters e setters

    public int getNumero() {
        return numero;
    }
    public void setNumero(int numero) {
        this.numero = numero;
    }
    public double getSaldo() {
        return saldo;
    }
    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    //metodos
    public void depositar(double valor){
        setSaldo(getSaldo() + valor);//o mesmo que this.saldo =+ valor;
        System.out.println("Depósito de R$ " + valor + " realizado na conta: " + getNumero());
    }
    public void exibirSaldo(){
        System.out.println("Conta " + this.numero + " - Saldo: R$ " + this.saldo);
    }
}
