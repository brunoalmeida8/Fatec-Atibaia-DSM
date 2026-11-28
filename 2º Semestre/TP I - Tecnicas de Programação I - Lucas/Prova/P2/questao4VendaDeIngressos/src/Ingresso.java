abstract class Ingresso {
    //atributos
    private String comprador;
    private Evento evento;

    //Construtors

    public Ingresso(String comprador, Evento evento) {
        this.comprador = comprador;
        this.evento = evento;
    }

    //getters e setters
    public String getComprador() {
        return comprador;
    }
    public Evento getEvento() {
        return evento;
    }

    //metodos
    public abstract double calcularValor();

    public void exibir(){
        System.out.println(this.comprador + " | " + this.evento.getNome() + " | R$ " + calcularValor());
    }

}
