public abstract class Veiculo {
    //atributos
    private String placa;

    //construtores
    public Veiculo(String placa) {
        this.placa = placa;
    }

    //get e setters
    public String getPlaca() {
        return placa;
    }

    //metodos
    public abstract double getValorDiaria();

    @Override
    public String toString() {
        return "Veículo " + placa + " (diária R$ " + getValorDiaria() + ")";
    }
}