//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Hotel h1 = new Hotel("Hotel Atibaia");

        h1.adicionarQuarto(new Quarto(101, 180.0));
        h1.adicionarQuarto(new Quarto(102, 180.0));
        h1.adicionarQuarto(new QuartoLuxo(201, 260.0));
        h1.adicionarQuarto(new Suite(301, 420.0));

        h1.listarDisponiveis();
        System.out.println();

        h1.reservar(101, 3);
        h1.reservar(201, 2);
        h1.reservar(301, 5);
        h1.reservar(102);

        System.out.println();
        h1.reservar(201, 1);
        h1.reservar(999, 2);

        System.out.println();
        h1.listarDisponiveis();

        System.out.println();
        h1.liberar(201);
        h1.listarDisponiveis();

        System.out.println("\nTotal de reservas realizadas: " + Hotel.getTotalReservas());
    }
}