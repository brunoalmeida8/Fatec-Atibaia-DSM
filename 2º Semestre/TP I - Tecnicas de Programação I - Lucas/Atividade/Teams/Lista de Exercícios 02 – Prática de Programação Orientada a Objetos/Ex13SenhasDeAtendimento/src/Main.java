//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        boolean[] chegadas = {false, false, true, false, true};

        for (boolean pref : chegadas) {
            SenhaAtendimento senha = new SenhaAtendimento(pref);
            System.out.println("Senha emitida: " + senha.getCodigo());
        }

        System.out.println("Total de senhas emitidas: " + SenhaAtendimento.getTotalEmitidas());
    }
}