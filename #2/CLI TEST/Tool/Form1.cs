﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Tool
{
    public partial class Form1 : Form
    {
        CLI.WrapTest test = null;

        public Form1()
        {
            InitializeComponent();

            test = new CLI.WrapTest();

            MessageBox.Show(test.Add(1, 2).ToString());
        }
    }
}
