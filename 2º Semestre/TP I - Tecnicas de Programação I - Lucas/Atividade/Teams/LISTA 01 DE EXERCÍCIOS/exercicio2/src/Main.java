//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Scanner; // Importa a ferramenta de leitura
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double valorHora, qtdHora, valorDesconto, salarioBruto, salarioLiquido;

        System.out.print("Digite o valor da hora de trabalho: R$ ");
        valorHora = scanner.nextDouble();

        System.out.print("Digite a quantidade de horas trabalhadas no mês: ");
        qtdHora = scanner.nextDouble();

        salarioBruto = valorHora * qtdHora;
        valorDesconto = salarioBruto * 11/100;
        salarioLiquido = salarioBruto - valorDesconto;

        System.out.println("\n\n================= APRESENTANDO DADOS =================");
        System.out.println("Salrio Bruto: R$ " + salarioBruto);
        System.out.println("Valor do desconto INSS: R$ " + valorDesconto);
        System.out.println("Salrio Liquido: R$ " + salarioLiquido);






        scanner.close();//boa pratica???

    }
}