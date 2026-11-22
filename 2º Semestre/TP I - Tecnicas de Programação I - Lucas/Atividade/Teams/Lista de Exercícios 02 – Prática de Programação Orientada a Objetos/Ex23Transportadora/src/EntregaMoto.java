public class EntregaMoto extends Entrega {
    //atributos

    //construtores
    public EntregaMoto(double distanciaKm, double pesoKg) {
        super(distanciaKm, pesoKg);
    }

    //get e setters

    //metodos
    @Override
    public boolean podeRealizar() {
        return getPesoKg() <= 15.0;
    }

    @Override
    public double calcularCusto() {
        return getDistanciaKm() * 1.5;
    }

    @Override
    public String getTipo() {
        return "Moto";
    }
}