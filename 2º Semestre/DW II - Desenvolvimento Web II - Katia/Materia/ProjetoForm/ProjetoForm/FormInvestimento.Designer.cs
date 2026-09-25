namespace ProjetoForm
{
    partial class FormInvestimento
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
            txtagencia = new TextBox();
            label2 = new Label();
            label3 = new Label();
            label4 = new Label();
            label5 = new Label();
            txtnumero = new TextBox();
            txttitular = new TextBox();
            txtsaldo = new TextBox();
            txtcpf = new MaskedTextBox();
            btncadastrar = new Button();
            btnmostrar = new Button();
            txttipo = new TextBox();
            label6 = new Label();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label1.Location = new Point(105, 54);
            label1.Name = "label1";
            label1.Size = new Size(124, 41);
            label1.TabIndex = 0;
            label1.Text = "Agência";
            // 
            // txtagencia
            // 
            txtagencia.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtagencia.Location = new Point(293, 38);
            txtagencia.Name = "txtagencia";
            txtagencia.Size = new Size(274, 47);
            txtagencia.TabIndex = 1;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label2.Location = new Point(105, 120);
            label2.Name = "label2";
            label2.Size = new Size(127, 41);
            label2.TabIndex = 2;
            label2.Text = "Número";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label3.Location = new Point(114, 173);
            label3.Name = "label3";
            label3.Size = new Size(69, 41);
            label3.TabIndex = 3;
            label3.Text = "CPF";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label4.Location = new Point(114, 230);
            label4.Name = "label4";
            label4.Size = new Size(100, 41);
            label4.TabIndex = 4;
            label4.Text = "Titular";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label5.Location = new Point(105, 292);
            label5.Name = "label5";
            label5.Size = new Size(92, 41);
            label5.TabIndex = 5;
            label5.Text = "Saldo";
            // 
            // txtnumero
            // 
            txtnumero.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtnumero.Location = new Point(274, 101);
            txtnumero.Name = "txtnumero";
            txtnumero.Size = new Size(274, 47);
            txtnumero.TabIndex = 6;
            // 
            // txttitular
            // 
            txttitular.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txttitular.Location = new Point(281, 224);
            txttitular.Name = "txttitular";
            txttitular.Size = new Size(472, 47);
            txttitular.TabIndex = 7;
            // 
            // txtsaldo
            // 
            txtsaldo.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtsaldo.Location = new Point(293, 286);
            txtsaldo.Name = "txtsaldo";
            txtsaldo.Size = new Size(274, 47);
            txtsaldo.TabIndex = 8;
            // 
            // txtcpf
            // 
            txtcpf.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtcpf.Location = new Point(274, 167);
            txtcpf.Name = "txtcpf";
            txtcpf.Size = new Size(293, 47);
            txtcpf.TabIndex = 9;
            // 
            // btncadastrar
            // 
            btncadastrar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btncadastrar.Location = new Point(133, 455);
            btncadastrar.Name = "btncadastrar";
            btncadastrar.Size = new Size(185, 46);
            btncadastrar.TabIndex = 10;
            btncadastrar.Text = "Cadastrar";
            btncadastrar.UseVisualStyleBackColor = true;
            btncadastrar.Click += btncadastrar_Click;
            // 
            // btnmostrar
            // 
            btnmostrar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btnmostrar.Location = new Point(546, 455);
            btnmostrar.Name = "btnmostrar";
            btnmostrar.Size = new Size(185, 46);
            btnmostrar.TabIndex = 11;
            btnmostrar.Text = "Mostrar";
            btnmostrar.UseVisualStyleBackColor = true;
            btnmostrar.Click += btnmostrar_Click;
            // 
            // txttipo
            // 
            txttipo.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txttipo.Location = new Point(281, 360);
            txttipo.Name = "txttipo";
            txttipo.Size = new Size(274, 47);
            txttipo.TabIndex = 13;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label6.Location = new Point(93, 366);
            label6.Name = "label6";
            label6.Size = new Size(77, 41);
            label6.TabIndex = 12;
            label6.Text = "Tipo";
            // 
            // FormInvestimento
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(858, 566);
            Controls.Add(txttipo);
            Controls.Add(label6);
            Controls.Add(btnmostrar);
            Controls.Add(btncadastrar);
            Controls.Add(txtcpf);
            Controls.Add(txtsaldo);
            Controls.Add(txttitular);
            Controls.Add(txtnumero);
            Controls.Add(label5);
            Controls.Add(label4);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(txtagencia);
            Controls.Add(label1);
            Name = "FormInvestimento";
            Text = "FormInvestimento";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private TextBox txtagencia;
        private Label label2;
        private Label label3;
        private Label label4;
        private Label label5;
        private TextBox txtnumero;
        private TextBox txttitular;
        private TextBox txtsaldo;
        private MaskedTextBox txtcpf;
        private Button btncadastrar;
        private Button btnmostrar;
        private TextBox txttipo;
        private Label label6;
    }
}