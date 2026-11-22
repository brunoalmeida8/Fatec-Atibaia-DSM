public class Contato {
    //atributos
    private String nome;
    private String telefone;

    //construtores
    public Contato(String nome, String telefone) {
        this.nome = nome;
        this.telefone = telefone;
    }

    //get e setters
    public String getNome() {
        return nome;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    //metodos
}