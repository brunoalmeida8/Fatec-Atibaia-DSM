public class Calculo {
    //atributos/variaveis

    double nota1;
    double nota2;

    //construtor
    public Calculo(double nota1, double nota2){
        this.nota1 = nota1;
        this.nota2 = nota2;
    }

    //metodos
    public void apresentarMedia(){
        double media = nota1 * 0.5 + nota2 * 0.5;
        //media = (nota1 + nota2) / 2;
        if (media > 5.99) {
            System.out.println("Sua media é: " + media + " voce esta aprovado" +
                    "na materia do Lucas");
        } else {
            System.out.println("Sua media é: " + media + " voce esta reprovado" +
                    "na materia do Lucas");
        }
    }
}