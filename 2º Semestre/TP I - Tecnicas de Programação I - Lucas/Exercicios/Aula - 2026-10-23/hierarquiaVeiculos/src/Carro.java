public class Carro extends Veiculo {
    //atributos
    private int quantidadePortas;
    //construtor

    public Carro(String marca, String modelo, int quantidadePortas) {
        super(marca, modelo);
        this.quantidadePortas = quantidadePortas;
    }


    //get e set

    public int getQuantidadePortas() {
        return quantidadePortas;
    }

    public void setQuantidadePortas(int quantidadePortas) {
        this.quantidadePortas = quantidadePortas;
    }

    //metodos

    @Override
    public void exibirInformacoes() {
        super.exibirInformacoes();
        System.out.println("Quantidades de Portas: " + this.quantidadePortas);
    }
}
