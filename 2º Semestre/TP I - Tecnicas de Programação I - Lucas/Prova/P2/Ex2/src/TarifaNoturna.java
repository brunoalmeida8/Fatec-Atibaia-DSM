class TarifaNoturna extends Tarifa {
    @Override
    public double calcular(int minutos) {
        return super.calcular(minutos) / 2;
    }
}
