public class Professor extends Pessoa {
    //atributos
    private String especialidade;

    //construtores
    public Professor(String nome, String especialidade) {
        super(nome);
        this.especialidade = especialidade;
    }

    //get e setters
    public String getEspecialidade() {
        return especialidade;
    }

    //metodos
    @Override
    public String getPapel() {
        return "Professor";
    }
}