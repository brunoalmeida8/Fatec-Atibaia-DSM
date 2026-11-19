public class Boletim {
    //atributos
    private Disciplina disciplina;
    private Aluno aluno;

    //construtores
    public Boletim(Disciplina disciplina, Aluno aluno) {
        this.disciplina = disciplina;
        this.aluno = aluno;
    }

    //get e setters

    //metodos
    public void imprimir() {
        disciplina.exibir();
        System.out.println(aluno.getNome() + ": média " + aluno.calcularMedia() + " (" + aluno.situacao() + ")");
    }
}