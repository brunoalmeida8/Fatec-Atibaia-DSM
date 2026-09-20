//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite a base do retangulo: ");
        double base = scanner.nextDouble();
        System.out.println("Digite a altura do retangulo: ");
        double altura = scanner.nextDouble();

        Retangulo r1 = new Retangulo(base, altura);

        System.out.println("======= Calculos =======");
        System.out.println("Area do retangulo: " + r1.calcularArea());
        System.out.println("Perimetro do retangulo: " + r1.calcularPerimetro());


        scanner.close();
    }
}