#include <iostream>
using namespace std;

int main(void) {
	int a;
	int cnt = 0;

	// EOF(End Of File) : ������ ���� Ž��(ctrl + z), -1�� ����
	// != EOF ��� ����
	while ((a = cin.get()) != EOF) {
		if (a == 'a')
			cnt++;
		else if (a == '\n')
			break;
	}
	cout << "a�� ���� : " << cnt << "��" << endl;
}