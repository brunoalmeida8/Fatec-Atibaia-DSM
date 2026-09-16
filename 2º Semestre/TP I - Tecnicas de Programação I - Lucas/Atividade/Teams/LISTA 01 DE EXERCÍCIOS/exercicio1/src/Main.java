//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Scanner; // Importa a ferramenta de leitura
public class Main {
    public static void main(String[] args) {
        //classe Scanner importada
        //objeto scanner | System.in significa que le coisas do teclado
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite a temperatura em graus Celcius ");

        //.nextDouble le do teclado como sendo um double
        double celcius = scanner.nextDouble();
        double fahrenheit = (celcius * 9.0/5.0) + 32;

        System.out.println("Temperatura em Fahrenheit :" + fahrenheit);
        scanner.close();//boa pratica???
    }
}