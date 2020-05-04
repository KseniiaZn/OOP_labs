#include "Row.h"
Row::Row() {
	_size = 10;
	this->_row = new int[_size];
	for (int i = 0; i < _size; i++) {
		this->_row[i] = rand() % 20;
	}
}

Row::Row(char* row, int n) {
	init(row, n);
}

Row::Row(const Row& other) {
	this->_size = other._size;
	this->_row = new int[_size];
	for (int i = 0; i < _size; i++) {
		this->_row[i] = other._row[i];
	}
}

void Row::init(char* arr, int n) {
	_size = n;
	this->_row = new int[_size];
	for (int i = 0; i < _size; i++) {
		this->_row[i] = arr[i];
	}
}

Row::~Row() {
	delete[] _row;
}

void Row::print() {
	for (int i = 0; i < _size; i++) {
		cout << _row[i] << " ";
	}

	cout << endl;
}

int Row::length() {
	return _size;
}

Row Row :: operator +(const Row& other) {
	Row temp;

	return temp;
	try {
		if (this->_size != other._size)
		{
			throw 1;
		}
		else {
			for (int i = 0; i < _size; i++) {
				temp._row[i] = this->_row[i] + other._row[i];
			}
			return temp;
		}
	}
	catch (int i) {
		cout << "ERROR!. Diferent length";
	}
}

void Row::Rewrite(const Row& other) {
	this->_size = other._size;
	this->_row = new int[_size];
	for (int i = 0; i < _size; i++) {
		this->_row[i] = other._row[i];
	}
}

Row Row :: operator -(int n) {
	Row temp;
	for (int i = 0; i < _size; i++) {
		temp._row[i] = this->_row[i] - n;
	}
	return temp;
}
