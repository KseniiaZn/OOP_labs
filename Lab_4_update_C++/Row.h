#include <iostream>
using namespace std;
class Row {
private:
	int* _row = {};
	int _size;
public:

	int length();
	Row(); //конструктор за замовчуванням - 10 рандомних чисел
	Row(char* row, int n); //конструктор, в який передаємо готовий масив
	Row(const Row& other); //конструктор копіювання
	~Row();

	void init(char* arr, int n); //ініціалізація об'єкта переданим масивом
	void print();

	void Rewrite(const Row& other); //конструктор копіювання

	Row operator +(const Row& other); //превантеження оператора "+" щоб складати 2 об'єкти
	Row operator -(int n); //превантеження оператора "-" віднімати якесь число від елементів об'єкта
};

