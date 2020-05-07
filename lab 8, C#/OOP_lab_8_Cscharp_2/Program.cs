using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Stack_lib;

namespace OOP_lab_8_Cscharp_2
{
    class Program
    {
        static void Main(string[] args)
        {
            My_Stack<string> my_Stack = new My_Stack <string>(); //створюємо стек типу стрінг

            my_Stack.Is_Empty += my_Stack.IsEmpty;      //підписуємося на подію

            my_Stack.Push("Хаскi");
            my_Stack.Push("Йоркширський тер'єр");

            for (int i = 0; i <= my_Stack.Count; i++) // видаляємо всі елементи + 1, при видаленні "+ 1" маємо подію - пустий стек 
            {
                Console.WriteLine(my_Stack.Peek()); //виводимо поточну вершину стека
                my_Stack.Pop();                     //видаляємо поточну вершину стека
            }
            
            //якщо спробуємо видалити ще елемент, отримаємо виняток:
            //my_Stack.Pop();

            Console.ReadKey();
        }
    }
}
