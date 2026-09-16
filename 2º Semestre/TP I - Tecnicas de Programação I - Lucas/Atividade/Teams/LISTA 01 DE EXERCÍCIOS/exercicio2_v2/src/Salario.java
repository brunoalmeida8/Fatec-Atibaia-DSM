public class Salario {
    //Atributos
    private double valorHora; // valor da hora trabalhada
    private double qtdHora;// quantidade de horas trabalhadas no mês.
    private double taxaDesconto; // taxa de desconto do INSS em %
    private double valorDesconto; // valor do desconto em reais
    private double salarioBruto; // Sem desconto
    private double salarioLiquido; //descontado x% de INSS

    //Construtores


    public Salario(double valorHora, double qtdHora) {
        this.valorHora = valorHora;
        this.qtdHora = qtdHora;
        this.taxaDesconto = 11.0/100.0; //se nao informar a taxa entao padrao é 11%
    }

    public Salario(double valorHora, double qtdHora, double taxaDesconto) {
        this.valorHora = valorHora;
        this.qtdHora = qtdHora;
        this.taxaDesconto = taxaDesconto/100;//se informar transforma em porcentagem
    }


    //Metodos

    //calcular salarioBruto
    public double calcularBruto(){
        this.salarioBruto = this.valorHora * this.qtdHora;
        return this.salarioBruto;
    }

    //calcular valor do desconto em R$
    public double calcularDesconto(){
        this.valorDesconto = this.salarioBruto * this.taxaDesconto;
        return this.valorDesconto;
    }

    //calcular salario Liquido
    public double calcularLiquido(){
        //this.salarioLiquido = this.salarioBruto - (this.salarioBruto * this.taxaDesconto));
        this.salarioLiquido = this.salarioBruto - this.valorDesconto;
        return this.salarioLiquido;
    }

    //apresentar dados
    public void apresentarSalario(){
        System.out.println("\n\n================= APRESENTANDO DADOS =================");
        System.out.println("Salrio Bruto: R$ " + this.salarioBruto);
        System.out.println("Valor do desconto INSS (" + (this.taxaDesconto*100) + "%): R$ " + valorDesconto);
        System.out.println("Salrio Liquido: R$ " + this.salarioLiquido);
    }



}
