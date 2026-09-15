//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Livro l1 = new Livro("Capitães da Areia", "Jorge Amado", 1937);
        Livro l2 = new Livro("Memórias Póstumas de Brás Cubas", "Machado de Assis");// é de 1881

        l1.apresentar();
        l1.apresentar(true);
        l1.apresentar(false);
        l2.apresentar();
        l2.apresentar(true);
        l2.apresentar(false);



        Autor a1 = new Autor("Joaquim Maria Machado de Assis", "Brasileira", 1839);
        Autor a2 = new Autor("Jorge Leal Amado de Faria");

        a1.apresentar();
        a1.apresentar("completo");
        a1.apresentar("outra coisa");
    }
}