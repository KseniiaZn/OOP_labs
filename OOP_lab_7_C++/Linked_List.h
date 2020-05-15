#include <iostream>
using namespace std;

class Node {     //клас вузла 
public:
	double data; //дані вузла
	Node* next;  //посилання на наступний вузол
};

class LinkedList {
public:
	LinkedList() {       // конструктор
		head = NULL;
	}
	~LinkedList() {};    // деструктор
	void addNode(double val);    //додавання вузла в кінець списку
	void display();              //виведення списку в консоль
	double middle_Value();       //обрахунок середнього значення
	void bigger_than_middle_values();
	void del_pair_positions();   //видалення вузлів з парних позицій
	void del(int n);             //видалення вузла зі вказаної позиції
private:
	Node* head;                  //вказівник на "голову" списку
	int size = 0;
};