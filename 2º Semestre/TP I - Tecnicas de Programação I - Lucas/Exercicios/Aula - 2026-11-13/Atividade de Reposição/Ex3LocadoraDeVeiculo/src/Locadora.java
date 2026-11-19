public class Locadora {
    //atributos
    private String nome;

    //construtores
    public Locadora(String nome) {
        this.nome = nome;
    }

    //get e setters

    //metodos
    public double calcularAluguel(Veiculo v, int dias) {
        return v.getValorDiaria() * dias;
    }

    public double calcularAluguel(Veiculo v, int dias, boolean seguro) {
        double total = calcularAluguel(v, dias);
        if (seguro) {
            total += 50.0;
        }
        return total;
    }

    public void alugar(Cliente c, Veiculo v, int dias) {
        double valor = calcularAluguel(v, dias);
        System.out.println(c.getNome() + " alugou " + v.getPlaca() + " por " + dias + " dias: R$ " + valor);
    }
}