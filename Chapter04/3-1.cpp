#include <iostream>
#include <string>
using namespace std;

// [] ���
//int main(void)
//{
//	int cnt = 0;
//	string str;
//
//	cout << "���ڿ� �Է�>> ";
//	getline(cin, str);
//
//	for (int i = 0; i < str.length(); i++) {
//		if (str[i] == 'a')
//			cnt++;
//	}
//
//	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;
//}

// at ���
int main(void)
{
	int cnt = 0;
	string str;

	cout << "���ڿ� �Է�>> ";
	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) == 'a')
			cnt++;
	}

	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;
}