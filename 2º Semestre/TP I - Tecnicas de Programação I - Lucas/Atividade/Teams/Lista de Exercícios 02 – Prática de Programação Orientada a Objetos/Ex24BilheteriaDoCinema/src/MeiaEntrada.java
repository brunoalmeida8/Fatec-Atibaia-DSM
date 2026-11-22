public class MeiaEntrada extends Ingresso {
    //atributos
    private String documento;

    //construtores
    public MeiaEntrada(String filme, String sessao, double precoBase, String documento) {
        super(filme, sessao, precoBase);
        this.documento = documento;
    }

    //get e setters

    //metodos
    @Override
    public double getPreco() {
        return getPrecoBase() / 2.0;
    }

    @Override
    public String toString() {
        return "Meia (" + documento + ") - " + getFilme() + " (" + getSessao() + ") | R$ " + getPreco();
    }
}