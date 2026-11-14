public class Produto {
    //atributos
    private String nome;
    private double preco;

    //construtor

    public Produto(String nome, double preco) {
        this.nome = nome;
        this.preco = preco;
    }

    //get e set
    public String getNome() {
        return nome;
    }
    public double getPreco() {
        return preco;
    }


    //metodos
    //regra: preco final é o da tabela
    public double calcularPrecoFinal(){
        return this.preco;
    }
}
