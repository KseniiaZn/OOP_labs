// OOP_lab_4_C# || Zinkova Kseniia || IS-92
using System;

namespace OOP_lab_4_Csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr1 =  { 1, 2, 3, 5, 6, 7, 8, 9, 10 };

            Row C1 = new Row(arr1, 9);
            Row C2 = new Row();
            Row C3 = new Row(C2);

            Console.WriteLine("Given rows: ");
            C1.print();
            C2.print();
            C3.print();

            C2.Rewrite(C2 - 5);
            Console.WriteLine("\n Rows after deducting 5 from C2: ");
            C1.print();
            C2.print();
            C3.print();

            C1.Rewrite(C2 + C3);
            Console.WriteLine("\n Rows after substitutions C1 with the sum of C2 & C3: ");
            C1.print();
            C2.print();
            C3.print();
        }
        
    }
}