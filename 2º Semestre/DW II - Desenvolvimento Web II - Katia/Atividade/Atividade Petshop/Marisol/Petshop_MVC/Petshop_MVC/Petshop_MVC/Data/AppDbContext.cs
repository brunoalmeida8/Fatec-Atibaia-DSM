using Microsoft.EntityFrameworkCore;
using Petshop_MVC.Models;

namespace Petshop_MVC.Dara
{
    public class AppDbContext : DbContext
    {
        public AppDbContext(DbContextOptions options) : base(options)
        {
        }
        public DbSet<Cliente> Clientes { get; set; }
        public DbSet<Pet> Pets { get; set; }

        internal void Update(object pt)
        {
            throw new NotImplementedException();
        }
    }
}
