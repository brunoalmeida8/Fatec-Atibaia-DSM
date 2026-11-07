public class Lanchonete extends Restaurante{
    //atributos
    private boolean temDelivery;
    private double taxaServico;
    //contrutor

    public Lanchonete(String nome, String endereco, int capacidade, boolean temDelivery, double taxaServico) {
        super(nome, endereco, capacidade);
        this.temDelivery = temDelivery;
        this.taxaServico = taxaServico;
    }


    //get e set
    //metodos

    @Override
    public double calcularValorPedido(double subtotal) {
        System.out.print("Valor do Pedido na Lanchonete: ");
        return subtotal + subtotal * this.taxaServico;
    }
}
