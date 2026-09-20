public class Retangulo {
    //atributos
    private double base;
    private double altura;

    //construtores
    public Retangulo(double base, double altura){
        this.base = base;
        this.altura = altura;
    }

    //metodos Get | Set
    public double getBase(){
        return this.base;
    }
    public void setBase(double base){
        this.base = base;
    }

    public double getAltura(){
        return this.altura;
    }
    public void setAltura(double altura){
        this.altura = altura;
    }

    //metodos
    public double calcularArea(){
        double area = base * altura;
        return area;
    }

    public double calcularPerimetro(){
        double perimetro = 2 * (base + altura);
        return perimetro;
    }
}
