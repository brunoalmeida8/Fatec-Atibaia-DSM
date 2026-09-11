namespace ProjetoExercicios
{
    partial class telaempregado
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
            txtmatricula = new TextBox();
            txtnome = new TextBox();
            label2 = new Label();
            txtendereco = new TextBox();
            label3 = new Label();
            txttelefone = new TextBox();
            label4 = new Label();
            txtsalario = new TextBox();
            label5 = new Label();
            txtaliquota = new TextBox();
            label6 = new Label();
            btnvoltar = new Button();
            btncadastrar = new Button();
            btnmostrar = new Button();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label1.Location = new Point(24, 10);
            label1.Name = "label1";
            label1.Size = new Size(168, 48);
            label1.TabIndex = 0;
            label1.Text = "Matrícula";
            // 
            // txtmatricula
            // 
            txtmatricula.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtmatricula.Location = new Point(249, 3);
            txtmatricula.Name = "txtmatricula";
            txtmatricula.Size = new Size(529, 55);
            txtmatricula.TabIndex = 1;
            // 
            // txtnome
            // 
            txtnome.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtnome.Location = new Point(249, 69);
            txtnome.Name = "txtnome";
            txtnome.Size = new Size(529, 55);
            txtnome.TabIndex = 3;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label2.Location = new Point(24, 76);
            label2.Name = "label2";
            label2.Size = new Size(118, 48);
            label2.TabIndex = 2;
            label2.Text = "Nome";
            // 
            // txtendereco
            // 
            txtendereco.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtendereco.Location = new Point(249, 134);
            txtendereco.Name = "txtendereco";
            txtendereco.Size = new Size(529, 55);
            txtendereco.TabIndex = 5;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label3.Location = new Point(24, 141);
            label3.Name = "label3";
            label3.Size = new Size(168, 48);
            label3.TabIndex = 4;
            label3.Text = "Endereço";
            // 
            // txttelefone
            // 
            txttelefone.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txttelefone.Location = new Point(249, 198);
            txttelefone.Name = "txttelefone";
            txttelefone.Size = new Size(529, 55);
            txttelefone.TabIndex = 7;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label4.Location = new Point(24, 205);
            label4.Name = "label4";
            label4.Size = new Size(153, 48);
            label4.TabIndex = 6;
            label4.Text = "Telefone";
            // 
            // txtsalario
            // 
            txtsalario.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtsalario.Location = new Point(249, 260);
            txtsalario.Name = "txtsalario";
            txtsalario.Size = new Size(529, 55);
            txtsalario.TabIndex = 9;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label5.Location = new Point(24, 267);
            label5.Name = "label5";
            label5.Size = new Size(210, 48);
            label5.TabIndex = 8;
            label5.Text = "Salario base";
            // 
            // txtaliquota
            // 
            txtaliquota.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtaliquota.Location = new Point(249, 320);
            txtaliquota.Name = "txtaliquota";
            txtaliquota.Size = new Size(529, 55);
            txtaliquota.TabIndex = 11;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label6.Location = new Point(24, 327);
            label6.Name = "label6";
            label6.Size = new Size(153, 48);
            label6.TabIndex = 10;
            label6.Text = "Aliquota";
            // 
            // btnvoltar
            // 
            btnvoltar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btnvoltar.Location = new Point(45, 393);
            btnvoltar.Name = "btnvoltar";
            btnvoltar.Size = new Size(195, 57);
            btnvoltar.TabIndex = 13;
            btnvoltar.Text = "Voltar";
            btnvoltar.UseVisualStyleBackColor = true;
            btnvoltar.Click += btnvoltar_Click;
            // 
            // btncadastrar
            // 
            btncadastrar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btncadastrar.Location = new Point(301, 393);
            btncadastrar.Name = "btncadastrar";
            btncadastrar.Size = new Size(195, 57);
            btncadastrar.TabIndex = 14;
            btncadastrar.Text = "Cadastrar";
            btncadastrar.UseVisualStyleBackColor = true;
            btncadastrar.Click += btncadastrar_Click;
            // 
            // btnmostrar
            // 
            btnmostrar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btnmostrar.Location = new Point(570, 393);
            btnmostrar.Name = "btnmostrar";
            btnmostrar.Size = new Size(195, 57);
            btnmostrar.TabIndex = 15;
            btnmostrar.Text = "Mostrar";
            btnmostrar.UseVisualStyleBackColor = true;
            // 
            // telaempregado
            // 
            AutoScaleDimensions = new SizeF(10F, 25F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 462);
            Controls.Add(btnmostrar);
            Controls.Add(btncadastrar);
            Controls.Add(btnvoltar);
            Controls.Add(txtaliquota);
            Controls.Add(label6);
            Controls.Add(txtsalario);
            Controls.Add(label5);
            Controls.Add(txttelefone);
            Controls.Add(label4);
            Controls.Add(txtendereco);
            Controls.Add(label3);
            Controls.Add(txtnome);
            Controls.Add(label2);
            Controls.Add(txtmatricula);
            Controls.Add(label1);
            Name = "telaempregado";
            Text = "telaempregado";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private TextBox txtmatricula;
        private TextBox txtnome;
        private Label label2;
        private TextBox txtendereco;
        private Label label3;
        private TextBox txttelefone;
        private Label label4;
        private TextBox txtsalario;
        private Label label5;
        private TextBox txtaliquota;
        private Label label6;
        private Button btnvoltar;
        private Button btncadastrar;
        private Button btnmostrar;
    }
}