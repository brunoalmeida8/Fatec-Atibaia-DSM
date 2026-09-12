//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Livro l1 = new Livro("nome", "nome", 2000);
        Livro l2 = new Livro("nome2", "nome2");

        l1.apresentar();
        l1.apresentar(true);
        l2.apresentar();
        l2.apresentar(true);
    }
}