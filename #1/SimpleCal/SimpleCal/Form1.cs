using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

using System.Runtime.InteropServices;

namespace SimpleCal
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            MessageBox.Show(DLL.Add(1, 2).ToString());
        }

        private class DLL
        {
            [DllImport("CoreLib.dll", CallingConvention = CallingConvention.Cdecl)]
            public static extern int Add(int a, int b);
        }
    }
}
