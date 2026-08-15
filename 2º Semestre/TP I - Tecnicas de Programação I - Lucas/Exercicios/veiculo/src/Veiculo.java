public class Veiculo {
    //attributes
    String tipo;
    int qtdRodas;
    String cor;

    //constructors
    public Veiculo(String tipo, int qtdRodas, String cor){
        this.tipo = tipo;
        this.qtdRodas = qtdRodas;
        this.cor = cor;
    }

    //methods
    public void apresentarVeiculo(){
        System.out.println("Tipo: " + tipo + " | Cor: " + cor);
    }

    public void apresentarTodas(){
        System.out.println("Tipo: " + tipo + " | Rodas: " + qtdRodas + " | Cor: " + cor);
    }
}
