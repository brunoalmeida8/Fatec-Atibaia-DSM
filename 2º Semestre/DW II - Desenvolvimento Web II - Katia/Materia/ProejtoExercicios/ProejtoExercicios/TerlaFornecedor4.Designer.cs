namespace ProejtoExercicios
{
    partial class TerlaFornecedor4
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
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 18F);
            label1.Location = new Point(79, 27);
            label1.Name = "label1";
            label1.Size = new Size(107, 41);
            label1.TabIndex = 0;
            label1.Text = "Nome:";
            // 
            // txtnome
            // 
            txtnome.Font = new Font("Segoe UI", 18F);
            txtnome.Location = new Point(244, 21);
            txtnome.Name = "txtnome";
            txtnome.Size = new Size(465, 47);
            txtnome.TabIndex = 1;
            // 
            // txtendereco
            // 
            txtendereco.Font = new Font("Segoe UI", 18F);
            txtendereco.Location = new Point(244, 96);
            txtendereco.Name = "txtendereco";
            txtendereco.Size = new Size(465, 47);
            txtendereco.TabIndex = 3;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 18F);
            label2.Location = new Point(79, 102);
            label2.Name = "label2";
            label2.Size = new Size(149, 41);
            label2.TabIndex = 2;
            label2.Text = "Endereço:";
            // 
            // txttelefone
            // 
            txttelefone.Font = new Font("Segoe UI", 18F);
            txttelefone.Location = new Point(244, 166);
            txttelefone.Name = "txttelefone";
            txttelefone.Size = new Size(465, 47);
            txttelefone.TabIndex = 5;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Segoe UI", 18F);
            label3.Location = new Point(79, 172);
            label3.Name = "label3";
            label3.Size = new Size(137, 41);
            label3.TabIndex = 4;
            label3.Text = "Telefone:";
            // 
            // txtcredito
            // 
            txtcredito.Font = new Font("Segoe UI", 18F);
            txtcredito.Location = new Point(244, 239);
            txtcredito.Name = "txtcredito";
            txtcredito.Size = new Size(465, 47);
            txtcredito.TabIndex = 7;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("Segoe UI", 18F);
            label4.Location = new Point(79, 245);
            label4.Name = "label4";
            label4.Size = new Size(123, 41);
            label4.TabIndex = 6;
            label4.Text = "Crédito:";
            // 
            // txtdebito
            // 
            txtdebito.Font = new Font("Segoe UI", 18F);
            txtdebito.Location = new Point(244, 306);
            txtdebito.Name = "txtdebito";
            txtdebito.Size = new Size(465, 47);
            txtdebito.TabIndex = 9;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Font = new Font("Segoe UI", 18F);
            label5.Location = new Point(79, 312);
            label5.Name = "label5";
            label5.Size = new Size(115, 41);
            label5.TabIndex = 8;
            label5.Text = "Débito:";
            // 
            // btncadastrar
            // 
            btncadastrar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btncadastrar.Location = new Point(192, 395);
            btncadastrar.Name = "btncadastrar";
            btncadastrar.Size = new Size(157, 57);
            btncadastrar.TabIndex = 10;
            btncadastrar.Text = "Cadastrar";
            btncadastrar.UseVisualStyleBackColor = true;
            // 
            // btnmostrar
            // 
            btnmostrar.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btnmostrar.Location = new Point(492, 395);
            btnmostrar.Name = "btnmostrar";
            btnmostrar.Size = new Size(157, 57);
            btnmostrar.TabIndex = 11;
            btnmostrar.Text = "Mostrar";
            btnmostrar.UseVisualStyleBackColor = true;
            // 
            // TerlaFornecedor4
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 480);
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
            Name = "TerlaFornecedor4";
            Text = "TerlaFornecedor4";
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
    }
}