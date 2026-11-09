using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace Petshop_MVC.Models
{
    [Table("clientes")]
    public class Cliente
    {
        //esse key tem que ter, e ele usa o using System.ComponentModel.DataAnnotations la em cima
        [Key] public int ClienteId { get; set; }
        public string ? Nome { get; set; }    
        public string ? Cpf { get; set; }
        public string ? Telefone { get; set; }
        public string ? Email { get; set; }
        //public ICollection<Pet> ? Pets { get; set; }//lista de Pet chamada Pets
    }
}
