using Microsoft.VisualBasic;

namespace ProjetoForm
{
    public partial class Cadastro : Form
    {
        public Cadastro()
        {
            InitializeComponent();
            txtagencia.Focus(); //cursor abre aqui default
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
        Corrente cc;
        private void btncadastrar_Click(object sender, EventArgs e)
        {
            cc = new Corrente();
            cc.Agencia = Convert.ToInt32(txtagencia.Text);//pegando o texto digitado na agencia e convertendo para int e salvando no atributo agencia do objeto cc
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
            MessageBox.Show($"Titular: {cc.Nome}\nCPF: {cc.Cpf}\nAgencia: {cc.Agencia}" +
                $"\nConta: {cc.Numero}\nSaldo: {cc.Saldo}");
        }

        private void txtcpf_MaskInputRejected(object sender, MaskInputRejectedEventArgs e)
        {

        }

        private void btndepositar_Click(object sender, EventArgs e)
        {
            double valor = Convert.ToDouble(Interaction.InputBox("Digite o valor: ",
                "Depósito", "", -1, -1));
            cc.Depositar(valor);
        }

        private void btnsacar_Click(object sender, EventArgs e)
        {
            double valor = Convert.ToDouble(Interaction.InputBox("Digite o valor: ",
                "Sacar", "", -1, -1));
            if (!cc.Sacar(valor) MessageBox.Show("Saldo insuficiente");

        }
    }
    }
}
