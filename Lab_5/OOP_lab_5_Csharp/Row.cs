//Базовий клас - рядки (констр. з параметром, обчислення довжини)
using System;
using System.Collections.Generic;
using System.Text;

namespace OOP_lab_5_Csharp
{
    class Row
    {
        protected char[] _row = { };
        protected int _size;
        public void print()
        {
            for (int i = 0; i < _size; i++)
            {
                Console.Write(_row[i]);
            }
            Console.WriteLine();
        }
        public int length()
        {
            return _size;
        }
        public Row(char[] arr)
        {
            _size = arr.Length;
            this._row = new char[_size];
            for (int i = 0; i < _size; i++)
            {
                this._row[i] = arr[i];
            }
        }

    }
}