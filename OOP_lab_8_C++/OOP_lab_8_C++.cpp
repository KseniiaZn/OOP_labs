#include <iostream>
#include <string>
using namespace std;

int numb_quant(string row); //ф-ція визначення кількості цифр в рядку

int main() {
	setlocale(LC_CTYPE, "ukr");
	cout << "Зiнкова Ксенiя, IC-92" << endl;
	string row;
	cout << "Задайте рядок: ";
	getline(cin, row);   //отримуємо рядок від користувача

	int(*fooPointer1)(string row);  //оголошую вказівник на ф-цію з заданими параметрами
	fooPointer1 = numb_quant;       //присвоюю вказівнику ф-цію

	cout << "Кiлькiсть цифер у введеному рядку: "<<fooPointer1(row); //викликаю ф-цію через вказівник на неї

	return 0;
}
int numb_quant(string row) {
	int counter = 0;
	for (int i = 0; i < row.length(); i++) {
		if (row[i] >= 48 && row[i] <= 57) {    //рахуємо к-ть цифер, повертаємо її функцією
			counter++;
		}
	}
	return counter;
}