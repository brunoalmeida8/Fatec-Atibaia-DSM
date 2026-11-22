public class NotebookGamer extends Notebook {
    //atributos
    private String placaDeVideo;

    //construtores
    public NotebookGamer(String marca, String modelo, double preco, int garantiaMeses, int memoriaRamGb, double tamanhoTela, String placaDeVideo) {
        super(marca, modelo, preco, garantiaMeses, memoriaRamGb, tamanhoTela);
        this.placaDeVideo = placaDeVideo;
    }

    //get e setters

    //metodos
    @Override
    public void exibir() {
        super.exibir();
        System.out.println("Placa de vídeo: " + placaDeVideo);
    }
}