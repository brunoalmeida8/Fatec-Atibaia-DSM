import java.util.ArrayList;
import java.util.List;

public class Hotel {
    //atributos
    private String nome;
    private List<Quarto> quartos;
    private static int totalReservas = 0;

    //construtores
    public Hotel(String nome) {
        this.nome = nome;
        this.quartos = new ArrayList<>();
    }

    //get e setters
    public static int getTotalReservas() {
        return totalReservas;
    }

    //metodos
    public void adicionarQuarto(Quarto q) {
        quartos.add(q);
    }

    private Quarto buscarQuarto(int numero) {
        for (Quarto q : quartos) {
            if (q.getNumero() == numero) {
                return q;
            }
        }
        return null;
    }

    public double reservar(int numero, int noites) {
        Quarto q = buscarQuarto(numero);
        if (q == null) {
            System.out.println("Reserva recusada: quarto " + numero + " inexistente.");
            return -1;
        }
        if (q.isOcupado()) {
            System.out.println("Reserva recusada: quarto " + numero + " já está ocupado.");
            return -1;
        }
        if (noites <= 0) {
            System.out.println("Reserva recusada: quantidade de noites inválida.");
            return -1;
        }

        q.ocupar();
        totalReservas++;
        double valor = q.calcularHospedagem(noites);
        System.out.println("Quarto " + q.getNumero() + " (" + q.getCategoria() + ") reservado por " + noites + " noite(s) -> R$ " + valor);
        return valor;
    }

    public double reservar(int numero) {
        return reservar(numero, 1);
    }

    public void liberar(int numero) {
        Quarto q = buscarQuarto(numero);
        if (q != null) {
            q.liberar();
            System.out.println("Quarto " + numero + " liberado.");
        } else {
            System.out.println("Quarto " + numero + " não encontrado para liberação.");
        }
    }

    public void listarDisponiveis() {
        System.out.println("=== Quartos disponíveis (" + nome + ") ===");
        boolean encontrou = false;
        for (Quarto q : quartos) {
            if (!q.isOcupado()) {
                System.out.println("- Quarto " + q.getNumero() + " [" + q.getCategoria() + "] | Diária: R$ " + q.getDiaria());
                encontrou = true;
            }
        }
        if (!encontrou) {
            System.out.println("nenhum");
        }
    }
}