public class Suite extends Quarto {
    //atributos

    //construtores
    public Suite(int numero, double diaria) {
        super(numero, diaria);
    }

    //get e setters

    //metodos
    @Override
    public double calcularHospedagem(int noites) {
        double total = getDiaria() * noites;
        if (noites >= 5) {
            total = total * 0.90;
        }
        return total;
    }

    @Override
    public String getCategoria() {
        return "Suíte";
    }
}