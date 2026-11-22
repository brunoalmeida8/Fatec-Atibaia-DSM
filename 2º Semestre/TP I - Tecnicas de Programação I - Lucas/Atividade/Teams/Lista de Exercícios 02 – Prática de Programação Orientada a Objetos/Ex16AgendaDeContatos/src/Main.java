//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Agenda a1 = new Agenda();

        a1.adicionar("Marcos", "11 91111-1111");
        a1.adicionar("Patrícia", "11 92222-2222");
        a1.adicionar("Rui", "11 93333-3333");
        a1.adicionar("marcos", "11 99999-9999");

        a1.listar();

        Contato p1 = a1.buscar("PATRÍCIA");
        if (p1 != null) {
            p1.setTelefone("11 95555-4444");
        }

        a1.remover("Rui");
        a1.remover("Sofia");

        a1.listar();
    }
}