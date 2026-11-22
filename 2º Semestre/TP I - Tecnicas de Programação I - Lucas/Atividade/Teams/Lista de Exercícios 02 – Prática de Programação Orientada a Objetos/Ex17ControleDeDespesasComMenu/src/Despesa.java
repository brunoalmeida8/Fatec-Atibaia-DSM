public class Despesa {
    //atributos
    private String descricao;
    private double valor;

    //construtores
    public Despesa(String descricao, double valor) {
        this.descricao = descricao;
        this.valor = valor;
    }

    //get e setters
    public String getDescricao() {
        return descricao;
    }

    public double getValor() {
        return valor;
    }

    //metodos
}