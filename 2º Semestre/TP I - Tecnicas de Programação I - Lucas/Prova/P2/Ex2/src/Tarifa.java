class Tarifa {
    public double calcular(int minutos){
        return minutos * 0.5;
    }
    public double calcular(int minutos, double desconto){
        return calcular(minutos) - desconto;
    }
}
