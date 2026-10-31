public class Musica  extends Midia{
    //atributos
    private String artista;

    //construtor

    public Musica(String titulo, int duracaoMinutos, String artista) {
        super(titulo, duracaoMinutos);
        this.artista = artista;
    }

    //get e set
    //metodos

    @Override
    public void exibirFicha() {
        super.exibirFicha();
        System.out.println("Artista: " + this.artista);
    }
}
