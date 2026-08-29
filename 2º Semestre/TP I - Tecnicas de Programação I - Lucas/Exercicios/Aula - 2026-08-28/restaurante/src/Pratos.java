public class Pratos {
    //Atributos
    private String nome;
    private double valor;
    private int quantidade;
    private String tamanho;
    private double total;

    //Metodo Construtor
    public Pratos(String nome, double valor, int quantidade, String tamanho) {
        this.nome = nome;
        this.valor = valor;
        this.quantidade = quantidade;
        this.tamanho = tamanho;
    }

    //Metodos de acesso publico Getters e Setters
    public String getNome() {
        return nome;
    }
    public void setNome(String nome){
        this.nome = nome;
    }

    public double getValor() {
        return valor;
    }
    public void setValor(double valor){
        this.valor = valor;
    }

    public int getUnidade() {
        return quantidade;
    }
    public void setUnidade(int quantidade) {
        this.quantidade = quantidade;
    }

    public String getTamanho() {
        return tamanho;
    }
    public void setTamanho(String tamanho){
        this.tamanho = tamanho;
    }




    public double valorPrato(double valor, int quantidade){
        return this.valor * this.quantidade;
    }
    public void apresentarValor(double valor){
        double total;
        if (valor < 200){
            total = valor * 1.10;
        } else {
            total = valor * 1.15;
            if (valor > 500) {
                System.out.println("bala de troco");
            }
        }
    }

}
