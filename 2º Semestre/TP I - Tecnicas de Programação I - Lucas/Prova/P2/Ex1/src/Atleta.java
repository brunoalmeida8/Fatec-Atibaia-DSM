class Atleta extends Pessoa {
    private String modalidade;

    public Atleta(String nome, String modalidade) {
        super(nome);
        this.modalidade = modalidade;
        System.out.println("Atleta de " + modalidade);
    }
}
