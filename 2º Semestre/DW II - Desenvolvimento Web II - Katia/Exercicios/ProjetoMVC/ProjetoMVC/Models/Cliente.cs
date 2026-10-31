namespace ProjetoMVC.Models
{
    public class Cliente
    {
        public int Id { get; set; }
        public string ? Nome { get; set; } //? elimina erro cobrinha verde
        public string ? Cpf { get; set;}
        public string ? Telefone { get; set;}
        public string ? Endereco { get; set;}


    }
}
