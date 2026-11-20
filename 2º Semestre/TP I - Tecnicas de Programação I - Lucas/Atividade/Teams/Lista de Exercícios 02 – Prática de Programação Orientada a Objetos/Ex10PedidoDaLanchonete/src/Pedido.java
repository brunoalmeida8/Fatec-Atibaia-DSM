public class Pedido {
    //atributos
    private int numero;
    private String cliente;
    private double total;
    private int quantidadeItens;

    //construtores
    public Pedido(int numero, String cliente) {
        this.numero = numero;
        this.cliente = cliente;
        this.total = 0.0;
        this.quantidadeItens = 0;
    }

    //get e setters
    public int getNumero() {
        return numero;
    }

    public String getCliente() {
        return cliente;
    }

    public double getTotal() {
        return total;
    }

    public int getQuantidadeItens() {
        return quantidadeItens;
    }

    //metodos
    public void adicionarItem(String nome, double precoUnitario, int quantidade) {
        if (quantidade <= 0 || precoUnitario <= 0) {
            System.out.println("Item recusado: " + nome);
            return;
        }
        double subtotal = precoUnitario * quantidade;
        total += subtotal;
        quantidadeItens += quantidade;
        System.out.println("Adicionado: " + quantidade + "x " + nome + " (R$ " + subtotal + ")");
    }

    public void adicionarItem(String nome, double precoUnitario) {
        adicionarItem(nome, precoUnitario, 1);
    }

    public void fechar() {
        System.out.println("=== Pedido #" + numero + " ===");
        System.out.println("Cliente: " + cliente);
        System.out.println("Quantidade de itens: " + quantidadeItens);
        System.out.println("Total: R$ " + total);
    }
}