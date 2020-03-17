//похідний від фігур клас коло
using System;
using System.Collections.Generic;
using System.Text;

namespace OOP_lab_5_Csharp
{
    class circle : figure
    {
        public circle(double a = 0) : base (a, 0) { } //a передаємо в _х = радіус
        public override double area()
        {
            return (3.1415 * _x * _x);
        }
        public override double length()
        {
            return (2 * 3.1415 * _x);
        }
    }
}