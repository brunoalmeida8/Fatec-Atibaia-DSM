public class Turma {
    //Atributos
    private String codigo;
    private String sala;
    private int horario;

    //Construtor
    public Turma(String codigo, String sala, int horario){
        this.codigo = codigo;
        this.sala = sala;
        this.horario = horario;
    }

    //Metodos de acesso publico Getters e Setters

    public String getCodigo() {
        return codigo;
    }
    public void setCodigo(String codigo){
        this.codigo = codigo;
    }

    public String getSala() {
        return sala;
    }
    public void setSala(String sala){
        this.sala = sala;
    }

    public int getHorario() {
        return horario;
    }
    public void setHorario(int horario){
        this.horario = horario;
    }

    //Metodos
    public void estaAberta(){
    System.out.println("ola");
    }
    public void incluirAluno(Aluno aluno){

    }
}
