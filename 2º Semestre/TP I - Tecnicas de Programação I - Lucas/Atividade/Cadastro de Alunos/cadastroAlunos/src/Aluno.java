public class Aluno {
    //atributos
    private String nome;
    private int idade;
    private String turma;
    private static int totalAlunos = 0;
    private int matricula = 0;

    //construtores

    public Aluno(String nome, int idade, String turma) {
        this.nome = nome;
        this.idade = idade;
        this.turma = turma;
        totalAlunos++;
        this.matricula = totalAlunos;
    }

    public Aluno(String nome, String turma) {
        this.nome = nome;
        this.idade = 0;
        this.turma = turma;
        totalAlunos++;
        this.matricula = totalAlunos;
    }

    public Aluno(String nome) {
        this.nome = nome;
        this.idade = 0;
        this.turma = "Não definida";
        totalAlunos++;
        this.matricula = totalAlunos;
    }

    public Aluno(String nome, int idade, String turma, int matricula) {
        this.nome = nome;
        this.idade = idade;
        this.turma = turma;
        totalAlunos++;
        this.matricula = matricula+1;
    }

    //get set
    public static int getTotalAlunos() {
        return totalAlunos;
    }

    public String getNome() {
        return nome;
    }

    public int getIdade() {
        return idade;
    }

    public String getTurma() {
        return turma;
    }


    //metodos
    public void exibirDados(){
        System.out.println("\nNome: " + this.nome + "\nIdade: " + this.idade + "\nTurma " + this.turma);
        System.out.println("Matricula: " + this.matricula);
    }

}
