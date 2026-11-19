public class Livro extends Item {
    //atributos

    //contrutor

    public Livro(String titulo) {
        super(titulo);
    }

    //get e set

    //metodos

    @Override
    public int getPrazoDias() {
        return 14;
    }

    @Override
    public double getMultaPorDia() {
        return 1;
    }
}
