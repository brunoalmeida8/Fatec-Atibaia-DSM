public abstract class Entrega {
    //atributos
    private  String codigo;
    double pesoKg;
    Cliente cliente;

    //contrutor

    public Entrega(String codigo, double pesoKg, Cliente cliente) {
        this.codigo = codigo;
        this.pesoKg = pesoKg;
        this.cliente = cliente;
    }

    //get e setters
    public String getCodigo() {
        return codigo;
    }
    public double getPesoKg() {
        return pesoKg;
    }
    public Cliente getCliente() {
        return cliente;
    }

    //metodos
    public abstract double calcularFrete();
    public abstract int getPrazoDias();

    public double calcularTotal(double valorProdutos){
        return valorProdutos + calcularFrete();
    }
    public double calcularTotal(double valorProdutos, double cupom) {

        return calcularTotal(valorProdutos) - cupom;
    }

    public void exibir(){
        System.out.println(this.codigo + " | " + cliente.getNome() + " ("
        + cliente.getCidade() + ") | frete R$ " + calcularFrete()
        + " | prazo " + getPrazoDias() + " dia(s)");
    }

}
