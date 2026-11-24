
using Microsoft.AspNetCore.Mvc;
using ProjetoPetshop.Data;
using ProjetoPetshop.Models;

namespace ProjetoPetshop.Controllers
{
    public class DashboardController : Controller
    {
        private readonly AppDbContext _context;
        public DashboardController(AppDbContext context)
        {
            _context = context;
        }

        public ActionResult Index()
        {
            

            return View();

        }
    }
}
