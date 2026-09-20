//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Informe a distancia total percorrida (em km): ");// sem pular linha
        double distancia = scanner.nextFloat();

        System.out.print("Informe o total de combustivel gasto (em litros): ");//sem pular linha
        double combustivel = scanner.nextFloat();

        double consumoMedio = distancia/combustivel;

        System.out.println("\n============================================");
        System.out.printf("Consumo médio do veiculo: %.2f km/l\n", consumoMedio);//printf para colocar %.2f a ling C
        if (consumoMedio >= 12) {
            System.out.println("Veiculo Econômico");
        } else {
            System.out.println("Veiculo Não Econômico");
        }

        scanner.close();
    }
}