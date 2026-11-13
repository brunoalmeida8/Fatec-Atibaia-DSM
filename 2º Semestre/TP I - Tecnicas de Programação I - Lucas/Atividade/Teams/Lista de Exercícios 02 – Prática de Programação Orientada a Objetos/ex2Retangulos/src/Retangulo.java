public class Retangulo {

    //atributos
    double base;
    double altura;
    //construtor

    public Retangulo(double base, double altura) {
        this.base = base;
        this.altura = altura;
    }


    //getters e setters
    //nao tem no diagrama

    //metodos
    double calcularArea(){
        return this.base * this.altura;
    }
    double calcularPerimetro(){
        return (this.base * 2) + (this.altura * 2);
    }
    boolean ehQuadrado(){
        /*if (this.base == this.altura) {
            return true;
        } else {
            return false;
        }*/
        return this.base == this.altura;//jeito mais simplificado dica do IntelliJ
    }
    void exibir(){
/*         String ehQuadrado;
        if (this.ehQuadrado()){
            ehQuadrado = "sim";
        } else {
            ehQuadrado = "não";
        }*/
        //assim é mais reduzido
        String ehQuadrado = (ehQuadrado()) ? "sim" : "não";

        System.out.println("Base: " + this.base);
        System.out.println("Altura: " + this.altura);
        System.out.println("Área: " + this.calcularArea());
        System.out.println("Perímetro: " + this.calcularPerimetro());
    }


}
