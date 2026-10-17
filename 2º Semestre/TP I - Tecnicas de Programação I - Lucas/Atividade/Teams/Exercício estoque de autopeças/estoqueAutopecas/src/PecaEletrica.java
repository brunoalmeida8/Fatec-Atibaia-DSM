public class PecaEletrica extends Produto{
    //atributos
    private int voltagem;
    //construtor
    public PecaEletrica(String codigo, String descricao, double precoUnitario, int quantidade, int voltagem) {
        super(codigo, descricao, precoUnitario, quantidade);
        this.voltagem = voltagem;
    }
    //getters e setters
    //metodos


    @Override
    public void exibirDetalhes() {
        super.exibirDetalhes();
        System.out.println("Voltagem: " + this.voltagem);
    }
}

