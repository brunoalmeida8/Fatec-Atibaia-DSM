import java.util.ArrayList;
import java.util.List;

public class Transportadora {
    //atributos

    //construtores
    public Transportadora() {
    }

    //get e setters

    //metodos
    public static Entrega escolherMaisBarata(List<Entrega> opcoes) {
        Entrega melhor = null;
        for (Entrega e : opcoes) {
            if (e.podeRealizar()) {
                if (melhor == null || e.calcularCusto() < melhor.calcularCusto()) {
                    melhor = e;
                }
            }
        }
        return melhor;
    }

    public static void simular(double km, double kg) {
        List<Entrega> opcoes = new ArrayList<>();
        opcoes.add(new Entrega(km, kg));
        opcoes.add(new EntregaMoto(km, kg));
        opcoes.add(new EntregaCaminhao(km, kg));
        opcoes.add(new EntregaDrone(km, kg));

        System.out.println("=== Simulação: " + kg + " kg | " + km + " km ===");
        for (Entrega e : opcoes) {
            if (e.podeRealizar()) {
                System.out.println("- " + e.getTipo() + ": R$ " + e.calcularCusto());
            } else {
                System.out.println("- " + e.getTipo() + ": indisponível");
            }
        }

        Entrega escolhida = escolherMaisBarata(opcoes);
        if (escolhida != null) {
            System.out.println("Escolhida: " + escolhida.getTipo() + " (R$ " + escolhida.calcularCusto() + ")");
        } else {
            System.out.println("Escolhida: nenhuma opção disponível");
        }
    }
}