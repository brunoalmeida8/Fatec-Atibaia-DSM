//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Celular c1 = new Celular("Nokra", "X10", 1899.0, 12, 128);
        Notebook n1 = new Notebook("Lumen", "Book 14", 3499.0, 12, 16, 14.0);
        NotebookGamer g1 = new NotebookGamer("Lumen", "Strike 16", 7999.0, 12, 32, 16.0, "GX 4060");

        g1.estenderGarantia(12);

        c1.exibir();
        System.out.println();

        n1.exibir();
        System.out.println();

        g1.exibir();
    }
}