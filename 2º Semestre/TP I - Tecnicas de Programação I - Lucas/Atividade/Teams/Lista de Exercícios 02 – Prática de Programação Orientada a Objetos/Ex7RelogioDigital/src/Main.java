//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Relogio r1 = new Relogio(23,58);
        r1.exibir();
        for (int i = 0; i < 3; i++) {
            r1.avancarMinuto();
            r1.exibir();
        }
        r1.setHora(64);
        r1.setMinuto(465);
    }
}