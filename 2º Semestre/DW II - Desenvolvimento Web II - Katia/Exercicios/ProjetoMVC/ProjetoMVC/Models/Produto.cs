namespace ProjetoMVC.Models
{
    public class Produto
    {
        //propriedades atalho "prop"
        public int Id { get; set; }
        public string Codigo { get; set; }
        public string Nome { get; set; }
        public string Descricao { get; set; }
        public string Categoria { get; set; }
        public decimal Preco { get; set; }
    }
}
