import java.util.ArrayList;
import java.util.List;

public class Bilheteria {
    //atributos
    private List<Ingresso> vendidos;

    //construtores
    public Bilheteria() {
        this.vendidos = new ArrayList<>();
    }

    //get e setters

    //metodos
    public void vender(Ingresso ingresso) {
        vendidos.add(ingresso);
        System.out.println("Vendido: " + ingresso);
    }

    public double totalArrecadado() {
        double total = 0.0;
        for (Ingresso i : vendidos) {
            total += i.getPreco();
        }
        return total;
    }

    public int quantidadeVendida() {
        return vendidos.size();
    }
}