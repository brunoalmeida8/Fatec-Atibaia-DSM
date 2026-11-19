//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Professor lucas = new Professor("Lucas", "Java");
        Aluno bia = new Aluno("Bia", 5.0, 7.0);
        Monitor caio = new Monitor("Caio", 8.0, 9.0, 10);

        lucas.apresentar();
        bia.apresentar();
        caio.apresentar();

        Disciplina tecnicas1 = new Disciplina("Técnicas I", lucas);

        Boletim boletimBia = new Boletim(tecnicas1, bia);
        Boletim boletimCaio = new Boletim(tecnicas1, caio);

        boletimBia.imprimir();
        boletimCaio.imprimir();
    }
}