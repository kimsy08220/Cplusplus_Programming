#include <iostream>
#include <string>
using namespace std;

class Printter {
protected:
	string model, mamufacturer;
	int printedCount, availableCount;
public:
	Printter(string model, string manu, int avlcnt) {
		this->model = model;
		this->mamufacturer = manu;
		this->availableCount = avlcnt;
	}
	virtual void print(int pages) = 0;
	virtual void show() = 0;
	int getAvlCount() { return availableCount; }
};

class InkJetPrinter : public Printter {
	int availableInk;
public:
	InkJetPrinter(string model, string manu, int avlcnt, int avlink) : Printter(model, manu, avlcnt) {
		this->availableInk = avlink;
	}
	void print(int pages) {
		printedCount = pages;
		availableCount -= printedCount;
		availableInk -= printedCount;
	}
	void show() {
		cout << model << "\t," << mamufacturer << "\t\t,남은 종이 " << availableCount << "장\t,남은 잉크 " << availableInk << endl;
	}
};

class LaserPrint : public Printter {
	int availableToner;
public:
	LaserPrint(string model, string manuf, int avlcount, int avltoner) : Printter(model, manuf, avlcount) {
		this->availableToner = avltoner;
	}
	void print(int pages) {
		printedCount = pages;
		availableCount -= printedCount;
		availableToner -= printedCount;
	}
	void show() {
		cout << model << "\t," << mamufacturer << "\t,남은 종이 " << availableCount << "장\t,남은 토너 " << availableToner << endl;
	}
};

int main(void) {
	InkJetPrinter* Ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrint* Laser = new LaserPrint("SCX-6x45", "삼성전자", 3, 20);
	int n1, n2;
	char a;

	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : "; 
	Ink->show();
	cout << "레이저 : "; 
	Laser->show();

	while (1) {
		cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> n1 >> n2;
		if (n1 == 1) {
			if (n2 > Ink->getAvlCount()) {
				cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
				Ink->show();
				Laser->show();
			}
			else {
				cout << "프린트하였습니다." << endl;
				Ink->print(n2);
				Ink->show();
				Laser->show();
			}
		}
		if (n1 == 2) {
			if (n2 > Laser->getAvlCount()) {
				cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
				Ink->show();
				Laser->show();
			}
			else {
				cout << "프린트하였습니다." << endl;
				Laser->print(n2);
				Ink->show();
				Laser->show();
			}
		}
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> a;
		if (a == 'n')
			break;
	}
} 