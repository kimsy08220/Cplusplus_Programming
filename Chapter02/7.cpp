#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char txt[100];
	while (1) {
		cout << "종료하고 싶으면 yes를 입력하세요>> ";
		cin.getline(txt, 100, '\n');
		if (strcmp(txt, "yes") == 0)
			break;
	}
	cout << "종료합니다..." << endl;
}