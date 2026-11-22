public class Eletronico {
    //atributos
    private String marca;
    private String modelo;
    private double preco;
    private int garantiaMeses;

    //construtores
    public Eletronico(String marca, String modelo, double preco, int garantiaMeses) {
        this.marca = marca;
        this.modelo = modelo;
        this.preco = preco;
        this.garantiaMeses = garantiaMeses;
    }

    //get e setters
    public String getMarca() {
        return marca;
    }

    public String getModelo() {
        return modelo;
    }

    public double getPreco() {
        return preco;
    }

    public int getGarantiaMeses() {
        return garantiaMeses;
    }

    //metodos
    public void estenderGarantia(int meses) {
        if (meses > 0) {
            garantiaMeses += meses;
        }
    }

    public void exibir() {
        System.out.println("Marca: " + marca + " | Modelo: " + modelo + " | Preço: R$ " + preco + " | Garantia: " + garantiaMeses + " meses");
    }
}