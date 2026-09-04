    using System;
using System.Collections.Generic;
using System.Text;

namespace Exercicios
{
    // O ": Pessoa" indica que Fornecedor herda tudo de Pessoa
    internal class Fornecedor : Pessoa
    {
        public decimal Credito { get; set; }
        public decimal Divida { get; set; }

        public decimal ObterSaldo()
        {
            return Credito - Divida;
        }
    }
}