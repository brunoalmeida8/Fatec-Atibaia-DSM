class Termometro extends Sensor {
    public Termometro(String local) {
        super(local);
    }

    @Override
    public double ler() {
        return 23.5;
    }
}
