public class Sushibar extends Restaurante{
    //atributos
    private int pecasMinimas;
    private double taxaCouvert;

    //contrutor

    public Sushibar(String nome, String endereco, int capacidade, int pecasMinimas, double taxaCouvert) {
        super(nome, endereco, capacidade);
        this.pecasMinimas = pecasMinimas;
        this.taxaCouvert = taxaCouvert;
    }

    //get e set
    //metodos

    @Override
    public double calcularValorPedido(double subtotal) {
        System.out.print("Valor do Pedido na Sushibar: ");
        return subtotal + this.taxaCouvert;
    }
}
