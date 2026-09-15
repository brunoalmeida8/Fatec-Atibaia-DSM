import java.util.Objects;

public class Autor {
    //atributos
    private String nome;
    private String nacionalidade;
    private int anoNascimento;

    //construtores

    public Autor(String nome, String nacionalidade, int anoNascimento) {
        this.nome = nome;
        this.nacionalidade = nacionalidade;
        this.anoNascimento = anoNascimento;
    }

    public Autor(String nome) {
        this.nome = nome;
        this.nacionalidade = "Não informada";
        this.anoNascimento = 0;
    }

    //metodos
    public void apresentar(){
        System.out.println("\n\nNome: " + this.nome);
    }

    public void apresentar(String estilo){
        System.out.println("\n\nNome: " + this.nome);//vai imprimir de qualquer forma
        if (Objects.equals(estilo, "completo")) {//compara texto if estilo == "completo"
            System.out.println("Nacionalidade: " + this.nacionalidade);
            System.out.println("Ano de Nascimento: " + this.anoNascimento);
        }
    }
}


