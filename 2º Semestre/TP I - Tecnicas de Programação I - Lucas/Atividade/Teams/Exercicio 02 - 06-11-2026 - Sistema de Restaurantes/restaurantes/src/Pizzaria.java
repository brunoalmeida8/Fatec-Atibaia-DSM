import org.w3c.dom.ls.LSOutput;

public class Pizzaria extends Restaurante{
    //atributos
    private int numeroSabores;
    private double taxaEntrega;

    //contrutor

    public Pizzaria(String nome, String endereco, int capacidade, int numeroSabores, double taxaEntrega) {
        super(nome, endereco, capacidade);
        this.numeroSabores = numeroSabores;
        this.taxaEntrega = taxaEntrega;
    }

    //get e set

    //metodos


    @Override
    public double calcularValorPedido(double subtotal) {
        System.out.print("Valor do Pedido na Pizzaria: ");
        return subtotal + this.taxaEntrega;
    }
}
