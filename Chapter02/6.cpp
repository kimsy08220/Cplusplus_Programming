#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str1, str2;
	cout << "�� ��ȣ�� �Է��ϼ���>> ";
	cin >> str1;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>> ";
	cin >> str2;

	if (str1 == str2)
		cout << "�����ϴ�." << endl;
	else 
		cout << "�ٸ��ϴ�." << endl;
}