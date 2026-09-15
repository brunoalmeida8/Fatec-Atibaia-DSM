public class Livro {
    //atributos
    private String titulo;
    private String autor;
    private int anoPublicacao;

    //construtores
    public Livro(String titulo, String autor, int anoPublicacao) {
        this.titulo = titulo;
        this.autor = autor;
        this.anoPublicacao = anoPublicacao;
    }

    public Livro(String titulo, String autor) {
        this.titulo = titulo;
        this.autor = autor;
        this.anoPublicacao = 0;
    }


    //metodos
    public void apresentar(){
        System.out.println("\n\nTitulo: " + this.titulo);
        System.out.println("Autor: " + this.autor);
    }
    public void apresentar(boolean comAno){
        if (comAno == true) {
        System.out.println("\n\nTitulo: " + this.titulo);
        System.out.println("Autor: " + this.autor);
            if (this.anoPublicacao != 0) {
            System.out.println("Ano de Publicação: " + this.anoPublicacao);
            } else {
                System.out.println("Ano de Publicação: ano não informado");
            }
        } else {
            //apresentar();// assim nao
            System.out.println("\n\nTitulo: " + this.titulo);
            System.out.println("Autor: " + this.autor);
        }
    }
}
