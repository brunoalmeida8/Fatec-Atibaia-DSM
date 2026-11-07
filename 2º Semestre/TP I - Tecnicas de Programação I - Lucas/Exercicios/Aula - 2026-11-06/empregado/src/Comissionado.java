public class Comissionado extends Empregado{
    //atributos
    private double totalVenda;
    private double taxaComissao;

    //construtor

    public Comissionado(String nome, String sobrenome, String cpf, double totalVenda, double taxaComissao) {
        super(nome, sobrenome, cpf);
        this.totalVenda = totalVenda;
        this.taxaComissao = taxaComissao;
    }


    //get e set

    public double getTotalVenda() {
        return totalVenda;
    }
    public void setTotalVenda(double totalVenda) {
        this.totalVenda = totalVenda;
    }
    public double getTaxaComissao() {
        return taxaComissao;
    }
    public void setTaxaComissao(double taxaComissao) {
        this.taxaComissao = taxaComissao;
    }

    //metodos
    @Override
    public double vencimento(){
        super.vencimento();
        return 0;
    }
}
