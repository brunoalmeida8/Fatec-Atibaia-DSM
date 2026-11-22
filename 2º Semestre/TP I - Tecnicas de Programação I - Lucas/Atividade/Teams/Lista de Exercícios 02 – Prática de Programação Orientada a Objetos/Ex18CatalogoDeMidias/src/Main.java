//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Musica m1 = new Musica("Garota de Ipanema", 5, "Tom Jobim");
        Podcast p1 = new Podcast("Café com Código", 65, "Larissa Prado", 42);

        m1.exibirFicha();
        System.out.println();
        p1.exibirFicha();

        System.out.println();
        System.out.println("Podcast herdado -> Título: " + p1.getTitulo() + " | Duração: " + p1.getDuracaoFormatada());
    }
}