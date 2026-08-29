public class Professor {
    //Atributos
    private String nome;
    private String titulacao;

    //Construtor
    public Professor(String nome, String titulacao){
        this.setNome(nome);
        this.setTitulacao(titulacao);
    }

    //Metodos de acesso publico Getters e Setters
    public String getNome() {
        return nome;
    }
    public void setNome(String nome){
        this.nome = nome;
    }

    public String getTitulacao(){
        return titulacao;
    }

    public void setTitulacao(String titulacao) {
        this.titulacao = titulacao;
    }
}
