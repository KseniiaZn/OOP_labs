#include <iostream>
using namespace std;

void title();         //відомості про автора
void part_1(int& a);  //Лiчильник збiльшення на 1.
int part_2();         //Завдання 2. Oперацiя вiдношення "=="

int main()
{
	setlocale(LC_CTYPE, "ukr");
	title();
	cout << "Завдання 1. Лiчильник збiльшення на 1." << endl << "Введiть операнд: ";
	int x;
	cin >> x;
	part_1(x);
	cout <<endl << "Завдання 2. Oперацiя вiдношення \"==\"" << endl;
	part_2();
}
void part_1(int& a) {
	int idx = 0;
	while ((a & (1 << idx)) > 0) //перебираємо числа(ind), доки кон'юнкція А з pow(2, ind) дає додатнє число
		idx++;
	a ^= ((1 << (idx + 1)) - 1); //застосовуємо виключаюче або до А та pow(2, ind + 1) - 1
	cout << "Результат: " << a << endl;
}
int part_2() {
	int a, b;
	bool rez;
	cout << "Введiть перший операнд: ";
	cin >> a;
	cout << "Введiть другий операнд: ";
	cin >> b;
	if (!(a ^ b)) {//порівняння операндів виключаючим "або"
		cout << "Операцiя вiдношення \"==\" виконується" << endl;
		rez = true;
	}
	else {
		cout << "Операцiя вiдношення \"==\" не виконується" << endl;
		rez = false;
	}
	return rez;
}	
void title() {
	cout << "Лабоаторна робота №1 з дисциплiни ООП" << endl << "  студентки IС-92, Зiнкової Ксенiї" << endl;
	for (int i = 0; i < 37; i++) {
		cout << "=";
	} cout << endl;
}
