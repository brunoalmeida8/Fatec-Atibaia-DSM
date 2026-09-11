using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ProjetoExercicios
{
    public partial class TelaFornecedor : Form
    {
        public TelaFornecedor()
        {
            InitializeComponent();
        }
        Fornecedor alguem;
        private void btncadastrar_Click(object sender, EventArgs e)
        {
            alguem = new Fornecedor();
            alguem.Nome = txtnome.Text;
            alguem.Endereco = txtendereco.Text;
            alguem.Telefone = txttelefone.Text;
            alguem.Credito = Convert.ToDouble(txtcredito.Text);
            alguem.Divida = Convert.ToDouble(txtdebito.Text);

        }

        private void btnmostrar_Click(object sender, EventArgs e)
        {
            MessageBox.Show($"Nome: {alguem.Nome} \nEndereço: {alguem.Endereco}" +
                $"\nTelefone: {alguem.Telefone} \nCredito: {alguem.Credito}" +
                $"\nDivida: {alguem.Divida} \nSaldo{alguem.obterSaldo()}");
        }

        private void btnvoltar_Click(object sender, EventArgs e)
        {
            Form1 tela = new Form1();
            tela.Show();//telaForm1
            this.Hide();//telaFornecedor
        }
    }
}
