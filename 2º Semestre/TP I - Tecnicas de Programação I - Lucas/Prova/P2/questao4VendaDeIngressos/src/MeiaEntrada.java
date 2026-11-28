public class MeiaEntrada extends Ingresso {
    //atributos
    //Construtors

    public MeiaEntrada(String comprador, Evento evento) {
        super(comprador, evento);
    }

    //getters e setters
    //metodos

    @Override
    public double calcularValor() {
        return getEvento().getPrecoBase() / 2;
    }
}
