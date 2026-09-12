//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Aluno a1 = new Aluno("Marina Costa", 16, "3ºA");
        Aluno a2 = new Aluno("Pedro Lima", "2ºB");
        Aluno a3 = new Aluno("Júlia Alves");
        //Aluno a4 = new Aluno("Patricia Souza", 15, "2ºA", Aluno.totalAlunos());
        Aluno a5 = new Aluno("Carlos Alberto", 14, "1ºA", Aluno.getTotalAlunos());


        a1.exibirDados();
        a2.exibirDados();
        a3.exibirDados();
        //a4.exibirDados();
        a5.exibirDados();


        System.out.println("Total de alunos: " + Aluno.getTotalAlunos());
    }
}