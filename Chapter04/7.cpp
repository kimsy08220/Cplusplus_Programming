#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

//int main(void)
//{
//	int r, cnt = 0;
//	Circle circle[3];
//
//	for (int i = 0; i < 3; i++) {
//		cout << "�� " << i + 1 << "�� ������ >> ";
//		cin >> r;
//		circle[i].setRadius(r);
//		if (circle[i].getArea() > 100)
//			cnt++;
//	}
//	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�." << endl;
//}

int main(void)
{
	int r, cnt = 0;
	Circle* p = new Circle[3];

	for (int i = 0; i < 3; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		p[i].setRadius(r);
		if (p[i].getArea() > 100)
			cnt++;
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�." << endl;
}