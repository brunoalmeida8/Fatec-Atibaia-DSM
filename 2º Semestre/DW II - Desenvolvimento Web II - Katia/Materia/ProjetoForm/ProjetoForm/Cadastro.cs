

using Microsoft.VisualBasic;

namespace ProjetoForm
{
    public partial class Cadastro : Form
    {
        public Cadastro()
        {
            InitializeComponent();
            txtagencia.Focus();
        }
        Corrente cc;

        private void btncadastrar_Click_1(object sender, EventArgs e)
        {
            cc = new Corrente();
            cc.Agencia = Convert.ToInt32(txtagencia.Text);
            cc.Numero = Convert.ToInt32(txtnumero.Text);
            cc.Saldo = Convert.ToDouble(txtsaldo.Text);
            cc.Cpf = txtcpf.Text;
            cc.Nome = txtnome.Text;
            cc.Limite = 1000;
            limpar();
        }
        private void limpar()
        {
            txtagencia.Text = null;
            txtcpf.Text = null;
            txtsaldo.Text = null;
            txtnumero.Text = null;
            txtnome.Text = null;
        }

        private void btnmostrar_Click(object sender, EventArgs e)
        {
            MessageBox.Show($"Titular: {cc.Nome}\nCPF: {cc.Cpf}\nAgência: " +
                $"{cc.Agencia}\nConta: {cc.Numero}\nSaldo: {cc.Saldo}");
        }

        private void btndepositar_Click(object sender, EventArgs e)
        {
            double valor = Convert.ToDouble(Interaction.InputBox("Digite o valor: ",
                "Depósito", "", -1, 1));
            cc.Depositar(valor);
        }

        private void btnsacar_Click(object sender, EventArgs e)
        {
            double valor = Convert.ToDouble(Interaction.InputBox("Digite o valor: ",
                "Saque", "", -1, 1));
            if (!cc.Sacar(valor)) MessageBox.Show("Saldo insuficiente!");
        }
    }
}
