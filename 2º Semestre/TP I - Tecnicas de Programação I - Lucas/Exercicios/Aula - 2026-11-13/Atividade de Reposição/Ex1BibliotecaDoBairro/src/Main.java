//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Livro l1 = new Livro("Dom Casmurro");
        System.out.println(l1.getTitulo() + ": prazo de " + l1.getPrazoDias() + " dias");
        Revista r1 = new Revista("Super Interessante");
        System.out.println(r1.getTitulo() + ": prazo de " + r1.getPrazoDias() + " dias");
        DVD d1 = new DVD("Matrix");
        System.out.println(d1.getTitulo() + ": prazo de " + d1.getPrazoDias() + " dias");
        Usuario u1 = new Usuario("Ana");
        Emprestimo e1 = new Emprestimo(u1,d1);
        e1.mostrar();
        System.out.println("Multa de 3 dias: R$ " + e1.calcularMulta(3));
        //System.out.println("A revista tem multa de R$ " + r1.getMultaPorDia() + " por dia");
        Item itemRevista = r1;
        if (itemRevista instanceof Revista rev) {
            System.out.println("A revista tem multa de R$ " + rev.getMultaPorDia() + " por dia");
        }
    }
}