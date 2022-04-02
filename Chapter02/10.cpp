#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;

	cout << "문자열 입력>> ";
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j <= i; j++)
			cout << str[j];
		cout << endl;
	}
}