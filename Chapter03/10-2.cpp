#include <iostream>
#include "10-2.h"
using namespace std;

int main(void)
{
	Add a;
	Sub s;
	Mul m;
	Div d;

	int n1, n2;
	char c;

	while (1) {
		cout << "두 정수와 연산자를 입력하세요>> ";
		cin >> n1 >> n2 >> c;

		if (c == '+') {
			a.setValue(n1, n2);
			cout << a.calculate();
		}
		else if (c == '-') {
			s.setValue(n1, n2);
			cout << s.calculate();
		}
		else if (c == '*') {
			m.setValue(n1, n2);
			cout << m.calculate();
		}
		else if (c == '/') {
			d.setValue(n1, n2);
			cout << d.calculate();
		}
		cout << endl;
	}
}