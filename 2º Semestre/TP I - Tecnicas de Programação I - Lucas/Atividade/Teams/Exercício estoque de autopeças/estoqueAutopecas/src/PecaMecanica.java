public class PecaMecanica extends Produto{
    //atributos
    private String material;
    //construtor
    public PecaMecanica(String codigo, String descricao, double precoUnitario, int quantidade, String material) {
        super(codigo, descricao, precoUnitario, quantidade);
        this.material = material;
    }
    //getters e setters
    //metodos


    @Override
    public void exibirDetalhes() {
        super.exibirDetalhes();
        System.out.println("Material: " + this.material);
    }
}




