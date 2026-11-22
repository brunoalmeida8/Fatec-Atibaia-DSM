public class Boleto extends Pagamento {
    //atributos
    private static final double TAXA_EMISSAO = 3.50;

    //construtores
    public Boleto(double valor) {
        super(valor);
    }

    //get e setters

    //metodos
    @Override
    public double calcularValorFinal() {
        return getValor() + TAXA_EMISSAO;
    }

    @Override
    public String getDescricao() {
        return "Boleto (taxa R$ " + TAXA_EMISSAO + ")";
    }
}