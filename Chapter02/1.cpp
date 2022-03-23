#include <iostream>
using namespace std;

int main(void)
{
	int cnt = 1;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << cnt << "\t";
			cnt++;
		}
		cout << "\n";
	}
	cout << "\n";

	for (int i = 1; i <= 100; i++) {
		cout << i << "\t";
		if (i % 10 == 0)
			cout << "\n";
	}
}