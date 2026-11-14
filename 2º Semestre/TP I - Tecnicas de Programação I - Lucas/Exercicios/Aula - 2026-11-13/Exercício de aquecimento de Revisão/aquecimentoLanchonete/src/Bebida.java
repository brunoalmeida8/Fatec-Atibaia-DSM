public class Bebida extends Produto{
    //atributos

    //construtor
    public Bebida(String nome, double preco) {
        super(nome, preco);
    }

    //get e set
    //metodos

    @Override
    public double calcularPrecoFinal() {
        double desconto = this.getPreco() * 0.10;
        return super.calcularPrecoFinal() - desconto;
    }
}
