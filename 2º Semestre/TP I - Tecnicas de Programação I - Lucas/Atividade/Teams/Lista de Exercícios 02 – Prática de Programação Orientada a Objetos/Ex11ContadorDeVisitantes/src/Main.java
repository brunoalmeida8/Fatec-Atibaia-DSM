//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        System.out.println("Total de visitantes antes: " + Visitante.getTotalVisitantes());

        Visitante v1 = new Visitante("Ana");
        Visitante v2 = new Visitante("Caio");
        Visitante v3 = new Visitante("Luíza");

        v1.apresentar();
        v2.apresentar();
        v3.apresentar();

        System.out.println("Total de visitantes ao final: " + Visitante.getTotalVisitantes());
    }
}