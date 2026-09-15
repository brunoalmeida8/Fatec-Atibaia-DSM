import java.awt.*;

public class Calculo  {

    //atributos
    // OBS usei atributos para representar as "variaveis" que estão no enunciado do exercicio. Correto? Nao saber, mas funciona kkk...
    double nota1;
    double nota2;
    double media;
    String nomeAluno; // sei la ainda...


    //construtores
    public Calculo(double nota1, double nota2, String nomeAluno){
        this.nota1 = nota1;
        this.nota2 = nota2;
        this.nomeAluno = nomeAluno;
    }


    //metodos

    // calcula a media de acordo com a notas 1 e 2 recebidas la da main
    public void calcularMedia(){
        media = (this.nota1 + this.nota2) / 2;
    }

    //apenas apresenta a media depois de calcular
    public void apresentarMedia(){
        System.out.println("Aluno: " + nomeAluno);
        System.out.println("Media: " + media);
    }

    //metodo diferente para avaliar se media >= 6 para aprovado
    public void avaliarAprovacao(){
        if (media >= 6){
            System.out.println("Aluno aprovado com media: " + media);
        } else{
            System.out.println("Aluno reprovado com media: " + media);
        }
    }

    //metodo para separar (dar espaçamento) entre os Calculos (cada aluno)
    //meu deus, a classe Calculo ja ta quase virando classe Aluno... kkk
    public void separar(){
        System.out.println("");
        System.out.println("===================================");
        System.out.println("");
    }
}
