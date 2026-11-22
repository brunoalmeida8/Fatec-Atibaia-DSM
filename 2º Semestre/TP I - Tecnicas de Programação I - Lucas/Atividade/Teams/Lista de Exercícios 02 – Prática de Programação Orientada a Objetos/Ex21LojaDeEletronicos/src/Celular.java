public class Celular extends Eletronico {
    //atributos
    private int armazenamentoGb;

    //construtores
    public Celular(String marca, String modelo, double preco, int garantiaMeses, int armazenamentoGb) {
        super(marca, modelo, preco, garantiaMeses);
        this.armazenamentoGb = armazenamentoGb;
    }

    //get e setters

    //metodos
    @Override
    public void exibir() {
        super.exibir();
        System.out.println("Armazenamento: " + armazenamentoGb + " GB");
    }
}