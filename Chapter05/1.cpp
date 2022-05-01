#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius);
	int getRadius();
	void show();
};

Circle::Circle(int radius)
{
	this->radius = radius;
}

int Circle::getRadius()
{
	return radius;
}

void Circle::show()
{
	cout << "¹ÝÁö¸§ : " << radius << endl;
}

void swap(Circle &a, Circle &b)
{
	Circle tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int main(void)
{
	Circle c1(10), c2(20);
	c1.show();
	c2.show();

	swap(c1, c2);

	c1.show();
	c2.show();
}