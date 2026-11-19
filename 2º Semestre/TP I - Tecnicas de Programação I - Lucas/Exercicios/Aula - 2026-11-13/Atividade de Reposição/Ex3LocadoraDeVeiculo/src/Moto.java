public class Moto extends Veiculo {
    //atributos

    //construtores
    public Moto(String placa) {
        super(placa);
    }

    //get e setters

    //metodos
    @Override
    public double getValorDiaria() {
        return 60.0;
    }
}