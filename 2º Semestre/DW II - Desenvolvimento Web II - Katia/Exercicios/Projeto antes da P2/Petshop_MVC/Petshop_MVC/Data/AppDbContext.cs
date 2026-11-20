using Microsoft.EntityFrameworkCore;
using Petshop_MVC.Models;

namespace Petshop_MVC.Data
{
    public class AppDbContext : DbContext
    {
        public AppDbContext(DbContextOptions options) : base(options)
        {
        }
        public DbSet<Cliente> Clientes { get; set; }
        public DbSet<Pet> Pets { get; set; }
        public DbSet<Usuario> Usuarios { get; set; }//criamos aqui para funcionar la no UsuariosController.cs

    }
}
