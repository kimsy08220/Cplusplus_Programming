#include <iostream>
using namespace std;

int main(void) {
	int ch;
	cin.ignore(100, ';');

	// EOF(End Of File) : ������ ���� Ž��(ctrl + z), -1�� ����
	while ((ch = cin.get()) != EOF) {
		cout.put(ch);
		if (ch == '\n')
			cin.ignore(100, ';');
	}
}