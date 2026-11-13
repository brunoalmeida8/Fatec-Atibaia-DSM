//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        //instancia só com comodo pois nao tem no enunciado como os objetos devem nascer
        Lampada l1 = new Lampada("Sala");
        Lampada l2 = new Lampada("Cozinha");
        Lampada l3 = new Lampada("Quarto");
        l1.ligar();//ligou
        l2.alternar();//ligou
        l2.alternar();//desligou
        l3.ligar();//ligou
        l3.desligar();//desligou
        l3.alternar();//ligou

        l1.exibirEstado();
        l2.exibirEstado();
        l3.exibirEstado();
    }
}