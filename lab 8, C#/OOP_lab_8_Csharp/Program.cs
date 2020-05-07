using System;
using static OOP_lab_8_Csharp.Row;

namespace OOP_lab_8_Csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("========Zinkova Kseniia, IS-92=========\n");
            Console.Write("Enter a row: ");
            string entered_row = Console.ReadLine(); //зчитуємо введений ряддок
            Row my_row = new Row(entered_row);       //створюємо об'єкт

            Console.WriteLine("Quantity of numbers in the row by static method: " + Row.numb_quant_s(entered_row));//рахуємо цифри статичним методом

            numb_quant_d d1 = new numb_quant_d(my_row.numb_quant); //створюємо делегат, ссилаємося на екземплярний метод
            Console.WriteLine("Quantity of numbers in the row by delegate and static method: " + d1());//рахуємо цифри з використанням делегату
        }
        //------------------------------------------------------TASK 2---------------------------------------------------------------------------------
    }
}
