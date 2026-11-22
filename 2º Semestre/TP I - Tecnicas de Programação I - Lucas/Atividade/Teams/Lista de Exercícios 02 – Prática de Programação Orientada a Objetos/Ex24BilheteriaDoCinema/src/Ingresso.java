public class Ingresso {
    //atributos
    private String filme;
    private String sessao;
    private double precoBase;

    //construtores
    public Ingresso(String filme, String sessao, double precoBase) {
        this.filme = filme;
        this.sessao = sessao;
        this.precoBase = precoBase;
    }

    //get e setters
    public String getFilme() {
        return filme;
    }

    public String getSessao() {
        return sessao;
    }

    public double getPrecoBase() {
        return precoBase;
    }

    //metodos
    public double getPreco() {
        return precoBase;
    }

    @Override
    public String toString() {
        return "Inteira - " + filme + " (" + sessao + ") | R$ " + getPreco();
    }
}