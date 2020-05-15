#include <iostream>
using namespace std;

class Node {     //���� ����� 
public:
	double data; //��� �����
	Node* next;  //��������� �� ��������� �����
};

class LinkedList {
public:
	LinkedList() {       // �����������
		head = NULL;
	}
	~LinkedList() {};    // ����������
	void addNode(double val);    //��������� ����� � ����� ������
	void display();              //��������� ������ � �������
	double middle_Value();       //��������� ���������� ��������
	void bigger_than_middle_values();
	void del_pair_positions();   //��������� ����� � ������ �������
	void del(int n);             //��������� ����� � ������� �������
private:
	Node* head;                  //�������� �� "������" ������
	int size = 0;
};