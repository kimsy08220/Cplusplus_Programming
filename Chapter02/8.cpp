#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void)
{
	char name[100];
	string m_name;
	int max = 0;
	
	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���.\n>>" ;

	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << endl;

		if (max < strlen(name)) {
			max = strlen(name);
			m_name = name;
		}
	}
	cout << "���� �� �̸��� " << m_name << endl;
}