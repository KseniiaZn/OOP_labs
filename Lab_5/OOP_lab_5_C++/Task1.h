//������� ���� - ����� (������. � ����������, ���������� �������)
//�������� ���� - ������� ����� (������. � ����������, ����������)

class Row {
protected:
	char* _row = {};
	int _size;
public:
	int length();     //������� �������
	Row(char* arr);
	void print();
};

class Letters_Row : public Row {
public:
	Letters_Row(char* arr);  //������., �� ������ ��������� � ������.  �������� �����  
	void Sort();             //���������� �� ����������
};