#include <iostream>
#include <string>
using namespace std;

class PrintMachine {
	string model, mamufacturer;
	int printedCount, availableCount;
public:
	PrintMachine(string model, string manu, int avlcnt) {
		this->model = model;
		this->mamufacturer = manu;
		this->availableCount = avlcnt;
	}
	bool print(int pages) {
		printedCount = pages;
		if (availableCount >= printedCount) {
			availableCount -= printedCount;
			return true;
		}
		else {
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
			return false;
		}
	}
	string getModel() { return model; }
	string getManu() { return mamufacturer; }
	int getAvlCount() { return availableCount; }
}; 

class PrintInkJet : public PrintMachine {
	int availableInk;
public:
	PrintInkJet(string model, string manu, int avlcnt, int avlink) : PrintMachine(model, manu, avlcnt) {
		this->availableInk = avlink;
	}
	void printInkJet(int pages) {
		if (print(pages)) {
			if (availableInk >= pages) {
				availableInk -= pages;
				cout << "프린트하였습니다." << endl;
			}
		}
	}
	void show() {
		cout << getModel() << "\t," << getManu() << "\t\t,남은 종이 " << getAvlCount() << "장\t,남은 잉크 " << availableInk << endl;
	}
};

class PrintLaser : public PrintMachine {
	int availableToner;
public:
	PrintLaser(string model, string manuf, int avlcount, int avltoner) : PrintMachine(model, manuf, avlcount) {
		this->availableToner = avltoner;
	}
	void printLaser(int pages) {
		if (print(pages)) {
			if (availableToner >= pages) {
				availableToner -= pages;
				cout << "프린트하였습니다." << endl;
			}
		}
	}
	void show() {
		cout << getModel() << "\t," << getManu() << "\t,남은 종이 " << getAvlCount() << "장\t,남은 토너 " << availableToner << endl;
	}
};

int main(void) {
	PrintInkJet *IP = new PrintInkJet("Officejet V40", "HP", 5, 10);
	PrintLaser *LP = new PrintLaser("SCX-6x45", "삼성전자", 3, 20);
	int n1, n2;
	char a;

	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : "; 
	IP->show();
	cout << "레이저 : "; 
	LP->show();

	while (1) {
		cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> n1 >> n2;
		if (n1 == 1) {
			IP->printInkJet(n2);
			IP->show();
			LP->show();
		}
		if (n1 == 2) {
			LP->printLaser(n2);
			IP->show();
			LP->show();
		}
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> a;
		if (a == 'n') 
			break;
	}
}