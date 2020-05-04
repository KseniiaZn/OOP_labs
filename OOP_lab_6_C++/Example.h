#include <iostream>
using namespace std;
class Example {
	private:
		double _a;
		double _c;
		double _d;
	public:
		Example(); //констр. за замовчуванн€м заповнюЇ пол€ одиниц€ми
		Example(double a, double c, double d); //констр., передаЇмо з-н€ оператор≥в
		double Result(); //повертаЇ результат
		void reset_operands(double a, double c, double d); //дл€ того щоб перезадати оператори
		double get_operand(char X); //дл€ того щоб отримати будь-€кий з оператор≥в
};