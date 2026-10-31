//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Musica musica = new Musica("Garota de Ipanema", 5, "Tom Jobim");
        Podcast podcast = new Podcast("Café com Código", 65, "Larissa Prado", 42);

        musica.exibirFicha();

        podcast.exibirFicha();
    }
}