public class QuartoLuxo extends Quarto {
    //atributos
    private static final double CAFE_POR_NOITE = 40.00;

    //construtores
    public QuartoLuxo(int numero, double diaria) {
        super(numero, diaria);
    }

    //get e setters

    //metodos
    @Override
    public double calcularHospedagem(int noites) {
        return (getDiaria() + CAFE_POR_NOITE) * noites;
    }

    @Override
    public String getCategoria() {
        return "Luxo";
    }
}