//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        System.out.print("Digite a marca do Carro: ");
        String marcaC = teclado.nextLine();
        System.out.print("Digite o modelo do Carro: ");
        String modeloC = teclado.nextLine();
        System.out.print("Digite a quantidade de portas: ");
        int portas = teclado.nextInt();
        teclado.nextLine();

        System.out.print("Digite a marca da Moto: ");
        String marcaM = teclado.nextLine();
        System.out.print("Digite o modelo da Moto: ");
        String modeloM = teclado.nextLine();
        System.out.print("Digite a cilindradas: ");
        int cilindradas = teclado.nextInt();
        teclado.nextLine();

        Carro c1 = new Carro(marcaC, modeloC, portas);
        Moto m1 = new Moto(marcaM, modeloM, cilindradas);

        c1.exibirInformacoes();
        m1.exibirInformacoes();
    }
}