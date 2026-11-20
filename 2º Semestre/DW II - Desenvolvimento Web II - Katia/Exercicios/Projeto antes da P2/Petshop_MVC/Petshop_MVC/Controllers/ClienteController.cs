using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;
using Petshop_MVC.Data;
using Petshop_MVC.Models;

namespace Petshop_MVC.Controllers
{
    public class ClienteController : Controller
    {
        private readonly AppDbContext _context;

        public ClienteController(AppDbContext context) {
            _context = context;
        }
        public async Task<IActionResult> Index()
        {
            return View(await _context.Clientes.ToListAsync());
        }
        [HttpGet]
        public IActionResult Create()
        {
            return View();
        }
        [HttpPost]
        public async Task<IActionResult> Create([Bind("ClienteId, Nome," +
            "Cpf, Telefone, Email")] Cliente cli)
        {
            if (ModelState.IsValid)
            {
                _context.Add(cli);
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
            var cliente = await _context.Clientes.FindAsync(id);
            if (cliente == null)
            {
                return NotFound();
            }
            return View(cliente);
        }
        [HttpPost]
        public async Task<IActionResult> Edit(int id, [Bind("ClienteId," +
            "Nome, Cpf, Telefone, Email")] Cliente cli)
        {
            if (id != cli.ClienteId) { return NotFound(); }
            if (ModelState.IsValid)
            {
                _context.Update(cli);
                await _context.SaveChangesAsync();
                return RedirectToAction("Index");
            }
            return View(cli);
        }
        [HttpGet]
        public async Task<IActionResult> Delete(int? id)
        {
            if (id == null) { return NotFound(); }
            var cliente = await _context.Clientes.FirstOrDefaultAsync(
                m => m.ClienteId == id);
            if (cliente == null) { return NotFound(); }
            return View(cliente);
        }
        [HttpPost]
        public IActionResult DeleteConfirmed(int ClienteId)
        {
            var cliente = _context.Clientes.Find(ClienteId);
            if (cliente != null)
            {
                _context.Clientes.Remove(cliente);
                _context.SaveChanges();
            }            
            return RedirectToAction("Index");
        }
    }
}
