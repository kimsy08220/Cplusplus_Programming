#include <iostream>
#include <map>
using namespace std;

int main() {
	int num;
	string name, pw;
	map<string, string> pwManager;
	cout << "***** ��ȣ ���� ���α׷� WHO�� �����մϴ�. *****" << endl;

	while (1) {
		cout << "���� : 1, �˻� : 2, ���� : 3>>";
		cin >> num;
		switch (num) {
		case 1: 
			cout << "�̸� ��ȣ>> ";
			cin >> name >> pw;
			pwManager.insert(make_pair(name, pw));
			break;
		case 2:
			cout << "�̸�? ";
			cin >> name;
			while (1) {
				cout << "��ȣ? ";
				cin >> pw;
				if (pwManager[name] == pw) {
					cout << "���!!" << endl;
					break;
				}
				else
					cout << "����~~" << endl;
			}
			break;
		case 3:
			cout << "���α׷��� �����մϴ�..." << endl;
			return 0;
		}
	}
}