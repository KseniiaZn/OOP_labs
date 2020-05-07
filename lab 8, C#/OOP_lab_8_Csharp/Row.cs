using System;
using System.Collections.Generic;
using System.Text;

namespace OOP_lab_8_Csharp
{
    class Row
    {
        private string _row;
        public delegate int numb_quant_d();    //делегат для будь-якої ф-ції з сигнатурю "int <nazva> ();"
        public Row (string row) //крнструктор з параметром
        {
            this._row = row;
        }
        //екземплярний метод (доступний лише через об'єкт-власника)
        public int numb_quant()
        {
            int counter = 0;
            for (int i = 0; i < this._row.Length; i++) {
                if (this._row[i] >= 48 && this._row[i] <= 57) {
                    counter++;
                }
            }
            return counter;
        }
        //статичний метод (не має об'єкта-ввласника, доступний лише через клас)
        public static int numb_quant_s(string row)
        {
            int counter = 0;
            for (int i = 0; i < row.Length; i++) {
                if (row[i] >= 48 && row[i] <= 57) {    
                    counter++;
                }
            }
            return counter;
        }
    }
}
