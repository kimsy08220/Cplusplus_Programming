#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {}
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) {
		this->name = name;
		this->tel = tel;
	}
};

int main(void)
{
	string name, tel;
	Person person[3];

	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���." << endl;
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">> ";
		cin >> name >> tel;
		person[i].set(name, tel);
	}

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout << person[i].getName() << " ";
	}

	cout << endl << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> name;
	for (int i = 0; i < 3; i++) {
		if (name == person[i].getName())
			cout << "��ȭ ��ȣ�� " << person[i].getTel();
	}
	cout << endl;
}
