public class Entrega {
    //atributos
    private double distanciaKm;
    private double pesoKg;

    //construtores
    public Entrega(double distanciaKm, double pesoKg) {
        this.distanciaKm = distanciaKm;
        this.pesoKg = pesoKg;
    }

    //get e setters
    public double getDistanciaKm() {
        return distanciaKm;
    }

    public double getPesoKg() {
        return pesoKg;
    }

    //metodos
    public boolean podeRealizar() {
        return true;
    }

    public double calcularCusto() {
        return distanciaKm * 2.0;
    }

    public String getTipo() {
        return "Padrão";
    }
}