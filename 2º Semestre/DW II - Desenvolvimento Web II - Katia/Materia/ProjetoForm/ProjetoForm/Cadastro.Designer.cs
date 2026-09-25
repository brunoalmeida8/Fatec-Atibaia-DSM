namespace ProjetoForm
{
    partial class Cadastro
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
            label1 = new Label();
            label2 = new Label();
            label3 = new Label();
            label4 = new Label();
            label5 = new Label();
            txtagencia = new TextBox();
            txtnumero = new TextBox();
            txtsaldo = new TextBox();
            txtnome = new TextBox();
            txtcpf = new MaskedTextBox();
            btncadastrar = new Button();
            btnmostrar = new Button();
            btndepositar = new Button();
            btnsacar = new Button();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label1.Location = new Point(50, 37);
            label1.Name = "label1";
            label1.Size = new Size(131, 41);
            label1.TabIndex = 0;
            label1.Text = "Agência:";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label2.Location = new Point(50, 108);
            label2.Name = "label2";
            label2.Size = new Size(134, 41);
            label2.TabIndex = 1;
            label2.Text = "Número:";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label3.Location = new Point(50, 175);
            label3.Name = "label3";
            label3.Size = new Size(99, 41);
            label3.TabIndex = 2;
            label3.Text = "Saldo:";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label4.Location = new Point(50, 240);
            label4.Name = "label4";
            label4.Size = new Size(76, 41);
            label4.TabIndex = 3;
            label4.Text = "CPF:";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label5.Location = new Point(50, 302);
            label5.Name = "label5";
            label5.Size = new Size(107, 41);
            label5.TabIndex = 4;
            label5.Text = "Nome:";
            // 
            // txtagencia
            // 
            txtagencia.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtagencia.Location = new Point(249, 31);
            txtagencia.Name = "txtagencia";
            txtagencia.Size = new Size(439, 47);
            txtagencia.TabIndex = 1;
            // 
            // txtnumero
            // 
            txtnumero.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtnumero.Location = new Point(249, 102);
            txtnumero.Name = "txtnumero";
            txtnumero.Size = new Size(439, 47);
            txtnumero.TabIndex = 2;
            // 
            // txtsaldo
            // 
            txtsaldo.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtsaldo.Location = new Point(249, 169);
            txtsaldo.Name = "txtsaldo";
            txtsaldo.Size = new Size(439, 47);
            txtsaldo.TabIndex = 3;
            // 
            // txtnome
            // 
            txtnome.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtnome.Location = new Point(249, 296);
            txtnome.Name = "txtnome";
            txtnome.Size = new Size(748, 47);
            txtnome.TabIndex = 5;
            // 
            // txtcpf
            // 
            txtcpf.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtcpf.Location = new Point(249, 236);
            txtcpf.Mask = "###,###,###-##";
            txtcpf.Name = "txtcpf";
            txtcpf.Size = new Size(439, 47);
            txtcpf.TabIndex = 4;
            // 
            // btncadastrar
            // 
            btncadastrar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btncadastrar.Location = new Point(66, 375);
            btncadastrar.Name = "btncadastrar";
            btncadastrar.Size = new Size(215, 63);
            btncadastrar.TabIndex = 10;
            btncadastrar.Text = "Cadastrar";
            btncadastrar.UseVisualStyleBackColor = true;
            btncadastrar.Click += btncadastrar_Click_1;
            // 
            // btnmostrar
            // 
            btnmostrar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btnmostrar.Location = new Point(339, 375);
            btnmostrar.Name = "btnmostrar";
            btnmostrar.Size = new Size(215, 63);
            btnmostrar.TabIndex = 11;
            btnmostrar.Text = "Mostrar saldo";
            btnmostrar.UseVisualStyleBackColor = true;
            btnmostrar.Click += btnmostrar_Click;
            // 
            // btndepositar
            // 
            btndepositar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btndepositar.Location = new Point(610, 375);
            btndepositar.Name = "btndepositar";
            btndepositar.Size = new Size(215, 63);
            btndepositar.TabIndex = 12;
            btndepositar.Text = "Depositar";
            btndepositar.UseVisualStyleBackColor = true;
            btndepositar.Click += btndepositar_Click;
            // 
            // btnsacar
            // 
            btnsacar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btnsacar.Location = new Point(869, 375);
            btnsacar.Name = "btnsacar";
            btnsacar.Size = new Size(215, 63);
            btnsacar.TabIndex = 13;
            btnsacar.Text = "Sacar";
            btnsacar.UseVisualStyleBackColor = true;
            btnsacar.Click += btnsacar_Click;
            // 
            // Cadastro
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1174, 472);
            Controls.Add(btnsacar);
            Controls.Add(btndepositar);
            Controls.Add(btnmostrar);
            Controls.Add(btncadastrar);
            Controls.Add(txtcpf);
            Controls.Add(txtnome);
            Controls.Add(txtsaldo);
            Controls.Add(txtnumero);
            Controls.Add(txtagencia);
            Controls.Add(label5);
            Controls.Add(label4);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Cadastro";
            Text = "Conta Corrente";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private Label label3;
        private Label label4;
        private Label label5;
        private TextBox txtagencia;
        private TextBox txtnumero;
        private TextBox txtsaldo;
        private TextBox txtnome;
        private MaskedTextBox txtcpf;
        private Button btncadastrar;
        private Button btnmostrar;
        private Button btndepositar;
        private Button btnsacar;
    }
}
