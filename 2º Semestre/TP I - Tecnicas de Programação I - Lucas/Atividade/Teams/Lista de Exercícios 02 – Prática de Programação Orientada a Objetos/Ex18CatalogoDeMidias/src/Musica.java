public class Musica extends Midia {
    //atributos
    private String artista;

    //construtores
    public Musica(String titulo, int duracaoMinutos, String artista) {
        super(titulo, duracaoMinutos);
        this.artista = artista;
    }

    //get e setters

    //metodos
    @Override
    public void exibirFicha() {
        super.exibirFicha();
        System.out.println("Artista: " + artista);
    }
}