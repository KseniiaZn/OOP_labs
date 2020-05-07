using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Stack_lib
{
    class Node<T>
    {
        public Node(T data) //конструктор ініціалізації точки значенням
        {
            Data = data;
        }
        public T Data { get; set; }
        public Node<T> Next { get; set; } //значення наступної точки, оскільки стек зв'язний
    }
}