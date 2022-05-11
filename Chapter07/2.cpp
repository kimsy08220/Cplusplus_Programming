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
//		cout << title << " " << price << "원 " << pages << "페이지" << endl;
//	}
//	string getTitle() { return title; }
//	bool operator==(int n);
//	bool operator==(string s);
//	bool operator==(Book b);
//};
//
//bool Book::operator==(int n) {
//	if (this->price == n)
//		return true;
//	return false;
//}
//
//bool Book::operator==(string s) {
//	if (this->title == s)
//		return true;
//	return false;
//}
//
//bool Book::operator==(Book b) {
//	if (this->title == b.title && this->price == b.price && this->pages == b.pages)
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
		cout << title << " " << price << "원 " << pages << "페이지" << endl;
	}
	string getTitle() { return title; }
	friend bool operator==(Book a, int n);
	friend bool operator==(Book a, string s);
	friend bool operator==(Book a, Book b);
};

bool operator==(Book a, int n) {
	if (a.price == n)
		return true;
	return false;
}

bool operator==(Book a, string s) {
	if (a.title == s)
		return true;
	return false;
}

bool operator==(Book a, Book b) {
	if (a.title == b.title && a.price == b.price && a.pages == b.pages)
		return true;
	return false;
}

int main(void) {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000)
		cout << "정가 30000원" << endl;
	if (a == "명품 C++")
		cout << "명품 C++입니다." << endl;
	if (a == b)
		cout << "두 책이 같은 책입니다." << endl;
}