#include <iostream>
using namespace std;

int main(void)
{
	int cnt = 0;
	char txt[100];
	cout << "문자들을 입력하라(100개 미만)." << endl;
	cin.getline(txt, 100, '\n');

	for (int i = 0; i < 100; i++) {
		if (txt[i] == 'x')
			cnt++;
	}
	cout << "x의 개수는 " << cnt << endl;
}