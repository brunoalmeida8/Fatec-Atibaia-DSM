//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Imovel im1 = new Imovel("Rua do Comércio, 100", 1800.0);
        Casa c1 = new Casa("Rua das Flores, 25", 2200.0, true);
        Casa c2 = new Casa("Rua dos Pinheiros, 80", 1900.0, false);
        Apartamento ap1 = new Apartamento("Av. Central, 500", 1500.0, 0, 450.0);
        Apartamento ap2 = new Apartamento("Av. Central, 500", 1500.0, 8, 450.0);

        im1.exibir();
        System.out.println();

        c1.exibir();
        System.out.println();

        c2.exibir();
        System.out.println();

        ap1.exibir();
        System.out.println();

        ap2.exibir();
    }
}