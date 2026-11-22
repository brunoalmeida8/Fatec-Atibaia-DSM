public class Apartamento extends Imovel {
    //atributos
    private int andar;
    private double condominio;

    //construtores
    public Apartamento(String endereco, double aluguelBase, int andar, double condominio) {
        super(endereco, aluguelBase);
        this.andar = andar;
        this.condominio = condominio;
    }

    //get e setters

    //metodos
    @Override
    public double calcularAluguelTotal() {
        double aluguel = getAluguelBase();
        if (andar == 0) {
            aluguel = aluguel * 0.95;
        }
        return aluguel + condominio;
    }

    @Override
    public void exibir() {
        super.exibir();
        System.out.println("Andar: " + andar + " | Condomínio: R$ " + condominio);
    }
}