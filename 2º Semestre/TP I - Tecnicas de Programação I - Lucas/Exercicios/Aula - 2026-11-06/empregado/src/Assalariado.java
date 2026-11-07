public class Assalariado extends Empregado{
    //atributos
    private double salario;
    //construtor

    public Assalariado(String nome, String sobrenome, String cpf, double salario) {
        super(nome, sobrenome, cpf);
        this.salario = salario;
    }

    //get e set
    public double getSalario() {
        return salario;
    }
    public void setSalario(double salario) {
        this.salario = salario;
    }

    //metodos
    @Override
    public double vencimento(){
        super.vencimento();
        return 0;
    }
}
