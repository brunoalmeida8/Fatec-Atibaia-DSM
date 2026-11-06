using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;
using Petshop_MVC.Dara;
using Petshop_MVC.Models;

namespace Petshop_MVC.Controllers
{
    public class PetController : Controller
    {
        private readonly AppDbContext _context;

        public PetController(AppDbContext context)
        {
            _context = context;
        }
        public async Task<IActionResult> Index()
        {
            return View(await _context.Pets.ToListAsync());
        }
        [HttpGet]
        public IActionResult Create()
        {
            return View();
        }
        [HttpPost]
        public async Task<IActionResult> Create([Bind("Id, Tutor, Nome, Especie, Raca, DataNascimento")] Pet pt) 
        {
            if(ModelState.IsValid)
            {
                _context.Add(pt);
                await _context.SaveChangesAsync();
                return RedirectToAction("Index");
            }
            return View();
        }
        [HttpGet]
        public async Task<IActionResult> Edit(int ? id)
        {
            if (id == null)
            {
                return NotFound();
            }
            var pet = await _context.Pets.FindAsync(id);
            if (pet == null)
            {
                return NotFound();
            }
            return View (pet);
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
        public async Task<IActionResult> Delete (int ? id) 
        {
            if (id == null) {return NotFound(); }
            var pet = await _context.Pets.FirstOrDefaultAsync(m => m.Id == id);
            if (pet == null) { return NotFound(); }
            return View(pet);
        }
        [HttpPost]
        public async Task<IActionResult> DeleteConfirmed(int id)
        {
            var pet = await _context.Pets.FindAsync(id);
            if (pet!= null)
            {
                _context.Pets.Remove(pet);
            }
            await _context.SaveChangesAsync();
            return RedirectToAction("Index");
        }
    }
}
