//ООП || ЛP №5 || Зінкової Ксенії || C++
#include <iostream>
#include "Task1.h"
#include "Task2.h"
using namespace std;

int main()
{
	cout << "=============== Task 1 ===============" << endl << "Given row:" << endl;
	char arr1[] = { '7', 'c', 'b', ' ', 'a', 'a', 'k', '\0'};
	Letters_Row C2(arr1); //об'єкт похідного від рядків класу - буквений рядок
	C2.print();

	C2.Sort();
	cout << "Sorted row: " << endl;
	C2.print();
	cout << "Length: " << C2.length() << endl;
	cout << "=============== Task 2 ===============" << endl;

	figure* f[2];      //створюємо масив об'єктів базового класу
	circle cir(5);     //коло
	elipse elip(5, 6); //еліпс
	double area_1, area_2, length_1, length_2;

	f[0] = &cir;    
	f[1] = &elip;

	area_1 = f[0]->area();
	area_2 = f[1]->area();
	length_1 = f[0]->length();
	length_2 = f[1]->length();

	cout << "Area of circle: " << area_1 << endl;
	cout << "Area of elipse: " << area_2 << endl;
	cout << "Length of circle: " << length_1 << endl;
	cout << "Length of elipse: " << length_2 << endl;

	return 0;
}