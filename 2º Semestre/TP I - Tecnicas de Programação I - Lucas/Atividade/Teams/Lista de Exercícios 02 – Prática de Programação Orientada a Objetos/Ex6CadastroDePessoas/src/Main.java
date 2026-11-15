//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Pessoa p1 = new Pessoa(" Camila ", 17);
        System.out.println("Nome: " + p1.getNome() + " | Idade: " + p1.getIdade());

        p1.setIdade(-3);
        p1.setIdade(200);
        p1.setNome("");
        p1.setIdade(18);

        System.out.println("Nome: " + p1.getNome() + " | Idade: " + p1.getIdade());
    }
}