public class Veiculo {
    //attributes
    String tipo;
    int qtdRodas;
    String cor;

    //constructors
    // Construtor: garante que o objeto já nasça com seus dados definidos (não vazio | não pelado kkk).
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
