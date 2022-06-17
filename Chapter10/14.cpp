#include <iostream>
#include <map>
using namespace std;

int main() {
	int num;
	string name, pw;
	map<string, string> pwManager;
	cout << "***** 암호 관리 프로그램 WHO를 시작합니다. *****" << endl;

	while (1) {
		cout << "삽입 : 1, 검사 : 2, 종료 : 3>>";
		cin >> num;
		switch (num) {
		case 1: 
			cout << "이름 암호>> ";
			cin >> name >> pw;
			pwManager.insert(make_pair(name, pw));
			break;
		case 2:
			cout << "이름? ";
			cin >> name;
			while (1) {
				cout << "암호? ";
				cin >> pw;
				if (pwManager[name] == pw) {
					cout << "통과!!" << endl;
					break;
				}
				else
					cout << "실패~~" << endl;
			}
			break;
		case 3:
			cout << "프로그램을 종료합니다..." << endl;
			return 0;
		}
	}
}