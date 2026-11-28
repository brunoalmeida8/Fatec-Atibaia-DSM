//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Cliente c1 = new Cliente("Marina", "Bragança Paulista");
        Entrega e1 = new EntregaPadrao("E1", 3, c1);// eu colocaria espaço (" E1"), pois a saida esperada esta afastada la, mas nao precisa
        Entrega e2 = new EntregaPadrao("E2", 8, c1);
        Entrega e3 = new EntregaExpressa("E3", 8, c1);
        Entrega e4 = new RetiradaNaLoja("E4", 8, c1);

        e1.exibir();
        e2.exibir();
        e3.exibir();
        e4.exibir();

        System.out.println("Total " + e2.getCodigo() + " (produtos R$ 150.0): R$ " + e2.calcularTotal(150));
        System.out.println("Total " + e3.getCodigo() + " (produtos R$ 150.0, cupom R$ 20.0): R$ " + e3.calcularTotal(150, 20));

    }
}