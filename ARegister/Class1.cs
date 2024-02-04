using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ARegister
{
    public class Class1
    {
        public static void ShowMe(String file) {
            ARegister.Form1 form = new ARegister.Form1(file);
            form.Show();
        }
    }
}
