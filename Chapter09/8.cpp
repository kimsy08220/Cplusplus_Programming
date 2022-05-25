#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
	string name;
	int width, height;
public:
	Shape(string n = "", int w = 0, int h = 0) {
		this->name = n;
		this->width = w;
		this->height = h;
	}
	virtual double getArea() = 0;
	string getName() { return name; }
};

class Oval : public Shape {
public:
	Oval(string name, int width, int height) : Shape(name, width, height) {}
	double getArea() { return width * height * 3.14; }
};

class Rect : public Shape {
public:
	Rect(string name, int width, int height) : Shape(name, width, height) {}
	double getArea() { return width * height; }
};

class Triangular : public Shape {
public:
	Triangular(string name, int width, int height) : Shape(name, width, height) {}
	double getArea() { return width * height / 2; }
};

int main(void) {
	Shape* p[3];
	p[0] = new Oval("빈대떡", 10, 20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangular("토스트", 30, 40);
	
	for (int i = 0; i < 3; i++)
		cout << p[i]->getName() << "넓이는 " << p[i]->getArea() << endl;
	for (int i = 0; i < 3; i++)
		delete p[i];
}
