public class Evento {
    //atributos
    private String nome;
    private double precoBase;

    //Construtor
    public Evento(String nome, double precoBase) {
        this.nome = nome;
        this.precoBase = precoBase;
    }

    //getters e setters
    public String getNome() {
        return nome;
    }
    public double getPrecoBase() {
        return precoBase;
    }

    //metodos
}
