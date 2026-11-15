//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Livro l1 = new Livro("Dom Casmurro","Machado de Assis", 256);
        l1.ler(64);
        l1.ler(32);

        Livro l2 = new Livro("Caderno de receitas da avó", 80);
        l2.ler(50);
        l2.ler(50);


        //enunciado nao pede para exibir na main, por isso está só comentado aqui em baixo
        //l1.exibir();
        //l2.exibir();

    }
}