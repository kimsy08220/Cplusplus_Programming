#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	int cnt = 0, j = -1;

	cout << "���ڿ� �Է�>> ";
	getline(cin, str);

	while (1) {
		j = str.find('a', j+1);
		if (j == -1)
			break;
		cnt++;
	}
	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;
}