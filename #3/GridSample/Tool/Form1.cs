using System;
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
        public CLICore.Core core = null;
        CLICore.Ground ground = null;

        public Form1()
        {
            InitializeComponent();

            core = new CLICore.Core();
            core.Init(this.Handle.ToInt32());

            ground = new CLICore.Ground();
            ground.Create(core, 20, 20, 0.5f);

            Render();
        }
        private async void Render()
        {
            while (true)
            {
                core.DrawScene(true);
                core.SetCamera();

                ground.Render();

                core.EndScene();

                await Task.Delay(10);
            }
        }
    }
}
