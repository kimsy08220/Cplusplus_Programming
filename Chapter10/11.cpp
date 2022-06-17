#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
	int year;
	string name;
	string author;
public:
	void set(int year, string name, string author) {
		this->year = year;
		this->name = name;
		this->author = author;
	}
	int getYear() {
		return year;
	}
	string getName() {
		return name;
	}
	string getAuthor() {
		return author;
	}
	void show() {
		cout << year << "년도, " << name << "," << author << endl;
	}
};

int main(void) {
	vector<Book> v;
	Book b;
	int y;
	string n, a;
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;

	while(1) {
		cout << "년도>>";
		cin >> y;
		if (y == -1)
			break;
		fflush(stdin);
		cout << "책이름>>";
		getline(cin, n);
		cout << "저자>>";
		getline(cin, a);
		b.set(y, n, a);
		v.push_back(b);
	}
	cout << "총 입고된 책은 " << v.size() << "권 입니다." << endl;
	
	cout << "검색하고자 하는 저자 이름을 입력하세요>>";
	fflush(stdin);
	getline(cin, a);
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getAuthor() == a)
			v[i].show();
	}

	cout << "검색하고자 하는 년도를 입력하세요>>";
	cin >> y;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getYear() == y)
			v[i].show();
	}
}