#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int cnt = 0, alph = 0;
	char buf[10000];
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;

	cin.getline(buf, 10000, ';');

	for (int i = 0; i <= strlen(buf); i++) {
		if (isalnum(buf[i]) != 0) {
			buf[i] = tolower(buf[i]);
			cnt++;
		}
	}
	cout << "총 알파벳 수 " << cnt << endl << endl;
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