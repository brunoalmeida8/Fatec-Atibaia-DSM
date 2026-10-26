using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;
using Petshop_MVC.Data;

namespace Petshop_MVC.Controllers
{
    public class ClienteController : Controller
    {
        //esse objeto _context ele convert para comandos SQL tipo add - insert...
        private readonly AppDbContext _context;
        public ClienteController(AppDbContext context)
        {
            _context = context;
        }
        //traz o relacionamento... sei la na real kkk
        public async Task<IActionResult> Index()
        {
            return View(await _context.Clientes.ToListAsync());
        }
    }
}
