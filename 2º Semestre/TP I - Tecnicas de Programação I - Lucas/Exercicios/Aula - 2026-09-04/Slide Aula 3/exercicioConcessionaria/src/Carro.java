public class Carro {
    //Atributos
    private String marca;
    private String modelo;
    private int ano;
    private double preco;

    //Constructs
    public Carro(String marca, String modelo, int ano, double preco){
        this.marca = marca;
        this.modelo = modelo;
        this.ano = ano;
        this.preco = preco;
    }

    public Carro (String marca, String modelo){
        this.marca = marca;
        this.modelo = modelo;
        this.ano = 2026;
        this.preco = 0;
    }


    //Metodos Get / Set

    //Metodos
    //exibir informações do veiculo
    public void exibirCarro(){
        System.out.println("========================");
        System.out.println("Infomações do veiculo:");
        System.out.println("Marca: " + this.marca);
        System.out.println("Modelo: " + this.modelo);
        System.out.println("Ano: " + this.ano);
        System.out.println("Preco: R$" + this.preco + "0");
    }

}
