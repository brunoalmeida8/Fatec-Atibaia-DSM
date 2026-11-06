using System.ComponentModel.DataAnnotations;

namespace Petshop_MVC.Models
{
    public class Cliente
    {
        [Key]

        public int ClienteId { get; set; }
        public string ? Nome {  get; set; }
        public string? Cpf { get; set; }
        public string ? Telefone { get; set; }
        public string? Email { get; set; }
        public ICollection<Pet> ? Pets { get; set; }
    }
}
