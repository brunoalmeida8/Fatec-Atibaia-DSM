public class SenhaAtendimento {
    //atributos
    private static int proximaNormal = 1;
    private static int proximaPreferencial = 1;
    private String codigo;
    private boolean preferencial;

    //construtores
    public SenhaAtendimento(boolean preferencial) {
        this.preferencial = preferencial;
        if (preferencial) {
            this.codigo = "P" + String.format("%03d", proximaPreferencial);
            proximaPreferencial++;
        } else {
            this.codigo = "N" + String.format("%03d", proximaNormal);
            proximaNormal++;
        }
    }

    //get e setters
    public String getCodigo() {
        return codigo;
    }

    public boolean isPreferencial() {
        return preferencial;
    }

    public static int getTotalEmitidas() {
        return (proximaNormal - 1) + (proximaPreferencial - 1);
    }

    //metodos
}