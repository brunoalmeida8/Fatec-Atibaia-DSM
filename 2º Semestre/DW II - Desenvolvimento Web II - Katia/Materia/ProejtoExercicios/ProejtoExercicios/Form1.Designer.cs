namespace ProejtoExercicios
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
            btnfornecedor = new Button();
            btnempregado = new Button();
            SuspendLayout();
            // 
            // btnfornecedor
            // 
            btnfornecedor.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btnfornecedor.Location = new Point(236, 80);
            btnfornecedor.Name = "btnfornecedor";
            btnfornecedor.Size = new Size(240, 92);
            btnfornecedor.TabIndex = 0;
            btnfornecedor.Text = "Fornecedor";
            btnfornecedor.UseVisualStyleBackColor = true;
            btnfornecedor.Click += btnfornecedor_Click;
            // 
            // btnempregado
            // 
            btnempregado.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point, 0);
            btnempregado.Location = new Point(236, 229);
            btnempregado.Name = "btnempregado";
            btnempregado.Size = new Size(240, 92);
            btnempregado.TabIndex = 1;
            btnempregado.Text = "Empregado";
            btnempregado.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(727, 448);
            Controls.Add(btnempregado);
            Controls.Add(btnfornecedor);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
        }

        #endregion

        private Button btnfornecedor;
        private Button btnempregado;
    }
}
