public class Livro {
    //atributos
    private String titulo;
    private String autor;
    private int ano;

    //construtors
    public Livro(String titulo, String autor, int ano){
        this.titulo = titulo;
        this.autor = autor;
        this.ano = ano;
    }

    //metodos
    public void apresentarDetalhes(){
        System.out.println("\n\nTitulo: " + this.titulo);
        System.out.println("Autor: " + this.autor);
        System.out.println("Ano: " + this.ano);
        if(this.ano < 1926){
            System.out.println("Livro antigo no estoque");
        } else if (this.ano > 2026) {
            System.out.println("Livro invalido, ele ainda não foi publicado");
        }
    }

}
