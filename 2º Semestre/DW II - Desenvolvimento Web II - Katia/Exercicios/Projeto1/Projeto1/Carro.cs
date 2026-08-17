using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Projeto1
{
    public class Carro
    {
        string modelo;
        string marca;
        string cor;
        int ano;
        public void cadastrar(string modelo, string marca, string cor, int ano)
        {
            this.modelo = modelo;
            this.marca = marca;
            this.cor = cor;
            this.ano = ano;
        }
        public string mostrar()
        {
            string texto = $"Marca: {this.marca} \nModelo: {this.modelo} \nCor: {this.cor}" +
                $"\nAno de fabricação: {this.ano}";
            return texto;
        }
    }
}
