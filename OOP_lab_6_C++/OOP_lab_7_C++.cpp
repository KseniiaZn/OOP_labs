#include <iostream>
#include "Example.h"
using namespace std;

int main()
{
	cout << "Kseniia Zinkova, IS-92, LW 6" << endl << endl;

	//пaраметри: a, c, d; d має бути додатнім та (с+а) != 1

	Example my_examp_1; // конструктор за замочуванням заповнює поля одиницями
	Example my_examp_2(4, -5, 6);
	Example my_examp_3(-1, 1, 9);
	my_examp_3.reset_operands(23, -22, 8); //помiняємо поля 3-го об'єкта
	int n = 3;
	Example* mas = new Example[n];
	mas[0] = my_examp_1;
	mas[1] = my_examp_2;
	mas[2] = my_examp_3;
	for (int i = 0; i < n; i++)
	cout << i + 1 << " result: " << mas[i].Result() << endl;
}
