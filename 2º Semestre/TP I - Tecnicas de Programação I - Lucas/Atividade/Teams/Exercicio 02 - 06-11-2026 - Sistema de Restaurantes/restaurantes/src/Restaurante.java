public abstract class Restaurante {
    //atributos
    private String nome;
    private String endereco;
    private int capacidade;

    //contrutor

    public Restaurante(String nome, String endereco, int capacidade) {
        this.nome = nome;
        this.endereco = endereco;
        this.capacidade = capacidade;
    }

    //get e set
    public String getNome() {
        return nome;
    }

    //metodos
     public abstract double calcularValorPedido(double subtotal);
}
