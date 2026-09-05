//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Funcionario f1 = new Funcionario("Bruno", "AOE", 1000);

        f1.exibirDados();
        f1.aumentarSalario(10);
        f1.exibirDados();

    }
}