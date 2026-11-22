public class Midia {
    //atributos
    private String titulo;
    private int duracaoMinutos;

    //construtores
    public Midia(String titulo, int duracaoMinutos) {
        this.titulo = titulo;
        this.duracaoMinutos = duracaoMinutos;
    }

    //get e setters
    public String getTitulo() {
        return titulo;
    }

    public int getDuracaoMinutos() {
        return duracaoMinutos;
    }

    //metodos
    public String getDuracaoFormatada() {
        int horas = duracaoMinutos / 60;
        int minutos = duracaoMinutos % 60;
        if (horas > 0) {
            return horas + "h " + String.format("%02d", minutos) + "min";
        }
        return minutos + "min";
    }

    public void exibirFicha() {
        System.out.println("Título: " + titulo + " | Duração: " + getDuracaoFormatada());
    }
}