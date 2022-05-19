#include <iostream>
#include <string>
using namespace std;

class LoopAddr {
	string name;
	int x, y, sum;
	void read();
	void write();
protected:
	LoopAddr(string name = "") {
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public:
	void run();
};

void LoopAddr::read() {
	cout << name << ":" << endl;
	cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
	cin >> x >> y;
}

void LoopAddr::write() {
	cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다." << endl;
}

void LoopAddr::run() {
	read();
	sum = calculate();
	write();
}

class ForLoopAddr : public LoopAddr {
	string name;
public:
	ForLoopAddr(string name) : LoopAddr(name) {
		this->name = name;
	}
	int calculate() {
		int sum = 0;
		for (int i = getX(); i <= getY(); i++)
			sum += i;
		return sum;
	}
};

int main(void) {
	ForLoopAddr forLoop("For Loop");
	forLoop.run();
}