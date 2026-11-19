public class Main {
    public static void main(String[] args) {

        Empregado ana = new Assalariado("Ana", "Silva", "111.111.111-11", 3000.0);
        Empregado bruno = new Comissionado("Bruno", "Souza", "222.222.222-22", 10000.0, 0.05);
        Empregado carla = new Horista("Carla", "Lima", "333.333.333-33", 40.0, 160.0);


        System.out.println("Vencimento de " + ana + ": " + ana.vencimento());
        System.out.println("Vencimento de " + bruno + ": " + bruno.vencimento());
        System.out.println("Vencimento de " + carla + ": " + carla.vencimento());
    }
}