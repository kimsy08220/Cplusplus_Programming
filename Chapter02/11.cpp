#include <iostream>
using namespace std;

int main(void)
{
	int n = 0;
	int sum = 0;

	cout << "끝 수를 입력하세요>> ";
	cin >> n;

	for (int i = 1; i <= 10; i++)
		sum += i;
	cout << "1에서 " << n << "까지의 합은 " << sum << "입니다." << endl;
}