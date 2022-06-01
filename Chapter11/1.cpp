#include <iostream>
using namespace std;

int main(void) {
	int a;
	int cnt = 0;

	// EOF(End Of File) : 파일의 끝을 탐지(ctrl + z), -1과 동일
	// != EOF 없어도 무방
	while ((a = cin.get()) != EOF) {
		if (a == 'a')
			cnt++;
		else if (a == '\n')
			break;
	}
	cout << "a의 개수 : " << cnt << "개" << endl;
}