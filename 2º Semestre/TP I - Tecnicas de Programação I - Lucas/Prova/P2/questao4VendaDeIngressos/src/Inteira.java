public class Inteira extends Ingresso {
    //atributos
    //Construtors

    public Inteira(String comprador, Evento evento) {
        super(comprador, evento);
    }


    //getters e setters
    //metodos


    @Override
    public double calcularValor() {
        return getEvento().getPrecoBase();
    }
}
