#include <iostream>
using namespace std;

int main(void)
{
	double num[5];
	double max = 0;

	cout << "5���� �Ǽ��� �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		if (max < num[i])
			max = num[i];
	}
	cout << "���� ū �� = " << max << endl;
}