public class Podcast extends Midia {
    //atributos
    private String apresentador;
    private int episodio;

    //construtores
    public Podcast(String titulo, int duracaoMinutos, String apresentador, int episodio) {
        super(titulo, duracaoMinutos);
        this.apresentador = apresentador;
        this.episodio = episodio;
    }

    //get e setters

    //metodos
    @Override
    public void exibirFicha() {
        super.exibirFicha();
        System.out.println("Apresentador: " + apresentador + " | Episódio: " + episodio);
    }
}