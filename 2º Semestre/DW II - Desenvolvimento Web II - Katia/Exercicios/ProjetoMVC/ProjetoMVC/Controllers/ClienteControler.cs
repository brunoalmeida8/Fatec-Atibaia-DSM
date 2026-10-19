
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore.Storage.ValueConversion.Internal;
using ProjetoMVC.Data;
using ProjetoMVC.Models;

namespace ProjetoMVC.Controllers
{
    public class ClienteControler : Controller
    {
        private readonly AppDbContext _context;
        public ClienteControler(AppDbContext context) //construtor 
        {
            _context = context;
        }

        //direcionando kkk???
        public IActionResult Index()
        {
            return View(_context.Clientes.ToList());//retornar uma lista de cliente
        }
        [HttpGet]//requisição que ta passando valores do formulario, seta no objeto
        public IActionResult Create()//Tela cadastrar cliente
        {
            return View();
        }
        [HttpPost]// requisição que  insere ele no banco
        public IActionResult Create(Cliente cliente)
        {
            if (ModelState.IsValid)
            {
                _context.Clientes.Add(cliente);
                _context.SaveChanges();//insert no banco
                return RedirectToAction("Index");
            }
            return View();//se falso volta para a propria pagina do formulario do cliente
        }
        [HttpGet]
        public IActionResult Edit(int id)
        {
            var cliente = _context.Clientes.Find(id); //cliente = procura o id do cliente/
            if (cliente == null) return NotFound();
            return View(cliente);
        }
        [HttpPost]
        public IActionResult Edit(Cliente cliente)
        {
            if (ModelState.IsValid)
            {
                _context.Clientes.Update(cliente);
                _context.SaveChanges();
                return RedirectToAction("Index");
            }
            return View();//é a pagina do proprio metodo que ele está
        }
        [HttpGet]
        public IActionResult Delete(int id)
        {
            var cliente = _context.Clientes.Find(id);
            if (cliente == null) return NotFound();
            return View(cliente);
        }
        [HttpPost]
        public IActionResult DeleteConfirmed(int id)
        {
            var cliente = _context.Clientes.Find(id); ;
            if (cliente != null)
            {
                _context.Clientes.Remove(cliente);
                _context.SaveChanges();
            }
            return RedirectToAction("Index");
        }
    }
}
