using Microsoft.EntityFrameworkCore;
using Org.BouncyCastle.Crypto.Parameters;
using ProjetoMVC.Models;

namespace ProjetoMVC.Data
{
    public class AppDbContext : DbContext
    {
        public AppDbContext(DbContextOptions options) : base(options)
        {
        }

        public DbSet<Produto> Produtos { get; set; }//vetor add insere na ultima posição
        
    }
}
