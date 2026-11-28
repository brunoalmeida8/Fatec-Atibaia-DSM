//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Evento e1 = new Evento("Festival de Inverno", 120.0);
        Ingresso i1 = new Inteira("Ana", e1);
        Ingresso i2 = new MeiaEntrada("Bruno", e1);
        Ingresso i3 = new Camarote("Carla", e1);
        Ingresso i4 = new Camarote("Diego", e1, 80.00);

        i1.exibir();
        i2.exibir();
        i3.exibir();
        i4.exibir();
    }
}