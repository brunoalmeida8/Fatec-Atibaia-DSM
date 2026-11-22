public class EntregaDrone extends Entrega {
    //atributos

    //construtores
    public EntregaDrone(double distanciaKm, double pesoKg) {
        super(distanciaKm, pesoKg);
    }

    //get e setters

    //metodos
    @Override
    public boolean podeRealizar() {
        return getDistanciaKm() <= 10.0 && getPesoKg() <= 3.0;
    }

    @Override
    public double calcularCusto() {
        return 30.0;
    }

    @Override
    public String getTipo() {
        return "Drone";
    }
}