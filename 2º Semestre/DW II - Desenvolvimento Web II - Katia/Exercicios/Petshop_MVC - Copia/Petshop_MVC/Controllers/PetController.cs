using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;
using Petshop_MVC.Data;
using Petshop_MVC.Models;

namespace Petshop_MVC.Controllers
{
    public class PetController : Controller
    {
        //esse objeto _context ele convert para comandos SQL tipo add - insert...
        private readonly AppDbContext _context;
        public PetController(AppDbContext context)
        {
            _context = context;
        }
        //traz o relacionamento... sei la na real kkk
        public async Task<IActionResult> Index()
        {
            return View(await _context.Pets.ToListAsync());
        }
        [HttpGet]//so mostra o formulario
        public IActionResult Create()
        {
            return View();
        }
        [HttpPost]//esse recebe um objeto
        public async Task<IActionResult> Create([Bind("Id, Tutor, Nome, Especie, Raca, DataNascimento")]Pet pt)
        {
            if(ModelState.IsValid)
            {
                _context.Add(pt);
                await _context.SaveChangesAsync();
                return RedirectToAction("Index");//index.cshtml da views Pet
            }
            return View();//retorna para a propria pagina 
        }
        [HttpGet]
        public async Task<IActionResult> Edit(int ? id)
        {
            if(id == null)
            {
                return NotFound();
            }
            var pet = await _context.Pets.FindAsync(id);
            if(pet == null)
            {
                return NotFound();
            }
            return View(pet);
        }
        [HttpPost]
        public async Task<IActionResult> Edit(int id, [Bind("Id, Tutor, Nome, Especie, Raca, DataNascimento")] Pet pt)
        {
            if(id != pt.Id) { return NotFound(); }
            if (ModelState.IsValid)
            {
                _context.Update(pt);
                await _context.SaveChangesAsync();
                return RedirectToAction("Index");
            }
            return View(pt);
        }
        [HttpGet]
        public async Task<IActionResult> Delete(int? id)
        {
            if (id == null) { return NotFound(); }
            var pet = await _context.Pets.FirstOrDefaultAsync(
                m => m.Id == id);
            if (pet == null) { return NotFound(); }
            return View(pet);
        }
        [HttpPost]
        public async Task<IActionResult> DeleteConfirmed(int? id)
        {
            var pet = await _context.Pets.FindAsync(id);
            if (pet != null)
            {
                _context.Pets.Remove(pet);
            }
            await _context.SaveChangesAsync();
            return RedirectToAction("Index");
        }
    }
}
