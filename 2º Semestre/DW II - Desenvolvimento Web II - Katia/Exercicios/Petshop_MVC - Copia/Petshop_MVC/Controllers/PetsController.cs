
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.Rendering;
using Microsoft.EntityFrameworkCore;
using Petshop_MVC.Data;
using Petshop_MVC.Models;

namespace PetshopMVC.Controllers
{
    public class PetsController : Controller
    {
        private readonly AppDbContext _context;
        public PetsController(AppDbContext context)
        {
            _context = context;
        }
        [HttpGet]
        public async Task<IActionResult> Index()
        {
            var appdbcontext = _context.Pets.Include(p => p.Cliente);//relação das duas tabelas
            return View(await appdbcontext.ToListAsync());
        }
        [HttpGet]
        public IActionResult Create()
        {
            ViewData["ClienteId"] = new SelectList(_context.Clientes,
                "ClienteId", "Nome");
            return View();
        }
        [HttpPost]
        public async Task<IActionResult> Create([Bind("Id", "Nome", "Especie", 
            "Raca", "DataNascimento", "ClienteId")]Pet pet)
        {
            if(ModelState.IsValid)
            {
                _context.Pets.Add(pet);
                await _context.SaveChangesAsync();
                return RedirectToAction("Index");
            }
            ViewData["ClienteId"] = new SelectList(_context.Clientes, "ClienteId", "Nome", pet.ClienteId);
            return View(pet);
        }
        [HttpGet]
        public async Task<IActionResult> Edit(int ? id)
        {
            if(id == null) {  return NotFound(); }
            var pet = await _context.Pets.FindAsync(id);
            ViewData["ClienteId"] = new SelectList(_context.Clientes,
                "ClienteId", "Nome", pet.ClienteId);
            return View(pet);
        }
        [HttpPost]
        public async Task<IActionResult> Edit(int id, [Bind("Id", "Nome", "Especie",
            "Raca", "DataNascimento", "ClienteId")]Pet pet)
        {
            if (id != pet.Id)
            {
                try
                {
                    _context.Update(pet);
                    await _context.SaveChangesAsync();
                }
                catch (DbUpdateConcurrencyException)
                {
                    throw;
                }
                return RedirectToAction("Index");
            }
            ViewData["ClienteId"] = new SelectList(_context.Clientes,
                "ClienteId", "Nome", pet.ClienteId);
            return View(pet);
        }
    }
}