#include <iostream>
using namespace std;

int main(void)
{
	int cnt = 0;
	char txt[100];
	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
	cin.getline(txt, 100, '\n');

	for (int i = 0; i < 100; i++) {
		if (txt[i] == 'x')
			cnt++;
	}
	cout << "x�� ������ " << cnt << endl;
}