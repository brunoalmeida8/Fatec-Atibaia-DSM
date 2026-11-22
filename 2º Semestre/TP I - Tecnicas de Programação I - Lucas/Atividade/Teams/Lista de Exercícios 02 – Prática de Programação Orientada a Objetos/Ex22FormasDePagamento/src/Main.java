//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Pagamento> lista = new ArrayList<>();

        Pix p1 = new Pix(200.0);
        Boleto b1 = new Boleto(200.0);
        CartaoCredito c1 = new CartaoCredito(200.0, 3);
        CartaoCredito c2 = new CartaoCredito(200.0, 10);

        lista.add(p1);
        lista.add(b1);
        lista.add(c1);
        lista.add(c2);

        double totalRecebido = 0.0;
        for (Pagamento pg : lista) {
            double valorFinal = pg.calcularValorFinal();
            totalRecebido += valorFinal;
            System.out.println(pg.getDescricao() + " | Original: R$ " + pg.getValor() + " | Final: R$ " + valorFinal);
        }

        System.out.println("Total recebido: R$ " + totalRecebido);
        System.out.println("Valor da parcela (10x): R$ " + c2.getValorParcela());
    }
}