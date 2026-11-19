//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Carro carro = new Carro("ABC-1234");
        Moto moto = new Moto("XYZ-9876");
        Caminhao caminhao = new Caminhao("KLM-0001", 4);

        System.out.println(carro);
        System.out.println(moto);
        System.out.println(caminhao);

        Cliente dani = new Cliente("Dani");
        Locadora locadora = new Locadora("Locadora");

        locadora.alugar(dani, carro, 3);
        locadora.alugar(dani, caminhao, 2);

        double valorMotoSeguro = locadora.calcularAluguel(moto, 4, true);
        System.out.println("Moto com seguro, 4 dias: R$ " + valorMotoSeguro);

        Veiculo vCaminhao = caminhao;
        if (vCaminhao instanceof Caminhao) {
            Caminhao c = (Caminhao) vCaminhao;
            System.out.println("Eixos do caminhão: " + c.getEixos());
        }
    }
}