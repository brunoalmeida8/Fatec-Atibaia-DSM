using System.ComponentModel.DataAnnotations;//adicionado com a lampadazinha no [key]

namespace Petshop_MVC.Models
{
    public class Usuario
    {
        [Key]//tem o using la em cima
        public int UsuarioId { get; set; }
        public string ? Nome { get; set; }// o "?" pode ser nulo e tira o erro da cobrinha verde (avido)
        public string ? Email { get; set; }
        public string ? Senha { get; set; }
    }
}
