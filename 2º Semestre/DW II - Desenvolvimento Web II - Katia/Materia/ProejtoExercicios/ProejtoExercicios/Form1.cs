namespace ProejtoExercicios
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnfornecedor_Click(object sender, EventArgs e)
        {
            TerlaFornecedor4 tela = new TerlaFornecedor4();
            tela.Show();
            this.Hide();
        }
    }
}
