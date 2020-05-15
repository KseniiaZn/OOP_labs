using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_lab_7_Csh
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Зiнкова Ксенiя, IС-92\n");

            Linked_List list = new Linked_List();
            list.AddLast(1.11);     //додаємо елементи в список
            list.AddLast(2.22);
            list.AddLast(3.22);
            list.AddLast(4.44);
            list.AddLast(5.55);

            Console.WriteLine("Вхiдний зв'язний список:");
            list.printAllNodes();    //ф-ція виводу списку

            Console.Write("\nСереднє значення елементiв списку: " + list.middle_Value() + "\n"); //обрахунок середнього з-ня
            Console.Write("\nЕлементи списку, що бiльшi за середнє значення: ");
            list.bigger_than_value(list.middle_Value());  //ф-ція виводу елементів, більших за вказаний

            Console.WriteLine("\nЗв'язний список пiсля видалення елементiв з парних позицiй:");
            list.del_from_pair_pos();                     //ф-ція видалення ел. з парних позицій
            list.printAllNodes();

            Console.ReadKey();
        }
    }
}
