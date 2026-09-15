using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClasseAbstrataInterface
{
    public class Circulo : Forma, IForma
    {
        public string Informacao { get; set; }

        public override void calcularArea()
        {
            double area = Math.PI * this.Lado * this.Lado;
            Console.WriteLine($"Area = {area}");
        }

        public void cadastrarDados(string dados)
        {
            this.Informacao = dados;
        }

        public double calcularPerimetro()
        {
            double perimetro = this.Lado * Math.PI * 2;
            return perimetro;
        }
    }
}
