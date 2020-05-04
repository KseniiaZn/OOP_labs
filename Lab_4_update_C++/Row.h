#include <iostream>
using namespace std;
class Row {
private:
	int* _row = {};
	int _size;
public:

	int length();
	Row(); //����������� �� ������������� - 10 ��������� �����
	Row(char* row, int n); //�����������, � ���� �������� ������� �����
	Row(const Row& other); //����������� ���������
	~Row();

	void init(char* arr, int n); //����������� ��'���� ��������� �������
	void print();

	void Rewrite(const Row& other); //����������� ���������

	Row operator +(const Row& other); //������������� ��������� "+" ��� �������� 2 ��'����
	Row operator -(int n); //������������� ��������� "-" ������� ����� ����� �� �������� ��'����
};

