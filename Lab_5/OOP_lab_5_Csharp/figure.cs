//базовий клас фігури
using System;
using System.Collections.Generic;
using System.Text;

namespace OOP_lab_5_Csharp
{
    class figure
    {
        protected double _x, _y;
        public figure(double a = 0, double b = 0)
        {
            _x = a; _y = b;
        }
        public virtual double area()
        {
            return (0); // за замовчуванням
        }
        public virtual double length()
        {
            return (0);
        }
    }
}