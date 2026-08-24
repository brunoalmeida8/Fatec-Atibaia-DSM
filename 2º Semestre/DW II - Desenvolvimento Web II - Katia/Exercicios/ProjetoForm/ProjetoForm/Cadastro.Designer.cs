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
            label1.Location = new Point(43, 11);
            label1.Margin = new Padding(2, 0, 2, 0);
            label1.Name = "label1";
            label1.Size = new Size(104, 32);
            label1.TabIndex = 0;
            label1.Text = "Agência:";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label2.Location = new Point(43, 55);
            label2.Margin = new Padding(2, 0, 2, 0);
            label2.Name = "label2";
            label2.Size = new Size(107, 32);
            label2.TabIndex = 1;
            label2.Text = "Número:";
            label2.Click += label2_Click;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label3.Location = new Point(43, 97);
            label3.Margin = new Padding(2, 0, 2, 0);
            label3.Name = "label3";
            label3.Size = new Size(78, 32);
            label3.TabIndex = 2;
            label3.Text = "Saldo:";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label4.Location = new Point(43, 142);
            label4.Margin = new Padding(2, 0, 2, 0);
            label4.Name = "label4";
            label4.Size = new Size(59, 32);
            label4.TabIndex = 3;
            label4.Text = "CPF:";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label5.Location = new Point(43, 182);
            label5.Margin = new Padding(2, 0, 2, 0);
            label5.Name = "label5";
            label5.Size = new Size(85, 32);
            label5.TabIndex = 4;
            label5.Text = "Nome:";
            label5.Click += label5_Click;
            // 
            // txtagencia
            // 
            txtagencia.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtagencia.Location = new Point(181, 7);
            txtagencia.Margin = new Padding(2, 2, 2, 2);
            txtagencia.Name = "txtagencia";
            txtagencia.Size = new Size(180, 39);
            txtagencia.TabIndex = 5;
            // 
            // txtnumero
            // 
            txtnumero.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtnumero.Location = new Point(181, 50);
            txtnumero.Margin = new Padding(2, 2, 2, 2);
            txtnumero.Name = "txtnumero";
            txtnumero.Size = new Size(180, 39);
            txtnumero.TabIndex = 6;
            // 
            // txtsaldo
            // 
            txtsaldo.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtsaldo.Location = new Point(181, 92);
            txtsaldo.Margin = new Padding(2, 2, 2, 2);
            txtsaldo.Name = "txtsaldo";
            txtsaldo.Size = new Size(180, 39);
            txtsaldo.TabIndex = 7;
            // 
            // txtnome
            // 
            txtnome.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtnome.Location = new Point(181, 178);
            txtnome.Margin = new Padding(2, 2, 2, 2);
            txtnome.Name = "txtnome";
            txtnome.Size = new Size(464, 39);
            txtnome.TabIndex = 9;
            // 
            // txtcpf
            // 
            txtcpf.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtcpf.Location = new Point(181, 137);
            txtcpf.Margin = new Padding(2, 2, 2, 2);
            txtcpf.Mask = "###,###,###-##";
            txtcpf.Name = "txtcpf";
            txtcpf.Size = new Size(180, 39);
            txtcpf.TabIndex = 10;
            // 
            // btncadastrar
            // 
            btncadastrar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btncadastrar.Location = new Point(28, 223);
            btncadastrar.Margin = new Padding(2, 2, 2, 2);
            btncadastrar.Name = "btncadastrar";
            btncadastrar.Size = new Size(178, 43);
            btncadastrar.TabIndex = 11;
            btncadastrar.Text = "Cadastrar";
            btncadastrar.UseVisualStyleBackColor = true;
            btncadastrar.Click += btncadastrar_Click;
            // 
            // btnmostrar
            // 
            btnmostrar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btnmostrar.Location = new Point(211, 223);
            btnmostrar.Margin = new Padding(2, 2, 2, 2);
            btnmostrar.Name = "btnmostrar";
            btnmostrar.Size = new Size(178, 43);
            btnmostrar.TabIndex = 12;
            btnmostrar.Text = "Mostrar saldo";
            btnmostrar.UseVisualStyleBackColor = true;
            // 
            // btndepositar
            // 
            btndepositar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btndepositar.Location = new Point(393, 223);
            btndepositar.Margin = new Padding(2, 2, 2, 2);
            btndepositar.Name = "btndepositar";
            btndepositar.Size = new Size(178, 43);
            btndepositar.TabIndex = 13;
            btndepositar.Text = "Depositar";
            btndepositar.UseVisualStyleBackColor = true;
            // 
            // btnsacar
            // 
            btnsacar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btnsacar.Location = new Point(576, 223);
            btnsacar.Margin = new Padding(2, 2, 2, 2);
            btnsacar.Name = "btnsacar";
            btnsacar.Size = new Size(178, 43);
            btnsacar.TabIndex = 14;
            btnsacar.Text = "Sacar";
            btnsacar.UseVisualStyleBackColor = true;
            // 
            // Cadastro
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(772, 300);
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
            Margin = new Padding(2, 2, 2, 2);
            Name = "Cadastro";
            Text = "Conta Corrente";
            Load += Form1_Load;
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
