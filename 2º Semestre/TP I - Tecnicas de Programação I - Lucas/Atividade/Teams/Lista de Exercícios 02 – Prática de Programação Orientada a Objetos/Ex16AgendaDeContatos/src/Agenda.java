import java.util.ArrayList;
import java.util.List;

public class Agenda {
    //atributos
    private List<Contato> contatos;

    //construtores
    public Agenda() {
        this.contatos = new ArrayList<>();
    }

    //get e setters

    //metodos
    public Contato buscar(String nome) {
        for (Contato c : contatos) {
            if (c.getNome().equalsIgnoreCase(nome)) {
                return c;
            }
        }
        return null;
    }

    public boolean adicionar(String nome, String telefone) {
        if (buscar(nome) != null) {
            System.out.println("Contato já cadastrado: " + nome);
            return false;
        }
        contatos.add(new Contato(nome, telefone));
        return true;
    }

    public boolean remover(String nome) {
        Contato c = buscar(nome);
        if (c == null) {
            System.out.println("Contato não encontrado para remoção: " + nome);
            return false;
        }
        contatos.remove(c);
        return true;
    }

    public void listar() {
        System.out.println("=== Agenda (" + contatos.size() + " contato(s)) ===");
        for (Contato c : contatos) {
            System.out.println("- " + c.getNome() + ": " + c.getTelefone());
        }
    }
}