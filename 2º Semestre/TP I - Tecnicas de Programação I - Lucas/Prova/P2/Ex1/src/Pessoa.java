class Pessoa {
    private String nome;

    public Pessoa(String nome) {
        this.nome = nome;
        System.out.println("Pessoa criada: " + nome);
    }

    public String getNome() {
        return nome;
    }
}
