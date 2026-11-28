public class EntregaExpressa extends EntregaPadrao {
    //atributos
    //contrutor

    public EntregaExpressa(String codigo, double pesoKg, Cliente cliente) {
        super(codigo, pesoKg, cliente);
    }

    //get e setters
    //metodos

    @Override
    public double calcularFrete() {
        return super.calcularFrete() * 2;
    }

    @Override
    public int getPrazoDias() {
        return 1;
    }
}
