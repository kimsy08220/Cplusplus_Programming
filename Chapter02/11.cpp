#include <iostream>
using namespace std;

int main(void)
{
	int n = 0;
	int sum = 0;

	cout << "�� ���� �Է��ϼ���>> ";
	cin >> n;

	for (int i = 1; i <= 10; i++)
		sum += i;
	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�." << endl;
}