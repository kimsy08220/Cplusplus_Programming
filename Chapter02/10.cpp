#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;

	cout << "���ڿ� �Է�>> ";
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j <= i; j++)
			cout << str[j];
		cout << endl;
	}
}