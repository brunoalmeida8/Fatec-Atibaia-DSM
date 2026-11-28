public class EntregaPadrao extends Entrega {
    //atributos
    //contrutor

    public EntregaPadrao(String codigo, double pesoKg, Cliente cliente) {
        super(codigo, pesoKg, cliente);
    }

    //get e setters
    //metodos

    @Override
    public double calcularFrete() {
        double frete = 0;
        if (this.pesoKg < 5){
            frete = 12.00;
        } else {
            frete = 12.00 + 3*(pesoKg - 5);
        }
        return frete;
    }

    @Override
    public int getPrazoDias() {
        return 5;
    }
}
