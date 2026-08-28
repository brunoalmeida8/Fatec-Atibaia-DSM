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
            label1.Location = new Point(61, 18);
            label1.Name = "label1";
            label1.Size = new Size(155, 48);
            label1.TabIndex = 0;
            label1.Text = "Agência:";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label2.Location = new Point(61, 92);
            label2.Name = "label2";
            label2.Size = new Size(159, 48);
            label2.TabIndex = 1;
            label2.Text = "Número:";
            label2.Click += label2_Click;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label3.Location = new Point(61, 162);
            label3.Name = "label3";
            label3.Size = new Size(116, 48);
            label3.TabIndex = 2;
            label3.Text = "Saldo:";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label4.Location = new Point(61, 237);
            label4.Name = "label4";
            label4.Size = new Size(88, 48);
            label4.TabIndex = 3;
            label4.Text = "CPF:";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label5.Location = new Point(61, 303);
            label5.Name = "label5";
            label5.Size = new Size(126, 48);
            label5.TabIndex = 4;
            label5.Text = "Nome:";
            label5.Click += label5_Click;
            // 
            // txtagencia
            // 
            txtagencia.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtagencia.Location = new Point(259, 12);
            txtagencia.Name = "txtagencia";
            txtagencia.Size = new Size(255, 55);
            txtagencia.TabIndex = 1;
            // 
            // txtnumero
            // 
            txtnumero.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtnumero.Location = new Point(259, 83);
            txtnumero.Name = "txtnumero";
            txtnumero.Size = new Size(255, 55);
            txtnumero.TabIndex = 2;
            // 
            // txtsaldo
            // 
            txtsaldo.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtsaldo.Location = new Point(259, 153);
            txtsaldo.Name = "txtsaldo";
            txtsaldo.Size = new Size(255, 55);
            txtsaldo.TabIndex = 3;
            // 
            // txtnome
            // 
            txtnome.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtnome.Location = new Point(259, 297);
            txtnome.Name = "txtnome";
            txtnome.Size = new Size(661, 55);
            txtnome.TabIndex = 5;
            // 
            // txtcpf
            // 
            txtcpf.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtcpf.Location = new Point(259, 228);
            txtcpf.Mask = "###,###,###-##";
            txtcpf.Name = "txtcpf";
            txtcpf.Size = new Size(255, 55);
            txtcpf.TabIndex = 4;
            txtcpf.MaskInputRejected += txtcpf_MaskInputRejected;
            // 
            // btncadastrar
            // 
            btncadastrar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btncadastrar.Location = new Point(40, 372);
            btncadastrar.Name = "btncadastrar";
            btncadastrar.Size = new Size(254, 72);
            btncadastrar.TabIndex = 11;
            btncadastrar.Text = "Cadastrar";
            btncadastrar.UseVisualStyleBackColor = true;
            btncadastrar.Click += btncadastrar_Click;
            // 
            // btnmostrar
            // 
            btnmostrar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btnmostrar.Location = new Point(301, 372);
            btnmostrar.Name = "btnmostrar";
            btnmostrar.Size = new Size(254, 72);
            btnmostrar.TabIndex = 12;
            btnmostrar.Text = "Mostrar saldo";
            btnmostrar.UseVisualStyleBackColor = true;
            btnmostrar.Click += btnmostrar_Click;
            // 
            // btndepositar
            // 
            btndepositar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btndepositar.Location = new Point(561, 372);
            btndepositar.Name = "btndepositar";
            btndepositar.Size = new Size(254, 72);
            btndepositar.TabIndex = 13;
            btndepositar.Text = "Depositar";
            btndepositar.UseVisualStyleBackColor = true;
            btndepositar.Click += btndepositar_Click;
            // 
            // btnsacar
            // 
            btnsacar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btnsacar.Location = new Point(823, 372);
            btnsacar.Name = "btnsacar";
            btnsacar.Size = new Size(254, 72);
            btnsacar.TabIndex = 14;
            btnsacar.Text = "Sacar";
            btnsacar.UseVisualStyleBackColor = true;
            btnsacar.Click += btnsacar_Click;
            // 
            // Cadastro
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1103, 500);
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
