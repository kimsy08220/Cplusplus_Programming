#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str1, str2;
	cout << "새 암호를 입력하세요>> ";
	cin >> str1;
	cout << "새 암호를 다시 한 번 입력하세요>> ";
	cin >> str2;

	if (str1 == str2)
		cout << "같습니다." << endl;
	else 
		cout << "다릅니다." << endl;
}