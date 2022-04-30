#include <iostream>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) {
		this->radius = radius;
		this->name = name;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
	string getName() {
		return name;
	}
};

class CircleManager {
	Circle* p;
	int size;
	string name;
	int radius;
public:
	CircleManager(int size) {
		p = new Circle[size];
		this->size = size;
		for (int i = 0; i < size; i++) {
			cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
			cin >> name >> radius;
			p[i].setCircle(name,radius);
		}
	}
	~CircleManager() { delete[] p; }
	void searchByName() {
		cout << "검색하고자 하는 원의 이름 >> ";
		cin >> name;
		for (int i = 0; i < size; i++) {
			if (name == p[i].getName())
				cout << name << "의 면적은 " << p[i].getArea() << endl;
		}
	}
	void searchByArea() {
		cout << "최소 면적을 정수로 입력하세요 >> ";
		cin >> radius;
		cout << radius << "보다 큰 원을 검색합니다." << endl;;
		for (int i = 0; i < size; i++) {
			if (radius < p[i].getArea())
				cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ",";
		}
	}
};

int main(void) 
{
	int num;
	cout << "원의 개수 >> ";
	cin >> num;
	
	CircleManager circles(num);
	circles.searchByName();
	circles.searchByArea();
}