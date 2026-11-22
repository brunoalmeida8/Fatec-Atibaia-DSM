public class Imovel {
    //atributos
    private String endereco;
    private double aluguelBase;

    //construtores
    public Imovel(String endereco, double aluguelBase) {
        this.endereco = endereco;
        this.aluguelBase = aluguelBase;
    }

    //get e setters
    public String getEndereco() {
        return endereco;
    }

    public double getAluguelBase() {
        return aluguelBase;
    }

    //metodos
    public double calcularAluguelTotal() {
        return aluguelBase;
    }

    public void exibir() {
        System.out.println("Endereço: " + endereco + " | Base: R$ " + aluguelBase + " | Total: R$ " + calcularAluguelTotal());
    }
}