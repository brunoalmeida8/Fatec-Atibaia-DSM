//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Pratos p1 = new Pratos("Arroz", 10, 51, "P");
        Pratos p2 = new Pratos("Arroz", 12, 1, "P");
        Pratos p3 = new Pratos("Arroz", 12, 1, "P");

    /* passando o valor manualmente e depois apresentando um outro valor passado manualmente
        System.out.println(p1.valorPrato(12,20));
        System.out.println(p1.apresentarValor(501));
    */
    /* apresentando o valor passando o metodo de calcular valorPrato
        System.out.println(p1.apresentarValor(p1.valorPrato(10,100)));
    */

    // apresentando passando o valor do proprio objeto instanciado
        System.out.println(p1.apresentarValor(p1.valorPrato(p1.getValor(), p1.getUnidade())));

    }
}