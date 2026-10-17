public class Pneu extends Produto{
    //atributos
    private int aro;
    //construtor
    public Pneu(String codigo, String descricao, double precoUnitario, int quantidade, int aro) {
        super(codigo, descricao, precoUnitario, quantidade);
        this.aro = aro;
    }
    //getters e setters
    //metodos


    @Override
    public void exibirDetalhes() {
        super.exibirDetalhes();
        System.out.println("Aro: " + this.aro);
    }
}

