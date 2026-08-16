

public class Main {
    public static void main(String[] args) {

        Calculo calculo1 = new Calculo(7, 8, "Epaminondas");
        calculo1.separar();//só da para chamar o metodo se mencionar algum objeto?

        calculo1.calcularMedia();
        calculo1.apresentarMedia();
        calculo1.avaliarAprovacao();

        calculo1.separar();

        Calculo calculo2 = new Calculo(5, 6, "Jaiminho");

        calculo2.calcularMedia();
        calculo2.apresentarMedia();
        calculo2.avaliarAprovacao();

        calculo2.separar();
    }
}