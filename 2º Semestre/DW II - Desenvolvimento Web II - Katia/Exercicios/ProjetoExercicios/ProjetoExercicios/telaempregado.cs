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
    public partial class telaempregado : Form
    {
        public telaempregado()
        {
            InitializeComponent();
        }

        private void btnvoltar_Click(object sender, EventArgs e)
        {
            Form1 tela = new Form1();
            tela.Show();
            this.Hide();
        }
        Empregado emp;
        private void btncadastrar_Click(object sender, EventArgs e)
        {
            emp = new Empregado();
            emp.Matricula = Convert.ToInt32(txtmatricula.Text);
            emp.Nome = txtnome.Text;
            emp.Endereco = txtendereco.Text;
            emp.Telefone = txttelefone.Text;
            emp.SalarioBase = Convert.ToDouble(txtsalario.Text);
            emp.Aliquota=Convert.ToDouble(txtaliquota.Text);
        }
    }
}
