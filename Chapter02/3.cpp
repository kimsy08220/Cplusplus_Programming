#include <iostream>
using namespace std;

int main(void)
{
	int n1, n2;

	cout << "�� ���� �Է��϶�>> ";
	cin >> n1 >> n2;

	if (n1 < n2)
		cout << "ū �� = " << n2 << "\n";
	else if (n1 > n2)
		cout << "ū �� = " << n1 << "\n";
	else
		cout << "�� ���� �����ϴ�.\n";
}