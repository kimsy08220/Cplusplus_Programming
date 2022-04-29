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
	cout << "원의 개수 >> ";
	cin >> num;

	Circle* p = new Circle[num];
	for (int i = 0; i < num; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		p[i].setRadius(r);
		if (p[i].getArea() > 100)
			cnt++;
	}
	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다." << endl;
}