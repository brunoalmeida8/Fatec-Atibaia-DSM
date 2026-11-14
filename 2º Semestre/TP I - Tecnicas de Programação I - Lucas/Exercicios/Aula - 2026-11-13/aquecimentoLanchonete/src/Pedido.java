public class Pedido {
    //atributos
    private Produto produto;
    private int quantidade;
    //construtor
    public Pedido(Produto produto, int quantidade) {
        this.produto = produto;
        this.quantidade = quantidade;
    }

    //get e set
    //metodos
    public double calcularTotal(){
        double precoFinal = produto.calcularPrecoFinal() * quantidade;
        if (quantidade >= 3){
            precoFinal = precoFinal - 5;
        }
        return precoFinal;
    }
    public void exibir(){
        System.out.print("Produto: " + produto.getNome());
        System.out.print(" | Quantidade: " + quantidade);
        System.out.println(" | Total: R$ " + String.format("%.2f", calcularTotal()));
    }
}
