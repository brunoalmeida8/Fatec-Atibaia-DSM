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
        String ehQuadrado = (ehQuadrado()) ? "sim" : "não";//assim é mais reduzido

        System.out.println("\n======= Exibindo Retangulo =======");;
        System.out.println("Base: " + String.format("%.2f", this.base));
        System.out.printf("Altura: %.2f\n", this.altura);
        System.out.printf("Área: %.2f\n", this.calcularArea());
        System.out.println("Perímetro: " + String.format("%.2f", this.calcularPerimetro()));
        System.out.println("É quadrado: " + ehQuadrado);
    }


}
