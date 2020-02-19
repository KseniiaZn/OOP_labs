using System;

namespace OOP_lab_1_Csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            title();        //відомості про автора
            int a;
            Console.WriteLine("Завдання 1. Лiчильник збiльшення на 1\nВведiть операнд: ");
            a = Convert.ToInt32(Console.ReadLine());
            Part_1(ref a);  //Лiчильник збiльшення на 1.
            Console.WriteLine("Завдання 2. Oперацiя вiдношення \"==\"");
            Part_2();       //Завдання 2. Oперацiя вiдношення "=="
        }
        static void title()
        {
            Console.WriteLine("Лабоаторна робота №1 з дисциплiни ООП \n  студентки IС-92, Зiнкової Ксенiї \n           " +
                " варiант 5\n======================================");
        }
        static void Part_1(ref int a)
        {
            int idx = 0;
            while ((a & (1 << idx)) > 0)
                idx++;
            a ^= ((1 << (idx + 1)) - 1);
            Console.WriteLine("Результат: " + a);
        }
        static int Part_2()
        {
            int b, c;
            int rez;
            Console.WriteLine("Введiть перший операнд: ");
            b = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Введiть другий операнд: ");
            c = Convert.ToInt32(Console.ReadLine());
            if ((b ^ c) == 0)   //порівняння операндів виключаючим "або"
            {
                Console.WriteLine("Операцiя вiдношення \"==\" виконується");
                rez = 1;
            }
            else
            {
                Console.WriteLine("Операцiя вiдношення \"==\" не виконується");
                rez = 0;
            }
            return rez;
        }
    }
}
