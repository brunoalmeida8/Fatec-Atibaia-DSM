public class DVD extends Item{
    //atributos
    //contrutor

    public DVD(String titulo) {
        super(titulo);
    }

    //get e set
    //metodos

    @Override
    public int getPrazoDias() {
        return 7;
    }

    @Override
    public double getMultaPorDia() {
        return 5;
    }
}
