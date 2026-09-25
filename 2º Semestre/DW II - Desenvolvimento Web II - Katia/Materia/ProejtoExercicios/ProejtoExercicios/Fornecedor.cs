using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProejtoExercicios
{
    public class Fornecedor : Pessoa
    {
        public double Credito { get; set; }
        public double Divida { get; set; }
        public double obterSaldo()
        {
            return this.Credito-this.Divida;
        }
    }
}
