public class Lampada {
    //atributos
    String comodo;
    boolean ligada;

    //construtor
    public Lampada(String comodo, boolean ligada) {
        this.comodo = comodo;
        this.ligada = ligada;
    }

        //sobrecarga pois tu nao disse se é para instanciar como false ou true


    public Lampada(String comodo) {
        this.comodo = comodo;
    }

    //getters e setters
        //nao tem no diagrama
    //metodos
    void ligar(){
        this.ligada = true;
    }
    void desligar(){
        this.ligada = false;
    }
    void alternar(){
        if (this.ligada == true){
            this.ligada = false;
        } else {
            this.ligada = true;
        }
    }
    void exibirEstado(){
        String status = (this.ligada) ? "ligada" : "desligada"; //if ligada == true
        System.out.println(this.comodo + ": lâmpada " + status);
    }
}
