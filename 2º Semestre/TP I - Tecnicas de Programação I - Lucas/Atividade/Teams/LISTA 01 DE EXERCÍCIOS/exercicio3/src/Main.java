//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Informe um numero inteiro");
        int numero = scanner.nextInt();

        if (numero != 0) {
            if (numero % 2 == 0) {entao é par};
        }
        if (numero > 0) {
            String resultado = "positivo";
        } else if (numero < 0) {
            String resultado = "negativo";
        }

    }
}