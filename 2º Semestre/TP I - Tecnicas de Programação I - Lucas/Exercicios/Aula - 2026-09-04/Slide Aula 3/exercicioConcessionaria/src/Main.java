//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Carro meuCarro = new Carro("VolksWagen", "Fusca");
        Carro outroCarro = new Carro("Chevrolet", "Prisma", 2012, 28990);

        meuCarro.exibirCarro();
        outroCarro.exibirCarro();
    }
}