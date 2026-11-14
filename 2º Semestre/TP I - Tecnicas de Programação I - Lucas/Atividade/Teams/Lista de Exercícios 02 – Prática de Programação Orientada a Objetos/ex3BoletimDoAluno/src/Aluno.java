public class Aluno {
    //atributos
    String nome;
    double nota1;
    double nota2;

    //construtor

    public Aluno(String nome, double nota1, double nota2) {
        this.nome = nome;
        this.nota1 = nota1;
        this.nota2 = nota2;
    }

    //set e get = nao tem no diagrama/enunciado

    //metodos
    double calcularMedia(){
        return (nota1 + nota2) / 2;
    }

    String obterSituacao(){
        return (calcularMedia() >= 6)? "Aprovado" :
               (calcularMedia() >= 4)? "Exame" : "Reprovado";
    }

    void exibirBoletim(){
        System.out.println("Nome: " + this.nome + " | Média: " + String.format("%.1f", this.calcularMedia()) + " | Situacao: " + obterSituacao());
    }
}
