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
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}

void LoopAddr::write() {
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�." << endl;
}

void LoopAddr::run() {
	read();
	sum = calculate();
	write();
}

class WhileLoopAdder : public LoopAddr {
	//string name;
public:
	WhileLoopAdder(string name) : LoopAddr(name) {}
	int calculate() {
		int sum = 0;
		int i = getX();
		while (i <=  getY()) {
			sum += i;
			i++;
		}
		return sum;
	}
};

class DoWhileLoopAdder : public LoopAddr {
	string name;
public:
	DoWhileLoopAdder(string name) : LoopAddr(name) {
		this->name = name;
	}
	int calculate() {
		int sum = 0;
		int i = getX();
		do {
			sum += i;
			i++;
		} while (i <= getY());
		return sum;
	}
};

int main(void)
{
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder dowhileLoop("Do while Loop");

	whileLoop.run();
	dowhileLoop.run();
}