public class CartaoCredito extends Pagamento {
    //atributos
    private int parcelas;

    //construtores
    public CartaoCredito(double valor, int parcelas) {
        super(valor);
        this.parcelas = parcelas;
    }

    //get e setters

    //metodos
    @Override
    public double calcularValorFinal() {
        if (parcelas <= 3) {
            return getValor();
        }
        return getValor() * (1.0 + (0.02 * parcelas));
    }

    @Override
    public String getDescricao() {
        return "Cartão de crédito em " + parcelas + "x";
    }

    public double getValorParcela() {
        return calcularValorFinal() / parcelas;
    }
}