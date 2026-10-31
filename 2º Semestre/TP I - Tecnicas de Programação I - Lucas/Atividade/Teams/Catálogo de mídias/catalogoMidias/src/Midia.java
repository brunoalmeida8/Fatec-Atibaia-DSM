public class Midia {
    //atributos
    private String titulo;
    private int duracaoMinutos;

    //construtor
    public Midia(String titulo, int duracaoMinutos) {
        this.titulo = titulo;
        this.duracaoMinutos = duracaoMinutos;
    }

    //get e set
    public String getTitulo() {
        return titulo;
    }
    public int getDuracaoMinutos() {
        return duracaoMinutos;
    }


    //metodos
    public String getDuracaoFormatada(){
        if (this.duracaoMinutos >= 60){
            int horas = getDuracaoMinutos() / 60;
            int minutos = getDuracaoMinutos() % 60;//resto da divisao por 60
            return horas + "h " + (minutos < 10 ? "0" + minutos : minutos) + "min";
        }
        else {
            return getDuracaoMinutos() + "min";
        }
    }
    public void exibirFicha(){
        System.out.println("\n===== Exibindo Ficha =====");
        System.out.println("Titulo: " + getTitulo());
        System.out.println("Duração: " + getDuracaoFormatada());
    }
}
