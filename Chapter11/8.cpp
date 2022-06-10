#include <iostream>
#include <string>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius = 1, string name = "") {
		this->radius = radius;
		this->name = name;
	}
	friend istream& operator >> (istream& ins, Circle& a);
	friend ostream& operator << (ostream& stream, Circle a);
};

istream& operator >> (istream& ins, Circle& a) {
	cout << "������ >> ";
	ins >> a.radius;
	cout << "�̸� >> ";
	ins >> a.name;
	return ins;
}

ostream& operator << (ostream& stream, Circle a) {
	stream << "(������ " << a.radius << "�� " << a.name << ")";
	return stream;
}

int main(void) {
	Circle d, w;
	cin >> d >> w;
	cout << d << w << endl;
}