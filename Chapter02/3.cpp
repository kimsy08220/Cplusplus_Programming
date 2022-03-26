#include <iostream>
using namespace std;

int main(void)
{
	int n1, n2;

	cout << "두 수를 입력하라>> ";
	cin >> n1 >> n2;

	if (n1 < n2)
		cout << "큰 수 = " << n2 << "\n";
	else if (n1 > n2)
		cout << "큰 수 = " << n1 << "\n";
	else
		cout << "두 수는 같습니다.\n";
}