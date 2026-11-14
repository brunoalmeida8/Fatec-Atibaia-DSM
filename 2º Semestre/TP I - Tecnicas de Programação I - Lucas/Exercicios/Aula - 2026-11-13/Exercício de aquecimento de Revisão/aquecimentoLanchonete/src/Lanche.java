public class Lanche extends Produto{
    //atributos

    //construtor
    public Lanche(String nome, double preco) {
        super(nome, preco);
    }

    //get e set
    //metodos

    @Override
    public double calcularPrecoFinal() {
        double embalagem = 2;
        return super.calcularPrecoFinal() + embalagem;
    }
}
