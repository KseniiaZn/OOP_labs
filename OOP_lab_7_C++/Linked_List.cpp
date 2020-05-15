#include <iostream>
#include"Linked_List.h"
using namespace std;

void LinkedList::addNode(double val) {
	Node* newnode = new Node();
	newnode->data = val;
	newnode->next = NULL;
	if (head == NULL) {      //якщо список порожній - даний елемент буде головою
		head = newnode;
	}
	else {
		Node* temp = head;            //якщо в списку вже є елементи 
		while (temp->next != NULL) {
			temp = temp->next;        //проходимо до кінці списку - всі позиції зайняті
		}
		temp->next = newnode;         //створюємо вказівник на наш вузол, приєднуючи його до списку
	}
	size++;
}

void LinkedList::display() {
	if (head == NULL) {          //якщо список порожній виводити нема що
		std::cout << "List is empty!" << endl;
	}
	else {
		Node* temp = head;       //якщо в списку є елементи - проходимо по ланцюжку вказівників до останнього
		while (temp != NULL) {   // елементу(у нього буде NULLпосилання на наступний елем.) і виводимо їх на екран
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
		delete temp;
	}
}

double LinkedList::middle_Value() {
	if (head == NULL) {                //якщо список порожній
		cout << "List is empty!" << endl;
		return 0;
	}
	else {
		double sum = 0;             //сума всіж елементів
		int counter = 0;            //к-ть елементів
		Node* temp = head;
		while (temp != NULL) {      //доки не дійшли до кінця списку плюсуємо по черзі елементи в загальну суму списку
			sum += temp->data;
			temp = temp->next;
			counter++;
		}
		double res = sum / counter;  //рахуємо середнє арифметичне
		delete temp;
		return res;
	}
}

void LinkedList::bigger_than_middle_values() {
	bool all_equal = true;        //помітка, яка не зміниться лище якщо всі елементи рівні
	if (head == NULL) {           //випадок якщо список порожній
		std::cout << "List is empty!" << endl;
	}
	else {
		cout << "\nElements, bigger than the middle value: ";
		double middle = middle_Value();
		Node* temp = head;
		int i = 0;
		while (temp != NULL) {   
			if (temp->data > middle) { //проходимо по списку, порівнюємо елементи з середнім, якщо ел. більше, то виводимо
				cout << temp->data << " ";
				all_equal = false;   //якщо хоч 1 елемент більше середнього - не всі елементи рівні
			}
			temp = temp->next;
		}
		if (all_equal) {             //випадок якщо всі елементи рівні
			cout << "All elements in Linked List are equal!" << endl;
		}
		delete temp;
	}
}

void LinkedList::del_pair_positions() {
	if (head == NULL) {   //якщо список порожній
		cout << "List is empty!" << endl;
	}
	else {         //видаляємо елементи під індексом від 1 до розміру списка (на кожній ітерації 
		           //елементи зсуватимуться, тому будуть видалені лише ті ел., що стоять на парних позиціях
		for (int i = 1; i < size; i++) {
			del(i);
		}
	}
}
void LinkedList:: del(int n) // n - позиція елементу, що видаляємо
{
	if ((head != NULL) && (n < size) && (n >= 0)) //якщ під n щось лежить і цей елемент всередині списку
	{
		Node* temp = head, * helping = head;

		for (int i = 0; i < n; i++) {
			helping = temp;   //попереднє значення - temp
			temp = temp->next;
		}

		if (temp == head) {    //якщо видаляємий елемент перший
			head = temp->next;
		}
		else {
			helping->next = temp->next;
		}
		delete(temp);
		size--;               //після процедури зменшуємо розмір списка
	}
}