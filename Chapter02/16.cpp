#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int cnt = 0, alph = 0;
	char buf[10000];
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;

	cin.getline(buf, 10000, ';');

	for (int i = 0; i <= strlen(buf); i++) {
		if (isalnum(buf[i]) != 0) {
			buf[i] = tolower(buf[i]);
			cnt++;
		}
	}
	cout << "�� ���ĺ� �� " << cnt << endl << endl;
	for (char i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j <= strlen(buf); j++)
			if (buf[j] == i)
				alph++;
		cout << i << " (" << alph << ")	: ";
		for (int k = 0; k < alph; k++)
			cout << "*";
		cout << endl;
		alph = 0;
	}
}