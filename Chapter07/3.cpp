#include <iostream>
#include <string>
using namespace std;

// (1)
//class Book {
//	string title;
//	int price, pages;
//public:
//	Book(string title = "", int price = 0, int pages = 0) {
//		this->title = title;
//		this->price = price;
//		this->pages = pages;
//	}
//	void show() {
//		cout << title << " " << price << "�� " << pages << "������" << endl;
//	}
//	string getTitle() { return title; }
//	bool operator!();
//};
//
//bool Book::operator!() {
//	if (this->price == 0)
//		return true;
//	return false;  
//}

// (2)
class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << " " << price << "�� " << pages << "������" << endl;
	}
	string getTitle() { return title; }
	friend bool operator!(Book a);
};

bool operator!(Book a) {
	if (a.price == 0)
		return true;
	return false;
}

int main(void) {
	Book book("�������", 0, 50);
	if (!book)
		cout << "��¥��" << endl;
}