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

        public DbSet<Cliente> Clientes { get; set; }//declaração do list, armazena clientes do tipo Cliente
    }
}
