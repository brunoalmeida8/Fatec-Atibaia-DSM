public class Aluno {
    //Atributos
    private String nome;
    private int matricula;

    //Construtor
    public Aluno(String nome, int matricula){
        this.setNome(nome);
        this.setMatricula(matricula);
    }

    //Metodos de acesso publico Getters e Setters
    public String getNome() {
        return nome;
    }
    public void setNome(String nome){
        this.nome = nome;
    }

    public int getMatricula(){
        return matricula;
    }

    public void setMatricula(int matricula) {
        this.matricula = matricula;
    }
}
