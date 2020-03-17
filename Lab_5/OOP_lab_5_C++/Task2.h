//Фігура - базовий клас; коло, еліпс - похідні класи; 
//Віртуальні методи обрахунку площі та довжини
#include <math.h>
class figure
{
protected:
	double _x, _y;
public:
	figure(double a = 0, double b = 0) {
		_x = a; _y = b;
	}
	virtual double area() {
		return(0); // за замовчуванням
	} 
	virtual double length() {
		return(0);
	}
};

class circle : public figure { //тут _х - радіус
public:
	circle(double a = 0) : figure(a, 0) {};
	double area() {
		return(3.1415 * _x * _x);
	}
	double length() {
		return(2 * 3.1415 * _x);
	}
};

class elipse : public figure { //тут _х та _у - піввісі
public:
	elipse(double a1 = 0, double a2 = 0) : figure(a1, a2) {};
	double area() {
		return(3.1415 * _x * _y);
	}
	double length() {
		return(2 * 3.1415 * sqrt((pow(_x, 2) + pow(_y, 2)) / 2));
	}
};