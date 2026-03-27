namespace SistemaBancario.Models
{
    public class ContaCorrente : Conta
    {
        public ContaCorrente(string nome, decimal saldoInicial) : base(nome,saldoInicial, "Corrente")
        {
        }

        public override bool ValidarAbertura()
        {
            return true;
        }
    }
}
