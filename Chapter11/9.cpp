#include <iostream>
#include <string>
using namespace std;

class Phone {
	string name;
	string telnum;
	string address;
public:
	Phone(string name = "", string telnum = "", string address = "") {
		this->name = name;
		this->telnum = telnum;
		this->address = address;
	}
	friend istream& operator >> (istream& ins, Phone& a);
	friend ostream& operator << (ostream& stream, Phone a);
};

istream& operator >> (istream& ins, Phone& a) {
	cout << "�̸� : ";
	ins >> a.name;
	cout << "��ȭ��ȣ : ";
	ins >> a.telnum;
	cout << "�ּ� : ";
	ins >> a.address;
	return ins;
}

ostream& operator << (ostream& stream, Phone a) {
	stream << "(" << a.name << "," << a.telnum << "," << a.address << ")";
	return stream;
}

int main(void) {
	Phone girl, boy;
	cin >> girl >> boy;
	cout << girl << endl << boy << endl;
}