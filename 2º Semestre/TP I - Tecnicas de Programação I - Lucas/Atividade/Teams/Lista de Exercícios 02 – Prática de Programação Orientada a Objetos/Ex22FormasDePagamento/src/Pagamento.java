public class Pagamento {
    //atributos
    private double valor;

    //construtores
    public Pagamento(double valor) {
        this.valor = valor;
    }

    //get e setters
    public double getValor() {
        return valor;
    }

    //metodos
    public double calcularValorFinal() {
        return valor;
    }

    public String getDescricao() {
        return "Pagamento";
    }
}