using System;
using System.Collections.Generic;
using System.Text;

namespace OOP_lab_4_Csharp
{
    public class Row
    {
        private int[] _row;
        private int _size;

        public int length()
        {
            return _size;
        }
        public Row()
        {
            Random rnd = new Random();
            _size = 10;
            this._row = new int[_size];
            for (int i = 0; i < _size; i++)
            {
                this._row[i] = rnd.Next(0, 20);
            }
        }
        public Row(int[] row, int n)
        {
            init(row, n);
        }
        public void init(int[] arr, int n)
        {
            _size = n;
            this._row = new int[_size];
            for (int i = 0; i < _size; i++)
            {
                this._row[i] = arr[i];
            }
        }
        public void print()
        {
            for (int i = 0; i < _size; i++)
            {
                Console.Write(_row[i] + " ");
            }
            Console.WriteLine(" ");
        }
        public Row(Row other)
        {
            this._size = other._size;
            this._row = new int[_size];
            for (int i = 0; i < _size; i++)
            {
                this._row[i] = other._row[i];
            }

        }
        public void Rewrite(Row other)
        {
            this._size = other._size;
            this._row = new int[_size];
            for (int i = 0; i < _size; i++)
            {
                this._row[i] = other._row[i];
            }
        }
        public static Row operator -(Row my_row, int n)
        {
            Row temp = new Row();
            for (int i = 0; i < my_row._size; i++)
            {
                temp._row[i] = my_row._row[i] - n;
            }
            return temp;
        }
        public static Row operator +(Row my_row, Row other)
        {
            Row temp = new Row();
            for (int i = 0; i < my_row._size; i++)
            {
                temp._row[i] = my_row._row[i] + other._row[i];
            }
            return temp;
        }
    }
}