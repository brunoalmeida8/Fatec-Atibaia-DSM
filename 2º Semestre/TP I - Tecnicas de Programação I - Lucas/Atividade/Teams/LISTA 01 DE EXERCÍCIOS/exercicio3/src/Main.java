//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Informe um numero inteiro");
        int numero = scanner.nextInt();

        String resultado = (numero > 0) ? "Positivo" : (numero < 0) ? "Negativo" : "Zero";//Operador Ternario aninhado
        //                  condição 1  ?   true 1   : else condição2 ? true 2   :  falso 2
        //se nao for maior que zero, então testa se é menor que zero, se ainda não for menor que zero então é zero

        System.out.println("\nNumero informado: " + numero);
        System.out.println("Numero é : " + resultado);
        if (numero != 0) {
            String parImpar = ((numero % 2 == 0) ? "par" : "impar");// Operador Ternario
            //                     condição      ? true  : se for falso
            System.out.println("Numero é: " + parImpar);
        }
        scanner.close();
    }
}