using System.ComponentModel.DataAnnotations.Schema;

namespace Petshop_MVC.Models
{
    public class Pet
    {
        public int Id { get; set; }

        public String? Tutor {get; set; }
        public string? Nome { get; set; }
        public string? Especie { get; set; }
        public string? Raca { get; set; }
        public string? DataNascimento { get; set; }

      //  public int ClienteId { get; set; }
      //  [ForeignKey("ClienteId")]
        // public Cliente? Cliente { get; set; }
    }
}
