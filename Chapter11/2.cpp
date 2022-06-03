#include <iostream>
using namespace std;

int main(void) {
	char ch;
	int cnt = 0;

	while (true) {
		cin.get(ch);
		if (ch == '\n')
			break;
		else if (ch == ' ')
			cnt++;
	}

	cout << "ºóÄ­ÀÇ °³¼ö : " << cnt << "°³" << endl;
}