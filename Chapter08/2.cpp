#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius=0, string name="") {
		setRadius(radius);
		this->name = name;
	}
	void setName(string name) { this->name = name; }
	string getName() { return name; }
	void show() {
		cout << "�������� " << getRadius() << "�� " << name << endl;
	}
};

int main(void) {
	string name;
	int radius;
	NamedCircle pizza[5];

	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i+1 << ">> ";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}

	double max = pizza[0].getArea();
	int maxIndex;
	for (int i = 1; i < 5; i++) { 
		if (max < pizza[i].getArea()) {
			max = pizza[i].getArea();
			maxIndex = i;
		}
	}
	cout << "���� ������ ū ���ڴ� " << pizza[maxIndex].getName() << "�Դϴ�." << endl;
}