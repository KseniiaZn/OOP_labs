#include "Task1.h"
#include <iostream>

using namespace std;

Row::Row(char* arr) {
	_size = strlen(arr);
	this->_row = new char[_size];
	for (int i = 0; i < _size; i++) {
		this->_row[i] = arr[i];
	}
}
Letters_Row::Letters_Row(char* _row) :
	Row(_row)
{
	this->_size = _size;
}

void Letters_Row::Sort() {
	for (int i = 0; i < _size; i++) {
		for (int j = 0; j < _size - 1; j++) {
			if (_row[j] > _row[j + 1]) {
				int temp = _row[j];
				_row[j] = _row[j + 1];
				_row[j + 1] = temp;
			}
		}
	}
}


void Row::print() {
	for (int i = 0; i < _size; i++) {
		cout << _row[i];
	}cout << endl;
}

int Row::length() {
	return _size;
}