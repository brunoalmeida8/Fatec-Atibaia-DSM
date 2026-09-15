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

    public Autor(String nome, String nacionalidade) {
        this.nome = nome;
        this.nacionalidade = nacionalidade;
        this.anoNascimento = 0;
    }

    //metodos
    public void apresentar(){
        System.out.println("Nome: " + this.nome);
    }

    public void apresentar(String estilo){

    }
}
