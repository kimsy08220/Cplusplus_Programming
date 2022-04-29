#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main(void)
{
	int num, r, cnt = 0;
	cout << "���� ���� >> ";
	cin >> num;

	Circle* p = new Circle[num];
	for (int i = 0; i < num; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		p[i].setRadius(r);
		if (p[i].getArea() > 100)
			cnt++;
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�." << endl;
}