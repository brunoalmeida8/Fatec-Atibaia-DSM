public class Pix extends Pagamento {
    //atributos

    //construtores
    public Pix(double valor) {
        super(valor);
    }

    //get e setters

    //metodos
    @Override
    public double calcularValorFinal() {
        return getValor() * 0.95;
    }

    @Override
    public String getDescricao() {
        return "Pix (5% de desconto)";
    }
}