//Базовий клас - рядки (констр. з параметром, обчислення довжини)
//Похідний клас - буквенні рядки (констр. з параметром, сортування)

class Row {
protected:
	char* _row = {};
	int _size;
public:
	int length();     //повертає довжину
	Row(char* arr);
	void print();
};

class Letters_Row : public Row {
public:
	Letters_Row(char* arr);  //констр., що передає параметри в констр.  базового класу  
	void Sort();             //сортування за зростанням
};