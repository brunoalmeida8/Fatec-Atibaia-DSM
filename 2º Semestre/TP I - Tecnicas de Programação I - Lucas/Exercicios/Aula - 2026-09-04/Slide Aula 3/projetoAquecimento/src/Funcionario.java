public class Funcionario {
    private String nome;
    private String cargo;
    private double salario;

    //Construtor
    public Funcionario(String nome, String cargo, double salario) {
        this.nome = nome;
        this.cargo = cargo;
        this.salario = salario;
    }

    //getters e setters
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCargo() {
        return cargo;
    }

    public void setCargo(String cargo) {
        this.cargo = cargo;
    }

    public double getSalario(){
        return this.salario;
    }

    public void setSalario(double salario){
        this.salario = salario;
    }

    //Metodos
    public void exibirDados(){
        System.out.println("Nome: " + this.nome + "\nCargo: " + cargo +//tanto faz this ou nao
                "\nSalario: R$" + this.salario + "0");

        /*
            ou
            System.out.println("Nome: " + this.nome);
            System.out.println("Cargo: " + cargo);//tanto faz this ou nao
            System.out.println("Salario: R$" + this.salario);
        */
    }

    public double aumentarSalario(double percentual){
        this.salario = this.salario * (1 + (percentual/100));
        return this.salario;
    }


}




