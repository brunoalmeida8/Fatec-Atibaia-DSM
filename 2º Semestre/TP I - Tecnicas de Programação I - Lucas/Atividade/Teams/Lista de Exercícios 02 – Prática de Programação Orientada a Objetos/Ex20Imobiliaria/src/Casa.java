public class Casa extends Imovel {
    //atributos
    private static final double ADICIONAL_QUINTAL = 150.00;
    private boolean temQuintal;

    //construtores
    public Casa(String endereco, double aluguelBase, boolean temQuintal) {
        super(endereco, aluguelBase);
        this.temQuintal = temQuintal;
    }

    //get e setters
    public boolean isTemQuintal() {
        return temQuintal;
    }

    //metodos
    @Override
    public double calcularAluguelTotal() {
        if (temQuintal) {
            return getAluguelBase() + ADICIONAL_QUINTAL;
        }
        return getAluguelBase();
    }
}