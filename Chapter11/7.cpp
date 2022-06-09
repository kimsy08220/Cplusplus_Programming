#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void) {
	for (int i = 0; i < 4; i++) {
		cout << left;
		cout << setw(10) << "dec";
		cout << setw(10) << "hexa";
		cout << setw(10) << "char";
	}

	for (int i = 0; i < 4; i++) {
		cout << setw(10) << "___";
		cout << setw(10) << "___";
		cout << setw(10) << "___";
	}
	cout << endl;

	for (int i = 0; i < 128; i++) {
		cout << setw(10) << setfill(' ') << dec << i;
		cout << setw(10) << setfill(' ') << hex << i;
		if (isprint(i) == 0)
			cout << setw(10) << '.';
		else
			cout << setw(10) << char(i);

		if ((i + 1) % 4 == 0)
			cout << endl;
	}
}