public class Monitor extends Aluno {
    //atributos
    private int horasSemana;

    //construtores
    public Monitor(String nome, double nota1, double nota2, int horasSemana) {
        super(nome, nota1, nota2);
        this.horasSemana = horasSemana;
    }

    //get e setters

    //metodos
    @Override
    public double calcularMedia() {
        return super.calcularMedia() + 0.5;
    }

    @Override
    public String getPapel() {
        return "Monitor (" + horasSemana + " h por semana)";
    }
}