public class Produto {
    //atributos
    private String nome;
    private double preco;
    private int quantidade;
    //construtores
    public Produto(String nome, double preco, int quantidade){
        this.nome = nome;
        this.preco = preco;
        this.quantidade = quantidade;
    }

    //get e set - metodos de acesso publico

    public String getnome() {
        return this.nome;
    }
    public void setNome(String nome){
        this.nome = nome;
    }

    public double getPreco(){
        return this.preco;
    }
    public void setPreco(double preco){
        this.preco = preco;
    }

    public int getQuantidade() {
        return this.quantidade;
    }
    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }

    //metodos
    public double valorTotalEmEstoque(){
        return this.preco * this.quantidade;
    }
}
