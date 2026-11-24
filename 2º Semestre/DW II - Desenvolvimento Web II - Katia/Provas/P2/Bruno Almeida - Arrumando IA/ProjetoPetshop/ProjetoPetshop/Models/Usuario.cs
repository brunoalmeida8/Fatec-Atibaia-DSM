using System.ComponentModel.DataAnnotations;

namespace ProjetoPetshop.Models
{
    public class Usuario 
    {

        [Key]
        public int UsuarioId { get; set; }

        [Required]
        public string? Nome { get; set; }

        [Required, EmailAddress]
        public string? Email { get; set; }

        [Required]
        public string? Senha { get; set; }

    }
}
