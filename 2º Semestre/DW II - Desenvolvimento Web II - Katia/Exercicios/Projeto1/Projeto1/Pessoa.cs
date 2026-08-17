using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Reflection.Metadata.Ecma335;
using System.Text;
using System.Threading.Tasks;

namespace Projeto1
{
    //classe Pessoa
    public class Pessoa
    {
        string nome;
        string endereco;
        string email;
        DateTime nascimento;

        //construtor
        public Pessoa(string n, string end, string e, DateTime nasc)
        {
            this.nome = n;
            this.endereco = end;
            this.email = e;
            //this.nascimento = nasc;
        }
        //metodos
        public string mostrar()
        {
            string texto = $"Nome: {this.nome} \nEndereço: {this.endereco} \nEmail: " +
                $"{this.email} \nData de Nascimento: {this.nascimento}";
            return texto;
        }
    }
}
