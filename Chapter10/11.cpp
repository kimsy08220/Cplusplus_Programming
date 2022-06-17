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
		cout << year << "�⵵, " << name << "," << author << endl;
	}
};

int main(void) {
	vector<Book> v;
	Book b;
	int y;
	string n, a;
	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;

	while(1) {
		cout << "�⵵>>";
		cin >> y;
		if (y == -1)
			break;
		fflush(stdin);
		cout << "å�̸�>>";
		getline(cin, n);
		cout << "����>>";
		getline(cin, a);
		b.set(y, n, a);
		v.push_back(b);
	}
	cout << "�� �԰�� å�� " << v.size() << "�� �Դϴ�." << endl;
	
	cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���>>";
	fflush(stdin);
	getline(cin, a);
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getAuthor() == a)
			v[i].show();
	}

	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>>";
	cin >> y;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getYear() == y)
			v[i].show();
	}
}