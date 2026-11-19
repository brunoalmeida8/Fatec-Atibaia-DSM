public abstract class Pessoa {
    //atributos
    private String nome;

    //construtores
    public Pessoa(String nome) {
        this.nome = nome;
    }

    //get e setters
    public String getNome() {
        return nome;
    }

    //metodos
    public abstract String getPapel();

    public void apresentar() {
        System.out.println(getPapel() + ": " + getNome());
    }
}