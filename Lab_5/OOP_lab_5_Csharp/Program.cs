//ООП || ЛP №5 || Зінкової Ксенії || C#
using System;

namespace OOP_lab_5_Csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("=============== Task 1 ===============\nGiven row:");
            char [] arr1 = { '7', 'c', 'b', ' ', 'a', 'a', 'k', '\0' };
            Letters_Row C2 = new Letters_Row(arr1); //об'єкт похідного від рядків класу - буквений рядок
            C2.print();

            C2.Sort();
            Console.WriteLine("Sorted row: ");
            C2.print();
            Console.WriteLine("Length: " +  C2.length());

            Console.WriteLine("=============== Task 2 ===============");
            figure []f = new figure[2];      //створюємо масив об'єктів базового класу
            circle cir = new circle(5);     //коло
            elipse elip = new elipse(5, 6); //еліпс
            double area_1, area_2, length_1, length_2;

            f[0] = cir;
            f[1] = elip;

            area_1 = f[0].area();
            area_2 = f[1].area();
            length_1 = f[0].length();
            length_2 = f[1].length();

            Console.WriteLine("Area of circle: " + area_1);
            Console.WriteLine("Area of elipse: " + area_2);
            Console.WriteLine("Length of circle: " + length_1);
            Console.WriteLine("Length of elipse: " + length_2);
        }
    }
}