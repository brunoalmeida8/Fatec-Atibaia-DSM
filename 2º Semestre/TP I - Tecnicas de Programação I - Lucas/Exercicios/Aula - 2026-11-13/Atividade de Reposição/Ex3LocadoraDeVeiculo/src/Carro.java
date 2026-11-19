public class Carro extends Veiculo {
    //atributos

    //construtores
    public Carro(String placa) {
        super(placa);
    }

    //get e setters

    //metodos
    @Override
    public double getValorDiaria() {
        return 150.0;
    }
}