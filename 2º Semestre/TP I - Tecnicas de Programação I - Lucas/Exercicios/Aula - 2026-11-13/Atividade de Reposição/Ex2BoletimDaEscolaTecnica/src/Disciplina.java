public class Disciplina {
    //atributos
    private String nome;
    private Professor professor;

    //construtores
    public Disciplina(String nome, Professor professor) {
        this.nome = nome;
        this.professor = professor;
    }

    //get e setters

    //metodos
    public void exibir() {
        System.out.println("Disciplina " + nome + " com o professor " + professor.getNome());
    }
}