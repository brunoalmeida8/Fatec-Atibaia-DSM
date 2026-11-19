public abstract class Item {
    //atributos
    private String titulo;

    //contrutor

    public Item(String titulo) {
        this.titulo = titulo;
    }

    //get e set
    public String getTitulo() {
        return titulo;
    }

    //metodos
    public abstract int getPrazoDias(); //

    public abstract double getMultaPorDia(); //

    public double calcularMulta(int diasAtraso) {
        return diasAtraso * getMultaPorDia(); //
    }

}
