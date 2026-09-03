namespace Exercicios
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnCalcularFornecedor_Click(object sender, EventArgs e)
        {
            Fornecedor f = new Fornecedor();
            f.Nome = txtNomeForn.Text;
            f.Endereco = txtEndForn.Text;
            f.Telefone = txtTelForn.Text;
            f.Credito = Convert.ToDecimal(txtCredito.Text);
            f.Divida = Convert.ToDecimal(txtDivida.Text);

            decimal saldo = f.ObterSaldo();
            MessageBox.Show("Fornecedor: " + f.Nome + "\nSaldo Atual: R$ " + saldo, "Resultado Fornecedor");
        }

        private void btnCalcularEmpregado_Click(object sender, EventArgs e)
        {
            Empregado emp = new Empregado();
            emp.Nome = txtNomeEmp.Text;
            emp.Endereco = txtEndEmp.Text;
            emp.Telefone = txtTelEmp.Text;
            emp.Matricula = Convert.ToInt32(txtMatricula.Text);
            emp.Setor = txtSetor.Text;
            emp.SalarioBase = Convert.ToDecimal(txtSalario.Text);
            emp.Aliquota = Convert.ToDecimal(txtAliquota.Text);

            decimal salarioLiquido = emp.CalcularSalario();
            MessageBox.Show("Empregado: " + emp.Nome + "\nSetor: " + emp.Setor + "\nSalário Líquido: R$ " + salarioLiquido, "Resultado Empregado");
        }
    }
}