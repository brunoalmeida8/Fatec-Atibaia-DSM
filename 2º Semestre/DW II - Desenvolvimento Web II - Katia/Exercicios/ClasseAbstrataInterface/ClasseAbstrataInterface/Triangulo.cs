using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClasseAbstrataInterface
{
    public class Triangulo : Forma
    {
        public double Largura { get; set; }

        public override void calcularArea()
        {
            double area = (this.Lado * this.Largura) / 2;
            Console.WriteLine($"Área = {area}");
        }
    }
}
