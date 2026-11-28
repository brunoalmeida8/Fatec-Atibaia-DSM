public class Camarote extends Ingresso {
    //atributos
    private double taxaServico;

    //Construtors com sobrecarga


    public Camarote(String comprador, Evento evento) {
        //super(comprador, evento); vc é burro ou oque? não é assim kkkkk
        //this.taxaServico = 50.0; o mesmo vale aqui, não é assim kk
        this(comprador, evento, 50.0);
    }

    public Camarote(String comprador, Evento evento, double taxaServico) {
        super(comprador, evento);
        this.taxaServico = taxaServico;
    }

    //getters e setters
    //metodos


    @Override
    public double calcularValor() {
        return (getEvento().getPrecoBase() * 2) + this.taxaServico;
    }
}
