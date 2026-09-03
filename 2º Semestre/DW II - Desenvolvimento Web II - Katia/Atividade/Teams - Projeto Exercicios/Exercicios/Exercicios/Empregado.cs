using System;
using System.Collections.Generic;
using System.Text;

namespace Exercicios
{
    // O ": Pessoa" indica que Empregado herda tudo de Pessoa
    internal class Empregado : Pessoa
    {
        public int Matricula { get; set; }
        public string Setor { get; set; }
        public decimal SalarioBase { get; set; }
        public decimal Aliquota { get; set; }

        public decimal CalcularSalario()
        {
            // Calcula o desconto com base na alíquota e subtrai do salário base
            decimal desconto = SalarioBase * (Aliquota / 100);
            return SalarioBase - desconto;
        }
    }
}