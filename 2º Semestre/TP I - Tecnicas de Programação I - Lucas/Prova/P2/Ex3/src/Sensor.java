abstract class Sensor {
    private String local;

    public Sensor(String local) {
        this.local = local;
    }

    public String getLocal() {
        return local;
    }

    public abstract double ler();

    public void exibir(){
        System.out.println(local + ": " + ler());
    }
}
