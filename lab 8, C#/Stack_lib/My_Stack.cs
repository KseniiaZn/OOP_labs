//стек на основі зв'язнного списку
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Stack_lib
{
    internal class My_Stack <T>
    {
        public delegate void IsEmptyEvent();  //делегат, що описує метод обробки події
        public event IsEmptyEvent IsEmpty = null;  //визначаємо подію

        private Node<T> head; //вершина стеку
        private int count; //кількість символів в стеку (точок)

        public bool IsEmpty_exp   //перевірка чи не порожній стек для винятків
        {
            get { return count == 0; }
        }
        public void Is_Empty()     //ф-ція методу обробки події
        {
            if(count == 0)
            {
                Console.WriteLine("==========the stack is empty!===========");
            }
        }
        public int Count   //отримати к-ть елементів
        {
            get { return count; }
        }

        public void Push(T item) //додати елемент в стек
        {
            Node<T> node = new Node<T>(item); //створюємо точку з переданим значенням
            node.Next = head; // переустанавливаем верхушку стека на новый элемент
            head = node;
            count++; //збільшуємо к-ть вершин
        }
        public T Pop() //видалити вершину, повернувши її значення
        {
            if (IsEmpty_exp)
                throw new InvalidOperationException("Error! Empty stack");
            Node<T> temp = head;
            head = head.Next; // верхівка стеку "пересувається" на паступний елемент
            count--;          //збільшуємо к-ть вершин
            if (IsEmpty != null)
            {
                IsEmpty();
            }
            return temp.Data;
        }
        public T Peek()   //отримати вершину
        {
            if (IsEmpty_exp)
                throw new InvalidOperationException("Error! Empty stack");
            return head.Data;
        }
    }
}