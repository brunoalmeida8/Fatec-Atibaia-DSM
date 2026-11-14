//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Produto fone = new Produto("Fone de ouvido", 150);
        fone.aplicarDesconto(10);
        fone.aplicarDesconto(10);

        Produto mouse = new Produto("Mouse", 89.90);
        mouse.aplicarDesconto(70);
        mouse.aplicarDesconto(0);

        fone.exibir();
        mouse.exibir();
    }
}