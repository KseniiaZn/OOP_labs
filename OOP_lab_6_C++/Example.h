#include <iostream>
using namespace std;
class Example {
	private:
		double _a;
		double _c;
		double _d;
	public:
		Example(); //������. �� ������������� �������� ���� ���������
		Example(double a, double c, double d); //������., �������� �-�� ���������
		double Result(); //������� ���������
		void reset_operands(double a, double c, double d); //��� ���� ��� ���������� ���������
		double get_operand(char X); //��� ���� ��� �������� ����-���� � ���������
};