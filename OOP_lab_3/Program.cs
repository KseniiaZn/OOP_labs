// OOП | Лаб.роб. №3 | Зінкової Ксенії | IC-92
using System;

namespace OOP_lab_3
{
    class Program
    {
        static void Main(string[] args)
        {
            Matrix my_mas = new Matrix(4, 5);
            my_mas.Rand();
            my_mas.Print();
            Console.WriteLine("Середнє квадратичне елементiв 1-го рядка: " + my_mas[0]);
            my_mas.SetSum();
            Console.WriteLine("Сума всiх елементiв масива: " + my_mas.Sum);
        }
    }

    public class Matrix
    {
        private int[,] data;

        private int m;
        public int M { get => this.m; }

        private int n;
        public int N { get => this.n; }
          
        public Matrix(int m, int n)
        {
            this.m = m;
            this.n = n;
            this.data = new int[m, n];
        }

        private int sum;
       public void SetSum()
        {
            for (var i = 0; i < this.M; i++)
            {
                for (var j = 0; j < this.N; j++)
                {
                    sum += data[i, j];
                }
            }
        }
        public int Sum
        {
            get
            {
                return this.sum;
            }
        }
        public void Rand()      //Заповнення матриці рандомними числами
        {
            Random rnd = new Random();
            for (var i = 0; i < this.M; i++) {
                for (var j = 0; j < this.N; j++) {
                    data[i, j] = rnd.Next(1, 10);
                }
            }
        }
        public void Print ()   //Вивід матриці
        {
            for (var i = 0; i < this.M; i++) {
                for (var j = 0; j < this.N; j++) {
                    Console.Write("{0} ", data[i, j]);
                }
                Console.WriteLine("\t");
            }
        }
        public double this[int i] //Iндексатор 
        {
            get {
                double mid = 0;
                for (int j = 0; j < n; j++)
                mid += Math.Pow(data[i, j], 2);
                mid /= n;
                mid = Math.Sqrt(mid);
                return mid;
            }
        }
    }
}