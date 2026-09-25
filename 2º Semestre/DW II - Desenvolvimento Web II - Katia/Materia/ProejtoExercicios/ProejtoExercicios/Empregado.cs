using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProejtoExercicios
{
    public class Empregado : Pessoa
    {
        public int Matricula { get; set; }
        public string Setor { get; set; }
        public double SalarioBase { get; set; }
        public double Aliquota { get; set; }
        public double calcularSalario()
        {
            return (this.SalarioBase - this.SalarioBase * this.Aliquota);
        }
    }
}
