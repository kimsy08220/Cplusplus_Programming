#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;

	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�.)" << endl;
	while (1) {
		cout << ">>";
		getline(cin, str);

		if (str == "exit")
			break;

		for (int i = str.length() - 1; i >= 0; i--)
			cout << str[i];
		cout << endl;
	}
}