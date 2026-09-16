//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
/*
    Fiz tentando usar os conceitos em aula
        Classe Salario
        Construtoes sobrecarregados
            caso queira informar outra taxa INSS entao construtor completo
            caso usar taxa INSS padrao (11%) entao construtor com default taxa = 11% sempre
        metodos para calcular Bruto | desconto em R$ | Liquido
*/


import java.util.Scanner; // Importa a ferramenta de leitura
public class Main {
    public static void main(String[] args) {
        //classe Scanner importada
        //objeto scanner | System.in significa que le coisas do teclado
        Scanner scanner = new Scanner(System.in);
        Salario s1;// declarando variavel em escopo global ??

        //.nextDouble le do teclado como sendo um double
        System.out.print("Digite o valor da hora de trabalho: R$ ");
        double valorHora = scanner.nextDouble();

        System.out.print("Digite a quantidade de horas trabalhadas no mês: ");
        double qtdHora = scanner.nextDouble();

        System.out.println("\nDeseja utilizar a taxa de INSS padrao (11%)?");
        System.out.println("1 - Sim, usar padrão 11%");
        System.out.println("2 - Não, Informar taxa desejada");
        System.out.print("Opção = ");

        int escolha = scanner.nextInt();
        if (escolha != 1) {
            System.out.println("\nInforme a taxa do INSS:");
            System.out.println("Exemplo: digite |  10  | para 10% ");
            System.out.print("Taxa = ");
            double taxa = scanner.nextDouble();
            s1 = new Salario(valorHora, qtdHora, taxa); // ja declarada por isso nao tem Salario s1 = ...
        } else {
            //usar construtor sobrecarregado com taxa padrao INSS padrao de 11%
            s1 = new Salario(valorHora, qtdHora); // ja declarada por isso nao tem Salario s1 = ...
        }


        s1.calcularBruto();
        s1.calcularDesconto();
        s1.calcularLiquido();
        s1.apresentarSalario();

        scanner.close();//boa pratica???
    }
}