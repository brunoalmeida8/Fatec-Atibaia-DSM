public class IngressoVip extends Ingresso {
    //atributos
    private static final double ADICIONAL_VIP = 20.00;
    private String poltrona;

    //construtores
    public IngressoVip(String filme, String sessao, double precoBase, String poltrona) {
        super(filme, sessao, precoBase);
        this.poltrona = poltrona;
    }

    //get e setters

    //metodos
    @Override
    public double getPreco() {
        return getPrecoBase() + ADICIONAL_VIP;
    }

    @Override
    public String toString() {
        return "VIP [Poltrona " + poltrona + "] - " + getFilme() + " (" + getSessao() + ") | R$ " + getPreco();
    }
}