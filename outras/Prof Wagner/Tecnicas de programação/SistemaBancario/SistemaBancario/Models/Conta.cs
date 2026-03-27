using System.Globalization;

namespace SistemaBancario.Models
{
    public abstract class Conta : Iconta
    {
        public string NomeCliente { get; set; }
        public string Tipo { get; protected set; }
        public string NumeroConta { get; protected set; }
        public string Agencia { get; protected set; }
        public decimal Saldo { get; protected set; }

        public Conta(string nomeCliente, decimal saldoInicial, string tipo)
        {
            NomeCliente = nomeCliente;
            Saldo = saldoInicial;
            Tipo = tipo;
            Agencia = "A480";
            NumeroConta = GerarNumeroConta();
        }

        private string GerarNumeroConta() 
        {
            Random random = new Random();
            int numeroConta = random.Next(10000, 99999);
            return numeroConta.ToString();
        }

        public abstract bool ValidarAbertura();

        public virtual string ExibirResumo()
        {
            return $"Tipo: {Tipo}" +
                   $"Nome do Cliente: {NomeCliente}" +
                   $"Número da Conta: {NumeroConta}" +
                   $"Agência: {Agencia}" +
                   $"Saldo: R$ {Saldo:F2}";
        }

        public void AtualizarSaldo(decimal novoSaldo)
        {
            Saldo = novoSaldo;
        }

        public bool PodeSerRemovida()
        {
            return Saldo == 0;
        }

        public bool Depositar(decimal valor)
        { 
            if(valor <= 0)
            {
                return false;
            }
            Saldo += valor;
            return true;
        }

        public bool Sacar(decimal valor)
        {
            if(valor < 0 || valor > Saldo)
            {
                return false;
            }

            Saldo -= valor;
            return true;
        }

    }
}
