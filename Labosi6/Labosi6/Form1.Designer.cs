
namespace Labosi6
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
            this.btn_Calculate = new System.Windows.Forms.Button();
            this.label_Povrsina = new System.Windows.Forms.Label();
            this.label_Op2 = new System.Windows.Forms.Label();
            this.label_Op1 = new System.Windows.Forms.Label();
            this.textBox_Op1 = new System.Windows.Forms.TextBox();
            this.textBox_Op2 = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.textBox_Op3 = new System.Windows.Forms.TextBox();
            this.label_Opseg = new System.Windows.Forms.Label();
            this.button_Izlaz = new System.Windows.Forms.Button();
            this.button_Pravokutan = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btn_Calculate
            // 
            this.btn_Calculate.Location = new System.Drawing.Point(158, 108);
            this.btn_Calculate.Name = "btn_Calculate";
            this.btn_Calculate.Size = new System.Drawing.Size(75, 23);
            this.btn_Calculate.TabIndex = 1;
            this.btn_Calculate.Text = "Calculate";
            this.btn_Calculate.UseVisualStyleBackColor = true;
            this.btn_Calculate.Click += new System.EventHandler(this.btn_Calculate_Click);
            // 
            // label_Povrsina
            // 
            this.label_Povrsina.AutoSize = true;
            this.label_Povrsina.Location = new System.Drawing.Point(66, 149);
            this.label_Povrsina.Name = "label_Povrsina";
            this.label_Povrsina.Size = new System.Drawing.Size(55, 15);
            this.label_Povrsina.TabIndex = 2;
            this.label_Povrsina.Text = "Povrsina:";
            // 
            // label_Op2
            // 
            this.label_Op2.AutoSize = true;
            this.label_Op2.Location = new System.Drawing.Point(66, 54);
            this.label_Op2.Name = "label_Op2";
            this.label_Op2.Size = new System.Drawing.Size(61, 15);
            this.label_Op2.TabIndex = 3;
            this.label_Op2.Text = "Stranica 2:";
            // 
            // label_Op1
            // 
            this.label_Op1.AutoSize = true;
            this.label_Op1.Location = new System.Drawing.Point(66, 25);
            this.label_Op1.Name = "label_Op1";
            this.label_Op1.Size = new System.Drawing.Size(61, 15);
            this.label_Op1.TabIndex = 4;
            this.label_Op1.Text = "Stranica 1:";
            this.label_Op1.Click += new System.EventHandler(this.label2_Click);
            // 
            // textBox_Op1
            // 
            this.textBox_Op1.Location = new System.Drawing.Point(133, 22);
            this.textBox_Op1.Name = "textBox_Op1";
            this.textBox_Op1.Size = new System.Drawing.Size(100, 23);
            this.textBox_Op1.TabIndex = 5;
            this.textBox_Op1.TextChanged += new System.EventHandler(this.textBox_Op1_TextChanged);
            // 
            // textBox_Op2
            // 
            this.textBox_Op2.Location = new System.Drawing.Point(133, 51);
            this.textBox_Op2.Name = "textBox_Op2";
            this.textBox_Op2.Size = new System.Drawing.Size(100, 23);
            this.textBox_Op2.TabIndex = 6;
            this.textBox_Op2.TextChanged += new System.EventHandler(this.textBox_Op2_TextChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(66, 82);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(61, 15);
            this.label1.TabIndex = 7;
            this.label1.Text = "Stranica 3:";
            // 
            // textBox_Op3
            // 
            this.textBox_Op3.Location = new System.Drawing.Point(133, 79);
            this.textBox_Op3.Name = "textBox_Op3";
            this.textBox_Op3.Size = new System.Drawing.Size(100, 23);
            this.textBox_Op3.TabIndex = 8;
            // 
            // label_Opseg
            // 
            this.label_Opseg.AutoSize = true;
            this.label_Opseg.Location = new System.Drawing.Point(77, 173);
            this.label_Opseg.Name = "label_Opseg";
            this.label_Opseg.Size = new System.Drawing.Size(44, 15);
            this.label_Opseg.TabIndex = 9;
            this.label_Opseg.Text = "Opseg:";
            // 
            // button_Izlaz
            // 
            this.button_Izlaz.BackColor = System.Drawing.Color.Red;
            this.button_Izlaz.Location = new System.Drawing.Point(301, 220);
            this.button_Izlaz.Name = "button_Izlaz";
            this.button_Izlaz.Size = new System.Drawing.Size(75, 23);
            this.button_Izlaz.TabIndex = 10;
            this.button_Izlaz.Text = "Izlaz";
            this.button_Izlaz.UseVisualStyleBackColor = false;
            this.button_Izlaz.Click += new System.EventHandler(this.button_Izlaz_Click);
            // 
            // button_Pravokutan
            // 
            this.button_Pravokutan.BackColor = System.Drawing.Color.SpringGreen;
            this.button_Pravokutan.Location = new System.Drawing.Point(12, 220);
            this.button_Pravokutan.Name = "button_Pravokutan";
            this.button_Pravokutan.Size = new System.Drawing.Size(265, 23);
            this.button_Pravokutan.TabIndex = 11;
            this.button_Pravokutan.Text = "Je li trokut pravokutan?";
            this.button_Pravokutan.UseVisualStyleBackColor = false;
            this.button_Pravokutan.Click += new System.EventHandler(this.button_Pravokutan_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.Info;
            this.ClientSize = new System.Drawing.Size(388, 269);
            this.Controls.Add(this.button_Pravokutan);
            this.Controls.Add(this.button_Izlaz);
            this.Controls.Add(this.label_Opseg);
            this.Controls.Add(this.textBox_Op3);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.textBox_Op2);
            this.Controls.Add(this.textBox_Op1);
            this.Controls.Add(this.label_Op1);
            this.Controls.Add(this.label_Op2);
            this.Controls.Add(this.label_Povrsina);
            this.Controls.Add(this.btn_Calculate);
            this.ForeColor = System.Drawing.SystemColors.ControlText;
            this.Name = "Form1";
            this.Text = "Zadatak 1. - LV 6";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Button btn_Calculate;
        private System.Windows.Forms.Label label_Povrsina;
        private System.Windows.Forms.Label label_Op2;
        private System.Windows.Forms.Label label_Op1;
        private System.Windows.Forms.TextBox textBox_Op1;
        private System.Windows.Forms.TextBox textBox_Op2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox textBox_Op3;
        private System.Windows.Forms.Label label_Opseg;
        private System.Windows.Forms.Button button_Izlaz;
        private System.Windows.Forms.Button button_Pravokutan;
    }
}

