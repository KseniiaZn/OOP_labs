using System;
using System.Collections.Generic;
using System.Text;

namespace OOP_lab_6_Csharp
{
    class Example
    {
        private double _a;
        private double _c;
        private double _d;
        public Example() //констр. за замовчуванням заповнює поля одиницями
        {
            this._a = 1;
            this._c = 1;
            this._d = 1;
        }
        //констр., передаємо з-ня операторів:
        public Example(double a, double c, double d)
        {
            this._a = a;
            this._c = c;
            this._d = d;
        }
        //ф-ція повертає результат:
        public double Result()
        {
            double res;
            try
            {
                if (( _d < 0) )
                {

                    throw new ArithmeticException();
                }
                if ((_c + _a ) == 1)
                {
                    throw new DivideByZeroException();
                }
            }
            catch (DivideByZeroException)
            {
                Console.WriteLine("=====Дiлення на нуль!======");
                throw new ArithmeticException();
            }
            catch (ArithmeticException)//можна було обійтися ЛИШЕ цим виключенням, воно включає в себе ділення на 0
            {
                Console.WriteLine("======Пiдкореневий вираз менше 0!======");
                throw new DivideByZeroException();
            }
            res = (2 * _c - _d * Math.Sqrt(42 / _d)) / (_c + _a - 1);
            return res;
        }
        //ф-ція для того щоб отримати будь-який з операторів:
        public double get_operand(char X)
        {
            if (X == 'a' || X == 'A')
            {
                return this._a;
            }
            if (X == 'c' || X == 'C')
            {
                return this._c;
            }
            if (X == 'd' || X == 'D')
            {
                return this._d;
            }
            else return 0;
        }
        //ф-ція для того щоб перезадати оператори:
        public void reset_operands(double a, double c, double d)
        {
            this._a = a;
            this._c = c;
            this._d = d;
        }
    }
}
