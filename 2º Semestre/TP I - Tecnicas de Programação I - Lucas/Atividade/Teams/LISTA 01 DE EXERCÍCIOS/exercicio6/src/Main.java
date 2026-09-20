//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int escolha = 1;
        int soma = 0;
        while (escolha != 0){
            System.out.print("Informe um numero para somar, ou zero para encerrar: ");
            escolha = scanner.nextInt();
            soma += escolha;

        }

        System.out.println("=====================================================");
        System.out.println("A soma dos numeros é: " + soma);

        scanner.close();
    }
}