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
	cout << "�� ���� �Է��ϼ���>> ";
	cin >> n;
	cout << "1���� " << n << "������ ���� " << sum(1, n) << "�Դϴ�." << endl;
}