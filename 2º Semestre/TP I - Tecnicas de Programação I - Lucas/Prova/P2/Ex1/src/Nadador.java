class Nadador extends Atleta {
    private int provas;

    public Nadador(String nome, int provas) {
        super(nome, "natacão");
        this.provas = provas;
        System.out.println(getNome() + " nada " + provas + " provas");
    }
}
