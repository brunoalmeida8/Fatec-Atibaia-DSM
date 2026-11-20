import java.util.ArrayList;
import java.util.List;

public class Turma {
    //atributos
    private String codigo;
    private List<Estudante> estudantes;

    //construtores
    public Turma(String codigo) {
        this.codigo = codigo;
        this.estudantes = new ArrayList<>();
    }

    //get e setters
    public String getCodigo() {
        return codigo;
    }

    public List<Estudante> getEstudantes() {
        return estudantes;
    }

    //metodos
    public void adicionar(Estudante e) {
        estudantes.add(e);
    }

    public double calcularMedia() {
        if (estudantes.isEmpty()) {
            return 0.0;
        }
        double soma = 0.0;
        for (Estudante e : estudantes) {
            soma += e.getNota();
        }
        return soma / estudantes.size();
    }

    public Estudante buscarMaiorNota() {
        if (estudantes.isEmpty()) {
            return null;
        }
        Estudante maior = estudantes.get(0);
        for (Estudante e : estudantes) {
            if (e.getNota() > maior.getNota()) {
                maior = e;
            }
        }
        return maior;
    }

    public int contarAprovados(double notaMinima) {
        int contador = 0;
        for (Estudante e : estudantes) {
            if (e.getNota() >= notaMinima) {
                contador++;
            }
        }
        return contador;
    }

    public void exibirRelatorio() {
        System.out.println("=== Relatório da Turma " + codigo + " ===");
        for (Estudante e : estudantes) {
            System.out.println("- " + e.getNome() + ": " + e.getNota());
        }
        System.out.println("Média geral: " + calcularMedia());

        Estudante maior = buscarMaiorNota();
        if (maior != null) {
            System.out.println("Maior nota: " + maior.getNome() + " (" + maior.getNota() + ")");
        } else {
            System.out.println("Maior nota: nenhum");
        }

        System.out.println("Aprovados (nota >= 6.0): " + contarAprovados(6.0));
    }
}