public class ItemCarrinho {
    //atributos
    private String nome;
    private double precoUnitario;
    private int quantidade;

    //construtores
    public ItemCarrinho(String nome, double precoUnitario, int quantidade) {
        this.nome = nome;
        this.precoUnitario = precoUnitario;
        this.quantidade = quantidade;
    }

    //get e setters
    public String getNome() {
        return nome;
    }

    public double getPrecoUnitario() {
        return precoUnitario;
    }

    public int getQuantidade() {
        return quantidade;
    }

    //metodos
    public double getSubtotal() {
        return precoUnitario * quantidade;
    }
}