#include <iostream>
using namespace std;

int main(void)
{
	double num[5];
	double max = 0;

	cout << "5개의 실수를 입력하라>> ";
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		if (max < num[i])
			max = num[i];
	}
	cout << "제일 큰 수 = " << max << endl;
}