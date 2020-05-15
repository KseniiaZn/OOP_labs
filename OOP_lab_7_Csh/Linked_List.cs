using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_lab_7_Csh
{
    class Linked_List
    {
        private Node head;  //голова списку
        private int size;

        public void printAllNodes()  //ф-ція виводу списку на екран
        {
            Node current = head;
            while (current != null) { //проходимо по ланцюгу елементів, в процесі виводимо елементи на екран
                Console.Write(current.data + " ");
                current = current.next;
            }
            Console.WriteLine("");
        }
        /*public void AddFirst(double data) //ф-ція додавання елемнету в голову списка
        {
            Node toAdd = new Node();
            toAdd.data = data;
            toAdd.next = head;
            head = toAdd;
            size++;
        }*/
        public void AddLast(double data) //ф-ція додавання елемента в хвіст списка
        {
            if (head == null) {  //якщо список пустий, елемент, що додаємо буде головою
                head = new Node();
                head.data = data;
                head.next = null;
            }
            else {
                Node toAdd = new Node();
                toAdd.data = data;

                Node current = head;
                while (current.next != null) {  //проходимо до крпйнього елементу по ланцюгу
                    current = current.next;     //додаємо створений вузол після крайнього елементу
                }
                current.next = toAdd;
            }
            size++;
        }
        public double middle_Value() //ф-ція обрахунку середнього арефметичного
        {
            double sum = 0, counter = 0;
            if (head == null) {            //випадок якщо список пустий
                Console.WriteLine("Cписок пустий");
                return 0;
            }
            else {
                Node current = head;
                while (current != null) {  //проходимо по ланцюгу до кінця списку 
                    sum += current.data;   //в процесі додаємо елементи в загальну суму
                    current = current.next;
                    counter++;
                }
            }
            double res = sum / counter;
            return res;
        }
        public void bigger_than_value(double value) //ф-ція виводу елементів, що більші за вказане значення
        {
            Node current = head;
            while (current != null) {
                if (current.data > value) {
                    Console.Write(current.data + " ");
                }
                current = current.next;
            }
            Console.WriteLine("");
        }
        public void delete(int position) //ф-ція видалення ел. з заданої позиції
        {
            if (head == null) { //якщо намагаємось видалити з порожнього списку - виключення
                throw new InvalidOperationException("Список порожній, нема що видаляти!");
            }

            if ((head != null) && (position < size) && (position >= 0)) //якщ під n щось лежить і цей елемент всередині списку
            {
                Node temp = head, helping = head;

                for (int i = 0; i < position; i++) {
                    helping = temp;   //попереднє значення - temp
                    temp = temp.next;
                }

                if (temp == head) {    //якщо видаляємий елемент перший
                    head = temp.next;
                }
                else {
                    helping.next = temp.next;
                }
                size--;               //після процедури зменшуємо розмір списка
            }
        }
        public void del_from_pair_pos() //ф-ція видалення ел. з парних позицій
        {
            if (head == null) {   //якщо список порожній - виключення
                throw new InvalidOperationException("Список порожній, нема що видаляти!");
            }
            else {         //видаляємо елементи під індексом від 1 до розміру списка (на кожній ітерації 
                      //елементи зсуватимуться, тому будуть видалені лише ті ел., що стоять на парних позиціях
                for (int i = 1; i < size; i++) {
                    delete(i);
                }
            }

        }
    }
}
