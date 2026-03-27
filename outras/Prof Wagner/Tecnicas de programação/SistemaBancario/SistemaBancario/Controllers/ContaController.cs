using Microsoft.AspNetCore.Mvc;
using SistemaBancario.Models;
using System.Runtime.CompilerServices;

namespace SistemaBancario.Controllers
{
    public class ContaController : Controller
    {
        private static List<Conta> listaContas = new List<Conta>();

        public IActionResult Listar()
        { 
            return View(listaContas);
        }

        public IActionResult Cadastrar()
        {
            return View();
        }

        [HttpPost]
        public IActionResult Cadastrar(string nomeCliente, decimal Saldo, string tipoConta)
        {
            Conta conta;
            if (tipoConta == "Corrente")
            {
                conta = new ContaCorrente(nomeCliente, Saldo);
            } 
            else if (tipoConta == "Poupança")
            { 
                conta = new ContaPoupanca(nomeCliente, Saldo);
            }
            else
            {
                TempData["Erro"] = "Tipo de conta inválido";
                return RedirectToAction("Cadastrar");
            }

            if (conta.ValidarAbertura())
            {
                listaContas.Add(conta);
                TempData["Sucesso"] = "Conta cadastrada com sucesso!";
                return RedirectToAction("Listar");
            }
            else
            {
                TempData["Erro"] = "A conta não pôde ser aberto. Verifique os critérios";
                return RedirectToAction("Cadastrar");
            }
        }
    
        public IActionResult Remover(string numeroConta)
        {
            var conta = listaContas.FirstOrDefault(c => c.NumeroConta == numeroConta);

            if (conta == null)
            {
                TempData["Erro"] = "Conta não encontrada.";
                return RedirectToAction("Listar");
            }

            return View(conta);
        }

        [HttpPost]
        public IActionResult RemoverConfirmado(string numeroConta)
        {
            var conta = listaContas.FirstOrDefault(c => c.NumeroConta == numeroConta);

            if (conta == null)
            {
                TempData["Erro"] = "Conta não encontrada.";
            }
            else if (!conta.PodeSerRemovida())
            {
                TempData["Erro"] = "Não é possível remover uma conta com saldo";
            }
            else {
                listaContas.Remove(conta);
                TempData["Sucesso"] = "Conta removida com sucesso";
            }

            return RedirectToAction("Listar");
        }

        public IActionResult Editar(string numeroConta)
        {
            var conta = listaContas.FirstOrDefault(c => c.NumeroConta == numeroConta);

            if (conta == null)
            {
                TempData["Erro"] = "Conta não encontrada.";
                return RedirectToAction("Listar");
            }

            return View(conta);
        }

        [HttpPost]
        public IActionResult Editar(string numeroConta, string nomeCliente)
        {
            var conta = listaContas.FirstOrDefault(c => c.NumeroConta == numeroConta);

            if (conta == null)
            {
                TempData["Erro"] = "Conta não encontrada.";
                return RedirectToAction("Listar");
            }

            conta.NomeCliente = nomeCliente;

            TempData["Sucesso"] = "Conta atualizada com sucesso";
            return RedirectToAction("Listar");
        }
    }  
}
