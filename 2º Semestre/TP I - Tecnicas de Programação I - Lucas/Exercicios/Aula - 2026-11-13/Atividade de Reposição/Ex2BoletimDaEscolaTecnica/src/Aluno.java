public class Aluno extends Pessoa {
    //atributos
    private double nota1;
    private double nota2;

    //construtores
    public Aluno(String nome, double nota1, double nota2) {
        super(nome);
        this.nota1 = nota1;
        this.nota2 = nota2;
    }

    //get e setters

    //metodos
    public double calcularMedia() {
        return (nota1 + nota2) / 2.0;
    }

    public String situacao() {
        if (calcularMedia() >= 6.0) {
            return "Aprovado";
        }
        return "Reprovado";
    }

    @Override
    public String getPapel() {
        return "Aluno";
    }
}