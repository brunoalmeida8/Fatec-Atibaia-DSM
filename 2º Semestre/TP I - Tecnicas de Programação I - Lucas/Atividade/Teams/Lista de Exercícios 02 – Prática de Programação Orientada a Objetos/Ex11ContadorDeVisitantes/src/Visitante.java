public class Visitante {
    //atributos
    private String nome;
    private int numeroDaVisita;
    private static int totalVisitantes = 0;

    //construtores
    public Visitante(String nome) {
        this.nome = nome;
        totalVisitantes++;
        this.numeroDaVisita = totalVisitantes;
    }

    //get e setters
    public String getNome() {
        return nome;
    }

    public int getNumeroDaVisita() {
        return numeroDaVisita;
    }

    public static int getTotalVisitantes() {
        return totalVisitantes;
    }

    //metodos
    public void apresentar() {
        System.out.println(nome + " foi o visitante número " + numeroDaVisita);
    }
}