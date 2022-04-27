#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	int cnt = 0, j = -1;

	cout << "문자열 입력>> ";
	getline(cin, str);

	while (1) {
		j = str.find('a', j+1);
		if (j == -1)
			break;
		cnt++;
	}
	cout << "문자 a는 " << cnt << "개 있습니다." << endl;
}