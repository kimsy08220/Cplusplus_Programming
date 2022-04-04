#include <iostream>
using namespace std;

int sum(int a, int b)
{
	int res = 0;
	for (int i = a; i <= b; i++)
		res += i;
	return res;
}

int main(void)
{
	int n = 0;
	cout << "끝 수를 입력하세요>> ";
	cin >> n;
	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다." << endl;
}