using Microsoft.EntityFrameworkCore;
using Petshop_MVC.Models;

namespace Petshop_MVC.Data
{
    public class AppDbContext : DbContext//herda do Pomelo
    {
        //construtor
        public AppDbContext (DbContextOptions opctions) : base(opctions) { }
        public DbSet<Cliente> Clientes { get; set; }//lista de clientes (set pois traz do BD com o objeto
        public DbSet<Pet> Pets { get; set; }//lista de pets, usa set pois puxa do BD para o objeto
    }
}
