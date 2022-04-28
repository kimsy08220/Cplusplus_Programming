#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;

	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.)" << endl;
	while (1) {
		cout << ">>";
		getline(cin, str);

		if (str == "exit")
			break;

		for (int i = str.length() - 1; i >= 0; i--)
			cout << str[i];
		cout << endl;
	}
}