//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Livro l1 = new Livro("Dom Quixote", "Miguel de Cervantes", 1605);
        Livro l2 = new Livro("O Pequeno Príncipe", "Antoine de Saint-Exupéry", 1943);
        Livro l3 = new Livro("Cem Anos de Solidão", "Gabriel García Márquez", 1967);

        l1.apresentarDetalhes();
        l2.apresentarDetalhes();
        l3.apresentarDetalhes();
    }
}