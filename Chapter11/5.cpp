#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string cmd;

	while (true) {
		cout << "�����Ϸ��� exit�� �Է��ϼ��� >> ";
		getline(cin, cmd);
		if (cmd == "exit") {
			cout << "���α׷��� �����մϴ�...." << endl;
			return 0;
		}
	}
}