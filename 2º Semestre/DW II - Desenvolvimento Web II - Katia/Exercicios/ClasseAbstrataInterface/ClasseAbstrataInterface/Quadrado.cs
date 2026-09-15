using System;
using System.Collections.Generic;
using System.Formats.Asn1;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClasseAbstrataInterface
{
    public class Quadrado : Forma
    {
      public override void calcularArea()
      {
            double area = this.Lado * this.Lado;
            Console.WriteLine($"Area = {area}");
      }
    }
}
