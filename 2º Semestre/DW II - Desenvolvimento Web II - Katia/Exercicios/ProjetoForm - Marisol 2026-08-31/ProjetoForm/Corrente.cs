using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjetoForm
{
    public class Corrente : Conta
    {
        public double Limite { get; set; }

        public void Depositar(double valor)
        {
            this.Saldo += valor;
        }

        public bool Sacar(double valor)
        {
            bool x = false;
            if (valor <= this.Saldo + this.Limite)
            {
                this.Saldo -= valor;
                x = true;
            }
            return x;
        }
    }
}
