using System;
using System.Collections.Generic;
using System.Configuration;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjetoForm
{
    public class Investimento : Conta
    {
        public string Tipo { get; set; }
        public double Calcular()
        {
            double valor = this.Saldo * 1.075;
            return valor;
        }
        public double Calcular(double v)
        {
            double valor = this.Saldo + this.Saldo * v;
           return valor;
        }
    }
}
