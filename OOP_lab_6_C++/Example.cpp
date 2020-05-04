#include <iostream>
#include "Example.h"
using namespace std;


Example :: Example() {
	this->_a = 1;
	this->_c = 1;
	this->_d = 1;
}
Example :: Example(double a, double c, double d) {

	this->_a = a;
	this->_c = c;
	this->_d = d;
}
double Example :: Result() {
	try 
	{
		if ((_c + _a - 1) == 0)
		{
			throw 1;
		}
		else 
		{ 
			try
			{
				if (42 / _d < 0) 
				{
					throw 1;
				}
				else return (2 * _c - _d * sqrt(42 / _d)) / (_c + _a - 1);
			}
			catch (int i) {
				cout << "========ERROR. Negative under-sqrt value=======" << endl;
				exit(0);
			}
		}
	}
	catch (int i) 
	{
		cout << "========ERROR. Deviding by zero========" << endl;
		exit(0);
	}
}
double Example::get_operand(char X) {
	if (X =='a' || X == 'A')
	{
		return this->_a;
	}
	if (X == 'c' || X == 'C')
	{
		return this->_c;
	}
	if (X == 'd' || X == 'D') 
	{
		return this->_d;
	}
}
void Example::reset_operands(double a, double c, double d) {
	this->_a = a;
	this->_c = c;
	this->_d = d;
}