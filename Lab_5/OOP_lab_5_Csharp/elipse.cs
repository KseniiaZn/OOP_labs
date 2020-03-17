//похідний від фігур клас еліпс
using System;
using System.Collections.Generic;
using System.Text;

namespace OOP_lab_5_Csharp
{
    class elipse : figure
    {
        public elipse(double a1 = 0, double a2 = 0) : base (a1, a2) { } //а1, а2 передаємо в _х, _у = піввісі еліпса
        public override double area()
        {
            return (3.1415 * _x * _y);
        }
        public override double length()
        {
            return (2 * 3.1415 * Math.Sqrt((Math.Pow(_x, 2) + Math.Pow(_y, 2)) / 2));
        }
    }
}
