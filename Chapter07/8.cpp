#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " ÀÎ ¿ø" << endl; }
	friend Circle& operator++(Circle& a);
	friend Circle operator++(Circle& a, int n);
};

Circle& operator++(Circle& a) {
	a.radius++;
	return a;
}

Circle operator++(Circle& a, int n) {
	Circle tmp = a;
	a.radius++;
	return tmp;
}

int main(void) {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}