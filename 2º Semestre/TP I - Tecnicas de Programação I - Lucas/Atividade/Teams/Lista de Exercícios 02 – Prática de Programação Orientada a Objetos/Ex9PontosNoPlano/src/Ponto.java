public class Ponto {
    //atributos
    private double x;
    private double y;

    //contrutores

    public Ponto() {
        this(0,0);
    }
    public Ponto(double x, double y) {
        this.x = x;
        this.y = y;
    }

    //get e set
    public double getX() {
        return x;
    }
    public double getY() {
        return y;
    }

    //metodos
    public double distancia(double outroX, double outroY){
        double dx = this.x - outroX;
        double dy = this.y - outroY;
        //Fórmula: raiz quadrada de (dx² + dy²). Use Math.sqrt.
        return Math.sqrt((dx * dx) + (dy * dy));
        //return Math.sqrt(Math.pow(dx, 2) + Math.pow(dy, 2)); //ou assim .. o Math.pow é potencia entao é dx^2
    }
    public double distancia(Ponto outro){
        //return outro.distancia(this.x , this.y);
        return this.distancia(outro.x, outro.y); //assim faz a distancia desse em comparação com o outro q veio no parametro
    }

    public void mover(double deslocX, double deslocY){
        this.x += deslocX;
        this.y += deslocY;
    }

    public String descrever(){
        return String.format("(%.1f; %.1f)", getX(), getY());
    }
}
