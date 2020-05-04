using System;

namespace OOP_lab_6_Csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            //пaраметри: a, c, d; d має бути додатнім та (с+а) != 1
            Console.WriteLine("Kseniia Zinkova, IS-92, LW 6");
            Example my_examp_1 = new Example(); // конструктор за замочуванням заповнює поля одиницями
            Example my_examp_2 = new Example(4, -5, 6);
            Example my_examp_3 = new Example(1, 1, 1);
            my_examp_3.reset_operands(-1, 2, 8); //помiняємо поля 3-го об'єкта
            int n = 3;
            Example []mas = new Example[n];
            mas[0] = my_examp_1;
            mas[1] = my_examp_2;
            mas[2] = my_examp_3;
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine((i+1) + " Result: " + mas[i].Result());
            }
        }
    }
}
