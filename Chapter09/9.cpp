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
		cout << model << "\t," << mamufacturer << "\t\t,���� ���� " << availableCount << "��\t,���� ��ũ " << availableInk << endl;
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
		cout << model << "\t," << mamufacturer << "\t,���� ���� " << availableCount << "��\t,���� ��� " << availableToner << endl;
	}
};

int main(void) {
	InkJetPrinter* Ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrint* Laser = new LaserPrint("SCX-6x45", "�Ｚ����", 3, 20);
	int n1, n2;
	char a;

	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : "; 
	Ink->show();
	cout << "������ : "; 
	Laser->show();

	while (1) {
		cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> n1 >> n2;
		if (n1 == 1) {
			if (n2 > Ink->getAvlCount()) {
				cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
				Ink->show();
				Laser->show();
			}
			else {
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
				Ink->print(n2);
				Ink->show();
				Laser->show();
			}
		}
		if (n1 == 2) {
			if (n2 > Laser->getAvlCount()) {
				cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
				Ink->show();
				Laser->show();
			}
			else {
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
				Laser->print(n2);
				Ink->show();
				Laser->show();
			}
		}
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> a;
		if (a == 'n')
			break;
	}
} 