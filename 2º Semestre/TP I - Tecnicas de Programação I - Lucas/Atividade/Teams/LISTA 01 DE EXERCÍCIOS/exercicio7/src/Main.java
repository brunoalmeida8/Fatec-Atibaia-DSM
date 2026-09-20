//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Informe sua idade para verificar sua situação eleitoral: ");
        int idade = scanner.nextInt();

        String situacaoEleitoral = (idade < 16) ? "Não vota"
                : (idade >= 16 && idade <= 17 || idade > 70) ? "Voto opcional"
                : "Voto Obrigatório";

        System.out.println("\n===== Situação Eleitoral =====");
        System.out.println(situacaoEleitoral);

        scanner.close();
    }
}
