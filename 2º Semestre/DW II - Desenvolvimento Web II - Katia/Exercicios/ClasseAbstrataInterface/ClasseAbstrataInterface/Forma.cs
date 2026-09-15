using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClasseAbstrataInterface
{
    public abstract class Forma
    {
        public double Lado { get; set; }

        public abstract void calcularArea();
    }
}
