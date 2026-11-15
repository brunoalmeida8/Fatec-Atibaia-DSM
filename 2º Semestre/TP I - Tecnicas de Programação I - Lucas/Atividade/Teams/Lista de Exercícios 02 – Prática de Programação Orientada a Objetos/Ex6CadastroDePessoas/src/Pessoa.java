public class Pessoa {
    private String nome;
    private int idade;

    public Pessoa(String nome, int idade) {
        setNome(nome);
        setIdade(idade);
    }

    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        if (nome == null || nome.trim().isEmpty()) {
            System.out.println("Erro! Nome nulo ou vazio!");
        } else {
            this.nome = nome.trim();
        }
    }
    public int getIdade() {
        return idade;
    }
    public void setIdade(int idade) {
        if (idade < 0 || idade > 130) {
            System.out.println("Idade inválida!");
        } else {
            this.idade = idade;
        }
    }

    public boolean ehMaiorDeIdade(){
        return this.idade >= 18; //o mesmo que - return (this.idade > 18)? true : false;
    }
}
