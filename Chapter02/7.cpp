#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char txt[100];
	while (1) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>> ";
		cin.getline(txt, 100, '\n');
		if (strcmp(txt, "yes") == 0)
			break;
	}
	cout << "�����մϴ�..." << endl;
}