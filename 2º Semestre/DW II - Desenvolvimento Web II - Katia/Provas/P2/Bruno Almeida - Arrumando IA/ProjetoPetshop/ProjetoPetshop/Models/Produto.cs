using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace ProjetoPetshop.Models
{
    [Table("produto")]
    public class Produto
    {
        [Key]
        public int Codigo { get; set; }
        public string? Nome { get; set; }
        public string? Descricao { get; set; }
        public string? Categoria { get; set; }

        [Column(TypeName = "decimal(10,2)")]
        public decimal? Preco { get; set; }

        public string? Observacoes { get; set; }
    }
}