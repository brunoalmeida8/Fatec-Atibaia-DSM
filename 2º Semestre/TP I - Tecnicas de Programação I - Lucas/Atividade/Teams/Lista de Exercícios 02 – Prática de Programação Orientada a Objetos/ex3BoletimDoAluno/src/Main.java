//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Aluno bruna = new Aluno("Bruna", 8, 7);
        Aluno diego = new Aluno("Diego", 5, 4);
        Aluno paulo = new Aluno("Paulo", 2.5, 3);

        bruna.exibirBoletim();
        diego.exibirBoletim();
        paulo.exibirBoletim();
    }
}