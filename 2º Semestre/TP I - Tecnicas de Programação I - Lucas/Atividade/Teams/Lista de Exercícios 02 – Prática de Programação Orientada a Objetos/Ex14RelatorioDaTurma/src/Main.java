//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Turma turma = new Turma("ILP-036");

        turma.adicionar(new Estudante("Ana", 7.5));
        turma.adicionar(new Estudante("Bruno", 5.0));
        turma.adicionar(new Estudante("Carla", 9.0));
        turma.adicionar(new Estudante("Davi", 6.0));
        turma.adicionar(new Estudante("Elisa", 3.5));

        turma.exibirRelatorio();
    }
}