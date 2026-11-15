public class Relogio {
    //atributos
    private int hora;
    private int minuto;

    //construtor

    public Relogio(int hora, int minuto) {
        setHora(hora);
        setMinuto(minuto);
    }

    //get e set

    public int getHora() {
        return hora;
    }
    public void setHora(int hora) {
        if (hora >= 0 && hora <= 23){
            this.hora = hora;
        } else {
            System.out.println("Erro: Valor de hora fora da faixa (0-23)");
        }
    }
    public int getMinuto() {
        return minuto;
    }
    public void setMinuto(int minuto) {
        if (minuto >= 0 && minuto <= 59) {
            this.minuto = minuto;
        } else {
            System.out.println("Erro: Valor de minuto fora da faixa (0-59)");
        }
    }

    //metodos
    public void avancarMinuto(){
        if (getMinuto() < 59) {
            setMinuto(getMinuto() + 1);
        }else {
            setMinuto(00);
            if (getHora() < 23){
                setHora(getHora() + 1);
            } else {
                setHora(00);
            }
        }
/*        public void avancarMinuto() {
            this.minuto++; // Soma 1 minuto direto

            if (this.minuto > 59) {
                this.minuto = 0;
                this.hora++;

                if (this.hora > 23) {
                    this.hora = 0;
                }
            }
        }*/

    }
    public void exibir(){
       System.out.printf("Horario: %02d:%02d\n", getHora(), getMinuto());

    }
}
