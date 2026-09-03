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
            txtcpf = new TextBox();
            txttitular = new TextBox();
            txtsaldo = new TextBox();
            btncadastrar = new Button();
            btnmostrar = new Button();
            label6 = new Label();
            txttipo = new TextBox();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 18F);
            label1.Location = new Point(32, 9);
            label1.Name = "label1";
            label1.Size = new Size(147, 48);
            label1.TabIndex = 0;
            label1.Text = "Agência";
            // 
            // txtagencia
            // 
            txtagencia.Font = new Font("Segoe UI", 18F);
            txtagencia.Location = new Point(192, 9);
            txtagencia.Name = "txtagencia";
            txtagencia.Size = new Size(294, 55);
            txtagencia.TabIndex = 1;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 18F);
            label2.Location = new Point(32, 76);
            label2.Name = "label2";
            label2.Size = new Size(151, 48);
            label2.TabIndex = 2;
            label2.Text = "Número";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Segoe UI", 18F);
            label3.Location = new Point(32, 151);
            label3.Name = "label3";
            label3.Size = new Size(80, 48);
            label3.TabIndex = 3;
            label3.Text = "CPF";
            label3.Click += label3_Click;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("Segoe UI", 18F);
            label4.Location = new Point(32, 229);
            label4.Name = "label4";
            label4.Size = new Size(120, 48);
            label4.TabIndex = 4;
            label4.Text = "Titular";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Font = new Font("Segoe UI", 18F);
            label5.Location = new Point(32, 303);
            label5.Name = "label5";
            label5.Size = new Size(108, 48);
            label5.TabIndex = 5;
            label5.Text = "Saldo";
            // 
            // txtnumero
            // 
            txtnumero.Font = new Font("Segoe UI", 18F);
            txtnumero.Location = new Point(190, 81);
            txtnumero.Name = "txtnumero";
            txtnumero.Size = new Size(294, 55);
            txtnumero.TabIndex = 7;
            // 
            // txtcpf
            // 
            txtcpf.Font = new Font("Segoe UI", 18F);
            txtcpf.Location = new Point(188, 149);
            txtcpf.Name = "txtcpf";
            txtcpf.Size = new Size(294, 55);
            txtcpf.TabIndex = 8;
            // 
            // txttitular
            // 
            txttitular.Font = new Font("Segoe UI", 18F);
            txttitular.Location = new Point(188, 224);
            txttitular.Name = "txttitular";
            txttitular.Size = new Size(563, 55);
            txttitular.TabIndex = 9;
            // 
            // txtsaldo
            // 
            txtsaldo.Font = new Font("Segoe UI", 18F);
            txtsaldo.Location = new Point(188, 304);
            txtsaldo.Name = "txtsaldo";
            txtsaldo.Size = new Size(294, 55);
            txtsaldo.TabIndex = 10;
            // 
            // btncadastrar
            // 
            btncadastrar.Font = new Font("Segoe UI", 18F);
            btncadastrar.Location = new Point(85, 463);
            btncadastrar.Name = "btncadastrar";
            btncadastrar.Size = new Size(201, 58);
            btncadastrar.TabIndex = 11;
            btncadastrar.Text = "Cadastrar";
            btncadastrar.UseVisualStyleBackColor = true;
            btncadastrar.Click += button1_Click;
            // 
            // btnmostrar
            // 
            btnmostrar.Font = new Font("Segoe UI", 18F);
            btnmostrar.Location = new Point(479, 463);
            btnmostrar.Name = "btnmostrar";
            btnmostrar.Size = new Size(201, 58);
            btnmostrar.TabIndex = 12;
            btnmostrar.Text = "Mostrar";
            btnmostrar.UseVisualStyleBackColor = true;
            btnmostrar.Click += btnmostrar_Click;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Font = new Font("Segoe UI", 18F);
            label6.Location = new Point(32, 380);
            label6.Name = "label6";
            label6.Size = new Size(90, 48);
            label6.TabIndex = 13;
            label6.Text = "Tipo";
            // 
            // txttipo
            // 
            txttipo.Font = new Font("Segoe UI", 18F);
            txttipo.Location = new Point(188, 380);
            txttipo.Name = "txttipo";
            txttipo.Size = new Size(294, 55);
            txttipo.TabIndex = 14;
            // 
            // FormInvestimento
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 533);
            Controls.Add(txttipo);
            Controls.Add(label6);
            Controls.Add(btnmostrar);
            Controls.Add(btncadastrar);
            Controls.Add(txtsaldo);
            Controls.Add(txttitular);
            Controls.Add(txtcpf);
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
        private TextBox txtcpf;
        private TextBox txttitular;
        private TextBox txtsaldo;
        private Button btncadastrar;
        private Button btnmostrar;
        private Label label6;
        private TextBox txttipo;
    }
}