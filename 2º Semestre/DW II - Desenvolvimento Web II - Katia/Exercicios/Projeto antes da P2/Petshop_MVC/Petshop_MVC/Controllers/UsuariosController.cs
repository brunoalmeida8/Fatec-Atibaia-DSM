using Microsoft.AspNetCore.Mvc;// : Controller
using Microsoft.EntityFrameworkCore;
using Petshop_MVC.Data;//AppDbContext
using Petshop_MVC.Models;//quando colou do ClienteController

namespace Petshop_MVC.Controllers
{
    public class UsuariosController : Controller
    {
        private readonly AppDbContext _context;
        public UsuariosController(AppDbContext context)//context é o que identifica a classe que esse objeto pertence 
        {
            _context = context;
        }

        //cola aqui a do cliente aqui
        public async Task<IActionResult> Index()
        {
            return View(await _context.Usuarios.ToListAsync());//nao tem o _context do Usuario entao vamo la criar no AppDbContext
        }
        [HttpGet]
        public IActionResult Create()
        {
            return View();
        }
        [HttpPost]
        //substitui para os parametros do Usuario
        public async Task<IActionResult> Create([Bind("UsuarioId, Nome," +
            "Email, Senha")] Usuario usuario)
        {
            if (ModelState.IsValid)
            {
                _context.Add(usuario);
                await _context.SaveChangesAsync();
                return RedirectToAction("Index");
            }
            return View();
        }
        [HttpGet]
        public async Task<IActionResult> Edit(int? id)
        {
            if (id == null)
            {
                return NotFound();
            }
            //a var é só uma var, nao importa ser o cliente | só precisa trocar o Usuarios do _context.Clientes
            var cliente = await _context.Usuarios.FindAsync(id);
            if (cliente == null)
            {
                return NotFound();
            }
            return View(cliente);
        }
        [HttpPost]
        //troca aqui tbm
        public async Task<IActionResult> Edit(int id, [Bind("UsuarioId," +
            "Nome, Email, Senha")] Usuario usuario)
        {
            if (id != usuario.UsuarioId) { return NotFound(); }
            if (ModelState.IsValid)
            {
                _context.Update(usuario);
                await _context.SaveChangesAsync();
                return RedirectToAction("Index");
            }
            return View(usuario);
        }
        [HttpGet]
        //trocar aqui tbm... a var nao precisa
        public async Task<IActionResult> Delete(int? id)
        {
            if (id == null) { return NotFound(); }
            var cliente = await _context.Usuarios.FirstOrDefaultAsync(
                m => m.UsuarioId == id);
            if (cliente == null) { return NotFound(); }
            return View(cliente);
        }
        [HttpPost]
        //troca aqui tbm.. e a var nao precisa mudar
        public IActionResult DeleteConfirmed(int UsuarioId)
        {
            var cliente = _context.Usuarios.Find(UsuarioId);
            if (cliente != null)
            {
                _context.Usuarios.Remove(cliente);
                _context.SaveChanges();
            }
            return RedirectToAction("Index");
        }
        //controller ta pronto.. aehh
        //bora copiar a view cliente


    }
}
