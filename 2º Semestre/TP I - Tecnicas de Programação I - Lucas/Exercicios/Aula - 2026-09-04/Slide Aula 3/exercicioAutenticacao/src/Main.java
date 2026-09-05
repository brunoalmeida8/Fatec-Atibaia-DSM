//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Usuario adm = new Usuario("user.adm@hotmail.com", "12345678");
        Usuario  convidado = new Usuario("user.convidado@gmail.com");

        adm.exibirUsuario();
        convidado.exibirUsuario();

    }
}