//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        //Pohhh... esse aqui foi treta kkk
        Ponto origem = new Ponto();
        Ponto a = new Ponto(3, 4);
        //System.out.println("Distancia Origem - A: " + origem.distancia(a)); //assim nao mostra os pontos origem e A
        System.out.println("Distancia de Origem " + origem.descrever() + " até A " + a.descrever() + " = " + origem.distancia(a));
        System.out.println("Distancia de A " + a.descrever() + " até (6, 8) = " + a.distancia(6, 8));
        a.mover(-3, -4);
        System.out.println("Descrevento o Ponto A: " + a.descrever());
        //System.out.println("Distancia Origem - A: " + a.distancia(origem));//assim tbm nao mostra cada ponto a ser comparado
        System.out.println("Distancia de A " + a.descrever() + " até Origem " + origem.descrever() + " = " + a.distancia(origem));

    }
}