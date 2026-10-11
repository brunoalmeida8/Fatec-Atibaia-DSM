public class Livro extends Item {
    //atributos
    private String autor;

    //construtor
    public Livro(String titulo, int ano, String autor) {
        super(titulo, ano);//pega da mae (Item)
        this.autor = autor;
    }

    //getters e setters
    public String getAutor() {
        return autor;
    }
    public void setAutor(String autor) {
        this.autor = autor;
    }

    //metodos
    @Override
    public void exibirDetalhes(){
        super.exibirDetalhes(); //usa da classe mae (Item)
        System.out.println("   Autor " + this.autor);//acrescenta ao metodo original
    }
}
