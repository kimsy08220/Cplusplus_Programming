#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string name, address, age;

	cout << "�̸���? ";
	getline(cin, name);
	cout << "�ּҴ�? ";
	getline(cin, address);
	cout << "���̴�? ";
	getline(cin, age);

	cout << name << ", " << address << ", " << age << "��"<< endl;
}