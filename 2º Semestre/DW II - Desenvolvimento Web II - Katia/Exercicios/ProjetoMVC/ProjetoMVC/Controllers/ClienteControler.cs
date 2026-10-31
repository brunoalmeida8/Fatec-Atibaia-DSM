
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore.Storage.ValueConversion.Internal;
using ProjetoMVC.Data;
using ProjetoMVC.Models;

namespace ProjetoMVC.Controllers
{
    public class ClienteControler : Controller //Controller é uma classe que vem do AspNetCore.Mvc
    {
        private readonly AppDbContext _context; //declarando o ?
        public ClienteControler(AppDbContext context) //construtor do ?ClienteController?
        {
            _context = context;
        }

        //direcionando kkk??? Fazendo a chaamad das telas
        public IActionResult Index()
        {
            return View(_context.Clientes.ToList());//retornar uma lista de clientes cadastrados no banco = proprieties
        }
        [HttpGet]//botao CRIAR - requisição que ta passando valores do formulario, seta no objeto
        public IActionResult Create()//Tela cadastrar cliente - usa o HttpGet - 
        {
            return View(); //abre a tela Create.cshtml
        }
        [HttpPost]//botao SALVAR requisição que  insere ele no banco
        public IActionResult Create(Cliente cliente) //usa o HttpPost - bostao SALVAR
        {
            if (ModelState.IsValid) // verifica se o objeto _context tem valores
            {
                _context.Clientes.Add(cliente);
                _context.SaveChanges();//executa o insert no banco associando banco = proprieties
                return RedirectToAction("Index");
            }
            return View();//se falso volta para a propria pagina do formulario do cliente
        }
        [HttpGet]
        public IActionResult Edit(int id) // passa a linha que eu cliquei em editar para a tela de Edit.cshtml
        {
            var cliente = _context.Clientes.Find(id); //cliente = procura o id do cliente - select * from cliente where id = int id
            if (cliente == null) return NotFound();
            return View(cliente);
        }
        [HttpPost]
        public IActionResult Edit(Cliente cliente) //seta o campo do banco == proprieties
        {
            if (ModelState.IsValid)
            {
                _context.Clientes.Update(cliente);
                _context.SaveChanges();
                return RedirectToAction("Index");
            }
            return View();//é a pagina do proprio metodo que ele está
        }
        [HttpGet] //quando clico em excluir
        public IActionResult Delete(int id) // passa o id da linha que eu clicar excluir
        {
            var cliente = _context.Clientes.Find(id); // select * from cliente where id do banco = id da proprieties
            if (cliente == null) { return NotFound(); }
            return View(cliente);
        }
        [HttpPost] //quando eu clico em salvar
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
