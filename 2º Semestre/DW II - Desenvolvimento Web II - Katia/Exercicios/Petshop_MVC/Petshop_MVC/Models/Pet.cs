using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace Petshop_MVC.Models
{
    public class Pet
    {
        [Key]
        public int PetId { get; set; }
        public string? Nome { get; set; }
        public string? Especie { get; set; }
        public string? Raca { get; set; }
        public string? DataNascimento { get; set; }
        [ForeignKey ("ClienteId")]//referencia a pk da tabela Cliente 
        public Cliente ? Cliente { get; set; }//associação do objeto cliente

    }
}
