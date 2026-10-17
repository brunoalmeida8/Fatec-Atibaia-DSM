public class Produto {
    //atributos
    protected String codigo;
    protected String descricao;
    protected double precoUnitario;
    protected int quantidade;
    //construtor

    public Produto(String codigo, String descricao, double precoUnitario, int quantidade) {
        this.codigo = codigo;
        this.descricao = descricao;
        this.precoUnitario = precoUnitario;
        this.quantidade = quantidade;
    }

    //getters e setters

    public String getCodigo() {
        return codigo;
    }

    //metodos
    public double valorEmEstoque(){
        double valor = this.precoUnitario * this.quantidade;
        return valor;
    }
    public void exibirDetalhes(){
        System.out.println("\n========= Exibindo Detalhes =========");
        System.out.println("Codigo: " + this.codigo);
        System.out.println("Descrição: " + this.descricao);
        System.out.println("Preço Unitario: " + this.precoUnitario);
        System.out.println("Quantidade: " + this.quantidade);
    }
}
