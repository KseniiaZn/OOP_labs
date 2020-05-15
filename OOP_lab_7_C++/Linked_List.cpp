#include <iostream>
#include"Linked_List.h"
using namespace std;

void LinkedList::addNode(double val) {
	Node* newnode = new Node();
	newnode->data = val;
	newnode->next = NULL;
	if (head == NULL) {      //���� ������ ������� - ����� ������� ���� �������
		head = newnode;
	}
	else {
		Node* temp = head;            //���� � ������ ��� � �������� 
		while (temp->next != NULL) {
			temp = temp->next;        //��������� �� ���� ������ - �� ������� ������
		}
		temp->next = newnode;         //��������� �������� �� ��� �����, ��������� ���� �� ������
	}
	size++;
}

void LinkedList::display() {
	if (head == NULL) {          //���� ������ ������� �������� ���� ��
		std::cout << "List is empty!" << endl;
	}
	else {
		Node* temp = head;       //���� � ������ � �������� - ��������� �� �������� ��������� �� ����������
		while (temp != NULL) {   // ��������(� ����� ���� NULL��������� �� ��������� ����.) � �������� �� �� �����
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
		delete temp;
	}
}

double LinkedList::middle_Value() {
	if (head == NULL) {                //���� ������ �������
		cout << "List is empty!" << endl;
		return 0;
	}
	else {
		double sum = 0;             //���� ��� ��������
		int counter = 0;            //�-�� ��������
		Node* temp = head;
		while (temp != NULL) {      //���� �� ����� �� ���� ������ ������� �� ���� �������� � �������� ���� ������
			sum += temp->data;
			temp = temp->next;
			counter++;
		}
		double res = sum / counter;  //������ ������ �����������
		delete temp;
		return res;
	}
}

void LinkedList::bigger_than_middle_values() {
	bool all_equal = true;        //������, ��� �� �������� ���� ���� �� �������� ���
	if (head == NULL) {           //������� ���� ������ �������
		std::cout << "List is empty!" << endl;
	}
	else {
		cout << "\nElements, bigger than the middle value: ";
		double middle = middle_Value();
		Node* temp = head;
		int i = 0;
		while (temp != NULL) {   
			if (temp->data > middle) { //��������� �� ������, ��������� �������� � �������, ���� ��. �����, �� ��������
				cout << temp->data << " ";
				all_equal = false;   //���� ��� 1 ������� ����� ���������� - �� �� �������� ���
			}
			temp = temp->next;
		}
		if (all_equal) {             //������� ���� �� �������� ���
			cout << "All elements in Linked List are equal!" << endl;
		}
		delete temp;
	}
}

void LinkedList::del_pair_positions() {
	if (head == NULL) {   //���� ������ �������
		cout << "List is empty!" << endl;
	}
	else {         //��������� �������� �� �������� �� 1 �� ������ ������ (�� ����� �������� 
		           //�������� �������������, ���� ������ ������� ���� � ��., �� ������ �� ������ ��������
		for (int i = 1; i < size; i++) {
			del(i);
		}
	}
}
void LinkedList:: del(int n) // n - ������� ��������, �� ���������
{
	if ((head != NULL) && (n < size) && (n >= 0)) //��� �� n ���� ������ � ��� ������� �������� ������
	{
		Node* temp = head, * helping = head;

		for (int i = 0; i < n; i++) {
			helping = temp;   //�������� �������� - temp
			temp = temp->next;
		}

		if (temp == head) {    //���� ���������� ������� ������
			head = temp->next;
		}
		else {
			helping->next = temp->next;
		}
		delete(temp);
		size--;               //���� ��������� �������� ����� ������
	}
}