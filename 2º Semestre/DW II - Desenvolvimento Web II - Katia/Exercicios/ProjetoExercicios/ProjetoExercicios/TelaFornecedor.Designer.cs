namespace ProjetoExercicios
{
    partial class TelaFornecedor
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            label1 = new Label();
            txtnome = new TextBox();
            txtendereco = new TextBox();
            label2 = new Label();
            txttelefone = new TextBox();
            label3 = new Label();
            txtcredito = new TextBox();
            label4 = new Label();
            txtdebito = new TextBox();
            label5 = new Label();
            btncadastrar = new Button();
            btnmostrar = new Button();
            btnvoltar = new Button();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 18F);
            label1.Location = new Point(93, 27);
            label1.Name = "label1";
            label1.Size = new Size(126, 48);
            label1.TabIndex = 0;
            label1.Text = "Nome:";
            // 
            // txtnome
            // 
            txtnome.Font = new Font("Segoe UI", 18F);
            txtnome.Location = new Point(276, 20);
            txtnome.Name = "txtnome";
            txtnome.Size = new Size(412, 55);
            txtnome.TabIndex = 1;
            // 
            // txtendereco
            // 
            txtendereco.Font = new Font("Segoe UI", 18F);
            txtendereco.Location = new Point(276, 81);
            txtendereco.Name = "txtendereco";
            txtendereco.Size = new Size(412, 55);
            txtendereco.TabIndex = 3;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 18F);
            label2.Location = new Point(93, 88);
            label2.Name = "label2";
            label2.Size = new Size(176, 48);
            label2.TabIndex = 2;
            label2.Text = "Endereço:";
            // 
            // txttelefone
            // 
            txttelefone.Font = new Font("Segoe UI", 18F);
            txttelefone.Location = new Point(276, 142);
            txttelefone.Name = "txttelefone";
            txttelefone.Size = new Size(412, 55);
            txttelefone.TabIndex = 5;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Segoe UI", 18F);
            label3.Location = new Point(93, 149);
            label3.Name = "label3";
            label3.Size = new Size(161, 48);
            label3.TabIndex = 4;
            label3.Text = "Telefone:";
            // 
            // txtcredito
            // 
            txtcredito.Font = new Font("Segoe UI", 18F);
            txtcredito.Location = new Point(276, 203);
            txtcredito.Name = "txtcredito";
            txtcredito.Size = new Size(412, 55);
            txtcredito.TabIndex = 7;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("Segoe UI", 18F);
            label4.Location = new Point(93, 210);
            label4.Name = "label4";
            label4.Size = new Size(145, 48);
            label4.TabIndex = 6;
            label4.Text = "Crédito:";
            // 
            // txtdebito
            // 
            txtdebito.Font = new Font("Segoe UI", 18F);
            txtdebito.Location = new Point(276, 264);
            txtdebito.Name = "txtdebito";
            txtdebito.Size = new Size(412, 55);
            txtdebito.TabIndex = 9;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Font = new Font("Segoe UI", 18F);
            label5.Location = new Point(93, 271);
            label5.Name = "label5";
            label5.Size = new Size(135, 48);
            label5.TabIndex = 8;
            label5.Text = "Débito:";
            // 
            // btncadastrar
            // 
            btncadastrar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btncadastrar.Location = new Point(276, 355);
            btncadastrar.Name = "btncadastrar";
            btncadastrar.Size = new Size(195, 57);
            btncadastrar.TabIndex = 10;
            btncadastrar.Text = "Cadastrar";
            btncadastrar.UseVisualStyleBackColor = true;
            btncadastrar.Click += btncadastrar_Click;
            // 
            // btnmostrar
            // 
            btnmostrar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btnmostrar.Location = new Point(493, 355);
            btnmostrar.Name = "btnmostrar";
            btnmostrar.Size = new Size(195, 57);
            btnmostrar.TabIndex = 11;
            btnmostrar.Text = "Mostrar";
            btnmostrar.UseVisualStyleBackColor = true;
            btnmostrar.Click += btnmostrar_Click;
            // 
            // btnvoltar
            // 
            btnvoltar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btnvoltar.Location = new Point(59, 355);
            btnvoltar.Name = "btnvoltar";
            btnvoltar.Size = new Size(195, 57);
            btnvoltar.TabIndex = 12;
            btnvoltar.Text = "Voltar";
            btnvoltar.UseVisualStyleBackColor = true;
            btnvoltar.Click += btnvoltar_Click;
            // 
            // TelaFornecedor
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(btnvoltar);
            Controls.Add(btnmostrar);
            Controls.Add(btncadastrar);
            Controls.Add(txtdebito);
            Controls.Add(label5);
            Controls.Add(txtcredito);
            Controls.Add(label4);
            Controls.Add(txttelefone);
            Controls.Add(label3);
            Controls.Add(txtendereco);
            Controls.Add(label2);
            Controls.Add(txtnome);
            Controls.Add(label1);
            Name = "TelaFornecedor";
            Text = "TelaFornecedor";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private TextBox txtnome;
        private TextBox txtendereco;
        private Label label2;
        private TextBox txttelefone;
        private Label label3;
        private TextBox txtcredito;
        private Label label4;
        private TextBox txtdebito;
        private Label label5;
        private Button btncadastrar;
        private Button btnmostrar;
        private Button btnvoltar;
    }
}