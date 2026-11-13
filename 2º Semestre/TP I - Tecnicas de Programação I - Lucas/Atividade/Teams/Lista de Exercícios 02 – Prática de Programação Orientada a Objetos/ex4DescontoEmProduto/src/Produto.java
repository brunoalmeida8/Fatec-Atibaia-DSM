public class Produto {
    //atributos
    String nome;
    double preco;

    //construtor
    Produto(String nome, double preco){
        this.nome = nome;
        this.preco = preco;
    }

    //get e set - nao tem no enunciado
    //metodos
    boolean aplicarDesconto(double percentual){
        if (!(percentual > 0 && percentual < 50)){
            System.out.println("Percentual não permitido. (>0 e <50)");
            return false;
        } else {
            double desconto = this.preco * (percentual / 100);
            this.preco = this.preco - desconto;
            return true;
        }
    }

    void exibir(){
        System.out.println("\n===== Exibindo =====");
        System.out.println("Nome: " + this.nome + " \t Preço: R$ " + String.format("%.2f",this.preco));
    }
}
