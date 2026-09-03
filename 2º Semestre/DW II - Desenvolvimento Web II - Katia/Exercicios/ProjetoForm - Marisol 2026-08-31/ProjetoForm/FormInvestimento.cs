using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ProjetoForm
{
    public partial class FormInvestimento : Form
    {
        public FormInvestimento()
        {
            InitializeComponent();
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }
        Investimento i;
        private void button1_Click(object sender, EventArgs e)
        {
            i = new Investimento();
            i.Agencia = Convert.ToInt32(txtagencia.Text);
            i.Numero = Convert.ToInt32(txtnumero.Text);
            i.Cpf = txtcpf.Text;
            i.Nome = txttitular.Text;
            i.Saldo = Convert.ToDouble(txtsaldo.Text);
            i.Tipo = txttipo.Text;
        }

        private void btnmostrar_Click(object sender, EventArgs e)
        {
            MessageBox.Show($"Agência: {i.Agencia}\nNúmero da conta: {i.Numero}" +
                $"\nTitular: {i.Nome}\n CPf do titular: {i.Cpf}\nSaldo: {i.Saldo}");
        }
    }
}
