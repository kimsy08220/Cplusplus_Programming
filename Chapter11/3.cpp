#include <iostream>
using namespace std;

int main(void) {
	int ch;
	cin.ignore(100, ';');

	// EOF(End Of File) : 파일의 끝을 탐지(ctrl + z), -1과 동일
	while ((ch = cin.get()) != EOF) {
		cout.put(ch);
		if (ch == '\n')
			cin.ignore(100, ';');
	}
}