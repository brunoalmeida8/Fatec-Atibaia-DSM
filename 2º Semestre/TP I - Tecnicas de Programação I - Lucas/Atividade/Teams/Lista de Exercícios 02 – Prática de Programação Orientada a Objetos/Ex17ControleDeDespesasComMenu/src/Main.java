//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ControleDespesas cd1 = new ControleDespesas();
        int op;

        do {
            System.out.println("\n1-Registrar | 2-Listar | 3-Total | 0-Sair");
            System.out.print("Opção: ");
            op = sc.nextInt();
            sc.nextLine();

            switch (op) {
                case 1:
                    System.out.print("Descrição: ");
                    String desc = sc.nextLine();
                    System.out.print("Valor: ");
                    double val = sc.nextDouble();
                    sc.nextLine();
                    cd1.registrar(desc, val);
                    break;
                case 2:
                    cd1.listar();
                    break;
                case 3:
                    System.out.println("Total: R$ " + cd1.calcularTotal());
                    break;
                case 0:
                    System.out.println("Saindo...");
                    break;
                default:
                    System.out.println("Opção inválida.");
                    break;
            }
        } while (op != 0);

        sc.close();
    }
}