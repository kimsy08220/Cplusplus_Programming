#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
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

		int n;
		srand((unsigned)time(0));

		while (1) {
			n = rand() % str.length();
			if (str[n] != ' ')
				break;
		}
		int a = rand() % 26 + 97;
		str[n] = (char)a;
		cout << str << endl;
	}
}