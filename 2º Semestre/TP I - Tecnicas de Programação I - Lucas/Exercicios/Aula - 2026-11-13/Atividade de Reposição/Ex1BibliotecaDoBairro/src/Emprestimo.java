public class Emprestimo {
    //atributos
    private Usuario usuario;
    private Item item;

    //construtores

    public Emprestimo(Usuario usuario, Item item) {
        this.usuario = usuario;
        this.item = item;
    }

    //get e setters
    //metodos

    public void mostrar(){
        System.out.println(usuario.getNome() + " levou " + item.getTitulo());
    }
    public double calcularMulta(int diasAtraso){
        return item.calcularMulta(diasAtraso);
    }

}
