public class Oleo extends Produto{
    //atributos
    private double volumeLitros;
    //construtor
    public Oleo (String codigo, String descricao, double precoUnitario, int quantidade, double volumeLitros) {
        super(codigo, descricao, precoUnitario, quantidade);
        this.volumeLitros = volumeLitros;
    }
    //getters e setters
    //metodos


    @Override
    public void exibirDetalhes() {
        super.exibirDetalhes();
        System.out.println("Volume em litros: " + this.volumeLitros);
    }
}

