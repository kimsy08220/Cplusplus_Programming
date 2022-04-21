#include <iostream>
using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a + b;
	}
};

class Sub {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a - b;
	}
};

class Mul {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a * b;
	}
};

class Div {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		if (b != 0)
			return a / b;
		else
			cout << "0으로 나눌 수 없습니다." << endl;
	}
};
