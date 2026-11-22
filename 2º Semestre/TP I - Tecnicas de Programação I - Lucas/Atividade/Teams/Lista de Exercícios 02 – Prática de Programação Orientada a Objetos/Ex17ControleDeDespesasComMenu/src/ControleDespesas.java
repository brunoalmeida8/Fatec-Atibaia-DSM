import java.util.ArrayList;
import java.util.List;

public class ControleDespesas {
    //atributos
    private List<Despesa> despesas;

    //construtores
    public ControleDespesas() {
        this.despesas = new ArrayList<>();
    }

    //get e setters

    //metodos
    public boolean registrar(String descricao, double valor) {
        if (valor <= 0) {
            System.out.println("Despesa recusada: valor inválido.");
            return false;
        }
        despesas.add(new Despesa(descricao, valor));
        return true;
    }

    public void listar() {
        if (despesas.isEmpty()) {
            System.out.println("Nenhuma despesa registrada.");
            return;
        }
        System.out.println("=== Despesas ===");
        for (Despesa d : despesas) {
            System.out.println("- " + d.getDescricao() + ": R$ " + d.getValor());
        }
    }

    public double calcularTotal() {
        double total = 0.0;
        for (Despesa d : despesas) {
            total += d.getValor();
        }
        return total;
    }
}