using System.ComponentModel.DataAnnotations.Schema;

namespace Petshop_MVC.Models
{
    public class Pet 
    {
        public int PetId { get; set; }
        public string ? Nome { get; set; }
        public string ? Especie { get; set; }
        public string ? Raca { get; set; }
        public DateTime DataNascimento { get; set; }
        public int ClienteId {  get; set; }
        [ForeignKey("ClienteId")]
        public Cliente ? Cliente { get; set; }
    }
}
