public class EntregaCaminhao extends Entrega {
    //atributos

    //construtores
    public EntregaCaminhao(double distanciaKm, double pesoKg) {
        super(distanciaKm, pesoKg);
    }

    //get e setters

    //metodos
    @Override
    public double calcularCusto() {
        return (getDistanciaKm() * 3.0) + (getPesoKg() * 0.5);
    }

    @Override
    public String getTipo() {
        return "Caminhão";
    }
}