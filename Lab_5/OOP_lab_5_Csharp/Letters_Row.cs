//Похідний клас - буквенні рядки (констр. з параметром, сортування)
using System;
using System.Collections.Generic;
using System.Text;

namespace OOP_lab_5_Csharp
{
    class Letters_Row : Row
    {
        public Letters_Row(char[] arr) : base (arr) {
        }
        public void Sort() {
            for (int i = 0; i < _size; i++) {
                for (int j = 0; j < _size - 1; j++) {
                    if (_row[j] > _row[j + 1]) {
                        char temp = _row[j];
                        _row[j] = _row[j + 1];
                        _row[j + 1] = temp;
                    }
                }
            }
        }
    }
}