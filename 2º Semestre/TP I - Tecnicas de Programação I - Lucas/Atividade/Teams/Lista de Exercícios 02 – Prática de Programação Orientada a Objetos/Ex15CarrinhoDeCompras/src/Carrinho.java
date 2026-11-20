import java.util.ArrayList;
import java.util.List;

public class Carrinho {
    //atributos
    private static final double VALOR_FRETE = 25.00;
    private static final double MINIMO_FRETE_GRATIS = 200.00;
    private List<ItemCarrinho> itens;

    //construtores
    public Carrinho() {
        this.itens = new ArrayList<>();
    }

    //get e setters
    public List<ItemCarrinho> getItens() {
        return itens;
    }

    //metodos
    public void adicionar(ItemCarrinho item) {
        if (item == null || item.getQuantidade() <= 0) {
            System.out.println("Item recusado: quantidade inválida.");
            return;
        }
        itens.add(item);
    }

    public double calcularSubtotal() {
        double subtotal = 0.0;
        for (ItemCarrinho item : itens) {
            subtotal += item.getSubtotal();
        }
        return subtotal;
    }

    public double calcularFrete() {
        double subtotal = calcularSubtotal();
        if (itens.isEmpty() || subtotal >= MINIMO_FRETE_GRATIS) {
            return 0.0;
        }
        return VALOR_FRETE;
    }

    public double calcularTotal() {
        return calcularSubtotal() + calcularFrete();
    }

    public void exibirResumo() {
        System.out.println("=== Resumo do Carrinho ===");
        for (ItemCarrinho item : itens) {
            System.out.println(item.getQuantidade() + "x " + item.getNome() + " -> R$ " + item.getSubtotal());
        }
        System.out.println("Subtotal: R$ " + calcularSubtotal());
        System.out.println("Frete: R$ " + calcularFrete());
        System.out.println("Total: R$ " + calcularTotal());
    }
}