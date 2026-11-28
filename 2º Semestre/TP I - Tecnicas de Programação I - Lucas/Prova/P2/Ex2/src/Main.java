//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Tarifa t = new TarifaNoturna();
        System.out.println(t.calcular(40));
        System.out.println(t.calcular(40, 3.0));
    }
}