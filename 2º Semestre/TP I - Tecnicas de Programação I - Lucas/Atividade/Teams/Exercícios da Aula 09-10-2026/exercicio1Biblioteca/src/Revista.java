public class Revista extends Item{
    //atributos
    private int edicao;
    //construtor

    public Revista(String titulo, int ano, int edicao) {
        super(titulo, ano);
        this.edicao = edicao;
    }

    //getters e setters
    public int getEdicao() {
        return edicao;
    }
    public void setEdicao(int edicao) {
        this.edicao = edicao;
    }

    //metodos
    @Override
    public void exibirDetalhes(){
        super.exibirDetalhes();
        System.out.println("   Edição: " + this.edicao);
    }
}
