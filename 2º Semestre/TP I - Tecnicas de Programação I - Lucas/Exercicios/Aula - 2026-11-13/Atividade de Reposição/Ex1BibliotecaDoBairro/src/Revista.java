public class Revista extends Item{
    //atributos

    //contrutor

    public Revista(String titulo) {
        super(titulo);
    }

    //get e set
    //metodos

    @Override
    public int getPrazoDias() {
        return 3;
    }

    @Override
    public double getMultaPorDia() {
        return 2;
    }
}
