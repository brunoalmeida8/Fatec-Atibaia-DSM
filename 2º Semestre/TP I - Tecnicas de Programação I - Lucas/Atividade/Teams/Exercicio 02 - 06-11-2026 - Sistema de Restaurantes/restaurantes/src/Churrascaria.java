public class Churrascaria extends Restaurante{
    //atributos
    private double precoRodizio;
    private int numeroPessoas;

    //contrutor

    public Churrascaria(String nome, String endereco, int capacidade, double precoRodizio, int numeroPessoas) {
        super(nome, endereco, capacidade);
        this.precoRodizio = precoRodizio;
        this.numeroPessoas = numeroPessoas;
    }

    //get e set
    //metodos

    @Override
    public double calcularValorPedido(double subtotal) {
        System.out.print("Valor do Pedido na Churrascaria: ");
        return this.precoRodizio * this.numeroPessoas;
    }
}
