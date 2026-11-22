public class Quarto {
    //atributos
    private int numero;
    private double diaria;
    private boolean ocupado;

    //construtores
    public Quarto(int numero, double diaria) {
        this.numero = numero;
        this.diaria = diaria;
        this.ocupado = false;
    }

    //get e setters
    public int getNumero() {
        return numero;
    }

    public double getDiaria() {
        return diaria;
    }

    public boolean isOcupado() {
        return ocupado;
    }

    //metodos
    public void ocupar() {
        this.ocupado = true;
    }

    public void liberar() {
        this.ocupado = false;
    }

    public double calcularHospedagem(int noites) {
        return diaria * noites;
    }

    public String getCategoria() {
        return "Standard";
    }
}