namespace Exercicios
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            btnCalcularFornecedor = new Button();
            btnCalcularEmpregado = new Button();
            txtNomeForn = new TextBox();
            txtEndForn = new TextBox();
            txtTelForn = new TextBox();
            label1 = new Label();
            label2 = new Label();
            label3 = new Label();
            label4 = new Label();
            label5 = new Label();
            label6 = new Label();
            txtDivida = new TextBox();
            txtCredito = new TextBox();
            txtSetor = new TextBox();
            txtMatricula = new TextBox();
            label7 = new Label();
            label8 = new Label();
            label9 = new Label();
            label10 = new Label();
            label11 = new Label();
            txtTelEmp = new TextBox();
            txtEndEmp = new TextBox();
            txtNomeEmp = new TextBox();
            txtAliquota = new TextBox();
            txtSalario = new TextBox();
            label12 = new Label();
            label13 = new Label();
            label14 = new Label();
            SuspendLayout();
            // 
            // btnCalcularFornecedor
            // 
            btnCalcularFornecedor.Location = new Point(75, 309);
            btnCalcularFornecedor.Name = "btnCalcularFornecedor";
            btnCalcularFornecedor.Size = new Size(137, 23);
            btnCalcularFornecedor.TabIndex = 0;
            btnCalcularFornecedor.Text = "Calcular Fornecedor";
            btnCalcularFornecedor.UseVisualStyleBackColor = true;
            btnCalcularFornecedor.Click += btnCalcularFornecedor_Click;
            // 
            // btnCalcularEmpregado
            // 
            btnCalcularEmpregado.Location = new Point(449, 309);
            btnCalcularEmpregado.Name = "btnCalcularEmpregado";
            btnCalcularEmpregado.Size = new Size(144, 23);
            btnCalcularEmpregado.TabIndex = 1;
            btnCalcularEmpregado.Text = "Calcular Empregado";
            btnCalcularEmpregado.UseVisualStyleBackColor = true;
            btnCalcularEmpregado.Click += btnCalcularEmpregado_Click;
            // 
            // txtNomeForn
            // 
            txtNomeForn.Location = new Point(146, 94);
            txtNomeForn.Name = "txtNomeForn";
            txtNomeForn.Size = new Size(100, 23);
            txtNomeForn.TabIndex = 2;
            // 
            // txtEndForn
            // 
            txtEndForn.Location = new Point(146, 123);
            txtEndForn.Name = "txtEndForn";
            txtEndForn.Size = new Size(100, 23);
            txtEndForn.TabIndex = 3;
            // 
            // txtTelForn
            // 
            txtTelForn.Location = new Point(146, 152);
            txtTelForn.Name = "txtTelForn";
            txtTelForn.Size = new Size(100, 23);
            txtTelForn.TabIndex = 4;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(66, 28);
            label1.Name = "label1";
            label1.Size = new Size(82, 15);
            label1.TabIndex = 5;
            label1.Text = "FORNECEDOR";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(66, 100);
            label2.Name = "label2";
            label2.Size = new Size(40, 15);
            label2.TabIndex = 6;
            label2.Text = "Nome";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(66, 128);
            label3.Name = "label3";
            label3.Size = new Size(56, 15);
            label3.TabIndex = 7;
            label3.Text = "Endereço";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(66, 158);
            label4.Name = "label4";
            label4.Size = new Size(52, 15);
            label4.TabIndex = 8;
            label4.Text = "Telefone";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(66, 185);
            label5.Name = "label5";
            label5.Size = new Size(46, 15);
            label5.TabIndex = 9;
            label5.Text = "Credito";
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(66, 210);
            label6.Name = "label6";
            label6.Size = new Size(40, 15);
            label6.TabIndex = 10;
            label6.Text = "Divida";
            // 
            // txtDivida
            // 
            txtDivida.Location = new Point(146, 210);
            txtDivida.Name = "txtDivida";
            txtDivida.Size = new Size(100, 23);
            txtDivida.TabIndex = 12;
            // 
            // txtCredito
            // 
            txtCredito.Location = new Point(146, 181);
            txtCredito.Name = "txtCredito";
            txtCredito.Size = new Size(100, 23);
            txtCredito.TabIndex = 11;
            // 
            // txtSetor
            // 
            txtSetor.Location = new Point(529, 208);
            txtSetor.Name = "txtSetor";
            txtSetor.Size = new Size(100, 23);
            txtSetor.TabIndex = 22;
            // 
            // txtMatricula
            // 
            txtMatricula.Location = new Point(529, 179);
            txtMatricula.Name = "txtMatricula";
            txtMatricula.Size = new Size(100, 23);
            txtMatricula.TabIndex = 21;
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Location = new Point(449, 213);
            label7.Name = "label7";
            label7.Size = new Size(34, 15);
            label7.TabIndex = 20;
            label7.Text = "Setor";
            // 
            // label8
            // 
            label8.AutoSize = true;
            label8.Location = new Point(449, 183);
            label8.Name = "label8";
            label8.Size = new Size(57, 15);
            label8.TabIndex = 19;
            label8.Text = "Matricula";
            // 
            // label9
            // 
            label9.AutoSize = true;
            label9.Location = new Point(449, 156);
            label9.Name = "label9";
            label9.Size = new Size(52, 15);
            label9.TabIndex = 18;
            label9.Text = "Telefone";
            // 
            // label10
            // 
            label10.AutoSize = true;
            label10.Location = new Point(449, 126);
            label10.Name = "label10";
            label10.Size = new Size(56, 15);
            label10.TabIndex = 17;
            label10.Text = "Endereço";
            // 
            // label11
            // 
            label11.AutoSize = true;
            label11.Location = new Point(449, 98);
            label11.Name = "label11";
            label11.Size = new Size(40, 15);
            label11.TabIndex = 16;
            label11.Text = "Nome";
            // 
            // txtTelEmp
            // 
            txtTelEmp.Location = new Point(529, 150);
            txtTelEmp.Name = "txtTelEmp";
            txtTelEmp.Size = new Size(100, 23);
            txtTelEmp.TabIndex = 15;
            // 
            // txtEndEmp
            // 
            txtEndEmp.Location = new Point(529, 121);
            txtEndEmp.Name = "txtEndEmp";
            txtEndEmp.Size = new Size(100, 23);
            txtEndEmp.TabIndex = 14;
            // 
            // txtNomeEmp
            // 
            txtNomeEmp.Location = new Point(529, 92);
            txtNomeEmp.Name = "txtNomeEmp";
            txtNomeEmp.Size = new Size(100, 23);
            txtNomeEmp.TabIndex = 13;
            // 
            // txtAliquota
            // 
            txtAliquota.Location = new Point(529, 268);
            txtAliquota.Name = "txtAliquota";
            txtAliquota.Size = new Size(100, 23);
            txtAliquota.TabIndex = 26;
            // 
            // txtSalario
            // 
            txtSalario.Location = new Point(529, 239);
            txtSalario.Name = "txtSalario";
            txtSalario.Size = new Size(100, 23);
            txtSalario.TabIndex = 25;
            // 
            // label12
            // 
            label12.AutoSize = true;
            label12.Location = new Point(449, 268);
            label12.Name = "label12";
            label12.Size = new Size(65, 15);
            label12.TabIndex = 24;
            label12.Text = "Aliquota %";
            // 
            // label13
            // 
            label13.AutoSize = true;
            label13.Location = new Point(449, 243);
            label13.Name = "label13";
            label13.Size = new Size(69, 15);
            label13.TabIndex = 23;
            label13.Text = "Salario Base";
            // 
            // label14
            // 
            label14.AutoSize = true;
            label14.Location = new Point(449, 28);
            label14.Name = "label14";
            label14.Size = new Size(68, 15);
            label14.TabIndex = 27;
            label14.Text = "Empregado";
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(label14);
            Controls.Add(txtAliquota);
            Controls.Add(txtSalario);
            Controls.Add(label12);
            Controls.Add(label13);
            Controls.Add(txtSetor);
            Controls.Add(txtMatricula);
            Controls.Add(label7);
            Controls.Add(label8);
            Controls.Add(label9);
            Controls.Add(label10);
            Controls.Add(label11);
            Controls.Add(txtTelEmp);
            Controls.Add(txtEndEmp);
            Controls.Add(txtNomeEmp);
            Controls.Add(txtDivida);
            Controls.Add(txtCredito);
            Controls.Add(label6);
            Controls.Add(label5);
            Controls.Add(label4);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Controls.Add(txtTelForn);
            Controls.Add(txtEndForn);
            Controls.Add(txtNomeForn);
            Controls.Add(btnCalcularEmpregado);
            Controls.Add(btnCalcularFornecedor);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button btnCalcularFornecedor;
        private Button btnCalcularEmpregado;
        private TextBox txtNomeForn;
        private TextBox txtEndForn;
        private TextBox txtTelForn;
        private Label label1;
        private Label label2;
        private Label label3;
        private Label label4;
        private Label label5;
        private Label label6;
        private TextBox txtDivida;
        private TextBox txtCredito;
        private TextBox txtSetor;
        private TextBox txtMatricula;
        private Label label7;
        private Label label8;
        private Label label9;
        private Label label10;
        private Label label11;
        private TextBox txtTelEmp;
        private TextBox txtEndEmp;
        private TextBox txtNomeEmp;
        private TextBox txtAliquota;
        private TextBox txtSalario;
        private Label label12;
        private Label label13;
        private Label label14;
    }
}
