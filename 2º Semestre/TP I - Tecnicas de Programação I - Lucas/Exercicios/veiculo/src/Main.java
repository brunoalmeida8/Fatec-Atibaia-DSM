//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Veiculo veiculo1 = new Veiculo("moto", 2, "preto");

        //errado
        //veiculo1.tipo = "moto";
        //veiculo1.qtdRodas = 2;
        //veiculo1.cor = "preto";

        veiculo1.apresentarVeiculo();
        veiculo1.apresentarTodas();
    }
}