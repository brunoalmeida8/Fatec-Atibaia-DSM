using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore.Storage.ValueConversion.Internal;
using ProjetoMVC.Data;
using ProjetoMVC.Models;

namespace ProjetoMVC.Controllers
{
    public class ProdutoController : Controller
    {
        private readonly AppDbContext _context;
        public ProdutoController(AppDbContext context) //construtor 
        {
            _context = context;
        }

        //direcionando kkk???
        public IActionResult Index()
        {
            return View(_context.Produtos.ToList());//retornar uma lista de produto
        }
        [HttpGet]//requisição que ta passando valores do formulario, seta no objeto
        public IActionResult Create()//Tela cadastrar produto
        {
            return View();
        }
        [HttpPost]// requisição que  insere ele no banco
        public IActionResult Create(Produto produto)
        {
            if(ModelState.IsValid)
            {
                _context.Produtos.Add(produto);
                _context.SaveChanges();//insert no banco
                return RedirectToAction("Index");
            }
            return View();//se falso volta para a propria pagina do formulario do produto
        }
        [HttpGet]
        public IActionResult Edit(int id)
        {
            var produto = _context.Produtos.Find(id); //produto = procura o id do produto/
            if (produto == null) return NotFound();
            return View(produto);
        }
        [HttpPost]
        public IActionResult Edit(Produto produto)
        {
            if (ModelState.IsValid)
            {
                _context.Produtos.Update(produto);
                _context.SaveChanges();
                return RedirectToAction("Index");
            }
            return View();//é a pagina do proprio metodo que ele está
        }
        [HttpGet]
        public IActionResult Delete(int id)
        {
            var produto = _context.Produtos.Find(id);
            if (produto == null) return NotFound();
            return View(produto);
        }
        [HttpPost]
        public IActionResult DeleteConfirmed(int id)
        {
            var produto = _context.Produtos.Find(id); ;
            if (produto != null)
            {
                _context.Produtos.Remove(produto);
                _context.SaveChanges();
            }
            return RedirectToAction("Index");
        }
    }
}
