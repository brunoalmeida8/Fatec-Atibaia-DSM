public class Livro {
    //atributos
    private String titulo;
    private String autor;
    private int totalPaginas;
    private int paginasLidas;

    //contrutor

    public Livro(String titulo, String autor, int totalPaginas) {
        this.titulo = titulo;
        this.autor = autor;
        this.totalPaginas = totalPaginas;
    }

    public Livro(String titulo, int totalPaginas) {
        this(titulo, "Autor desconhecido", totalPaginas);
    }
    //get e set

    //metodos
    public void ler(int paginas){
        if (this.paginasLidas + paginas > this.totalPaginas){
            System.out.println("Erro: paginas lidas ultrapassaria o limite de paginas");
        } else if (paginas <= 0) {
            System.out.println("Erro: Informa um numero de paginas maior que 0");
        } else {
            this.paginasLidas += paginas;
        }
    }
    public double getPercentualLido(){
        return (double) this.paginasLidas / this.totalPaginas * 100;
    }

    public boolean terminou(){
        return (this.paginasLidas == this.totalPaginas);
    }

    public void exibir(){
        System.out.println("\n===== EXIBIÇÂO DO LIVRO =====");
        System.out.println("Titulo: " + this.titulo);
        System.out.println("Autor: " + this.autor);
        System.out.println("Paginas Lidas: " + this.paginasLidas);
        System.out.println("Total de paginas: " + this.totalPaginas);
        System.out.println("Percentual lido: " + String.format("%.1f%%",getPercentualLido()));//ou
        //System.out.printf("Percentual lido: %.1f%%", getPercentualLido()); //ou usar isso tbm
        System.out.println("Terminou: " + (this.terminou()? "Sim": "Não"));
    }
}
