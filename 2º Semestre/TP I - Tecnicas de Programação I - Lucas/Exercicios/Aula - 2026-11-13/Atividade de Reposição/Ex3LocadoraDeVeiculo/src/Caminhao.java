public class Caminhao extends Veiculo {
    //atributos
    private int eixos;

    //construtores
    public Caminhao(String placa, int eixos) {
        super(placa);
        this.eixos = eixos;
    }

    //get e setters
    public int getEixos() {
        return eixos;
    }

    //metodos
    @Override
    public double getValorDiaria() {
        return 200.0 + (30.0 * eixos);
    }
}