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
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
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
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
			}
		}
	}
	void show() {
		cout << getModel() << "\t," << getManu() << "\t\t,���� ���� " << getAvlCount() << "��\t,���� ��ũ " << availableInk << endl;
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
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
			}
		}
	}
	void show() {
		cout << getModel() << "\t," << getManu() << "\t,���� ���� " << getAvlCount() << "��\t,���� ��� " << availableToner << endl;
	}
};

int main(void) {
	PrintInkJet *IP = new PrintInkJet("Officejet V40", "HP", 5, 10);
	PrintLaser *LP = new PrintLaser("SCX-6x45", "�Ｚ����", 3, 20);
	int n1, n2;
	char a;

	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : "; 
	IP->show();
	cout << "������ : "; 
	LP->show();

	while (1) {
		cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
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
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> a;
		if (a == 'n') 
			break;
	}
}