public class Usuario {
    //Atributos
    private String login;
    private String senha;
    private String status;

    //Construtores + Construtor sobrecarregado
    public Usuario(String login){
        this.login = login;
        this.senha = "mudar123";
        this.status = "Ativo";
    }

    public Usuario (String login, String senha){
        this.login = login;
        this.senha = senha;
        this.status = "Ativo";
    }


    //Metodos Get/Set

    //Metodos
    //exibindo o usuario
    public void exibirUsuario(){
        System.out.println("===============================");
        System.out.println("Exibição do Usuario Cadastrado:");
        System.out.println("Login: " + this.login);
        System.out.println("Senha: " + this.senha);
        System.out.println("Status " + this.status);
    }
}
