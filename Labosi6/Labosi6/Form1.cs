using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Labosi6
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btn_Stoca_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void btn_Calculate_Click(object sender, EventArgs e)
        {
            double op1;
            double op2;
            double op3;
            op1 = double.Parse(textBox_Op1.Text);
            op2 = double.Parse(textBox_Op2.Text);
            op3 = double.Parse(textBox_Op3.Text);
            if (op1 < 0 || op2 < 0 || op3 < 0 || op1 + op2 <= op3 || op1 + op3 <= op2 || op2 + op3 <= op1)
            {
                MessageBox.Show("Pogresan unos stranica trokuta!", "Ne radi se o trokutu!");
            }
            else
            {
                double s = (op1 + op2 + op3) / 2; 
                double povrsina = Math.Sqrt(s * (s - op1) * (s - op2) * (s - op3));
                label_Povrsina.Text = "Povrsina: " + povrsina.ToString();
                double opseg = op1 + op2 + op3;
                label_Opseg.Text = "Opseg: " + opseg.ToString();
            }
        }

        private void textBox_Op1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox_Op2_TextChanged(object sender, EventArgs e)
        {

        }

        private void button_Pravokutan_Click(object sender, EventArgs e)
        {
            double op1;
            double op2;
            double op3;
            op1 = double.Parse(textBox_Op1.Text);
            op2 = double.Parse(textBox_Op2.Text);
            op3 = double.Parse(textBox_Op3.Text);
            if (op1*op1 == (op2*op2 + op3*op3) || op2*op2 == (op1*op1 + op3*op3) || op3*op3 == (op1*op1 + op2*op2))
            {
                MessageBox.Show("Trokut je pravokutan!", "Je li trokut pravokutan?");
            }
            else
            {
                MessageBox.Show("Trokut nije pravokutan!", "Je li trokut pravokutan?");
            }
        }

        private void button_Izlaz_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
