public class RetiradaNaLoja extends Entrega {
    //atributos
    //contrutor

    public RetiradaNaLoja(String codigo, double pesoKg, Cliente cliente) {
        super(codigo, pesoKg, cliente);
    }

    //get e setters
    //metodos

    @Override
    public double calcularFrete() {
        return 0;
    }

    @Override
    public int getPrazoDias() {
        return 2;
    }
}
