public class Notebook extends Eletronico {
    //atributos
    private int memoriaRamGb;
    private double tamanhoTela;

    //construtores
    public Notebook(String marca, String modelo, double preco, int garantiaMeses, int memoriaRamGb, double tamanhoTela) {
        super(marca, modelo, preco, garantiaMeses);
        this.memoriaRamGb = memoriaRamGb;
        this.tamanhoTela = tamanhoTela;
    }

    //get e setters

    //metodos
    @Override
    public void exibir() {
        super.exibir();
        System.out.println("RAM: " + memoriaRamGb + " GB | Tela: " + tamanhoTela + "\"");
    }
}