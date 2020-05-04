// OOP_lab_4_C++ || Zinkova Kseniia || IS-92

#include <iostream>
#include <ctime>
#include "Row.h"
using namespace std;

int main() {
	srand(time(NULL));
	char arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	Row C1(arr1, 10); //тут використано констр. з параметрами,  в який передаємо масив та його розмір
	Row C2;  //тут використано констр. за замовчуванням
	Row C3(C2);  //конструктором копіювання копіюємо С2 в С3

	cout << "Given rows: " << endl;
	C1.print();
	C2.print();
	C3.print();

	C2.Rewrite(C2.operator-(5)); // або просто С2 - 5

	cout << endl << "Rows after deducting 5 from C2: " << endl;
	C1.print();
	C2.print();
	C3.print();

	C1.Rewrite(C2 + C3); //поміщаємо в С1 суму С2 та С3  // або С1.operator+(C2) 

	cout << endl << "Rows after substitutions C1 with the sum of C2 & C3: " << endl;
	C1.print();
	C2.print();
	C3.print();

	return 0;
}
