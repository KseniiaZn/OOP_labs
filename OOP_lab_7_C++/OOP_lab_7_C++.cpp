#include <iostream>
#include"Linked_List.h"
using namespace std;

int main() {
	cout << "Zinkova Kseniia, IS-92" << endl;
	LinkedList* list = new LinkedList();

	list->addNode(1.34);                  //заповнюю список значеннями типу double
	list->addNode(2.423);
	list->addNode(3.1);
	list->addNode(4.121);
	list->addNode(5.77);

	cout << "\nLinked List data: " << endl;
	list->display();                                                        //вивід списку на екран
	cout << "\nMiddle value of the List: " << list->middle_Value() << endl; //вивід середнього значення на екран

	list->bigger_than_middle_values();                                      //вивід елементів, що більші за середнє значення  

	cout << endl << "\nLinked List after deleting items from paired positions:" << endl;
	list->del_pair_positions();                                 //видалення елементів з парних позицій
	list->display();          

	delete list;
	return 0;
}