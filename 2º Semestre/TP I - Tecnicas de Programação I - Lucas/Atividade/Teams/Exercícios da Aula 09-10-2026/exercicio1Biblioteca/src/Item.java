public class Item {
    //atributos
    protected String titulo;
    protected int ano;

    //construtor
    public Item(String titulo, int ano) {
        this.titulo = titulo;
        this.ano = ano;
    }

    //getters e setters
    public String getTitulo() {
        return titulo;
    }
    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }
    public int getAno() {
        return ano;
    }
    public void setAno(int ano) {
        this.ano = ano;
    }

    //metodos
    public void exibirDetalhes(){
        System.out.println(this.titulo + " (" + this.ano + ")");
    }
}
