#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void)
{
	char name[100];
	string m_name;
	int max = 0;
	
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요.\n>>" ;

	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << endl;

		if (max < strlen(name)) {
			max = strlen(name);
			m_name = name;
		}
	}
	cout << "가장 긴 이름은 " << m_name << endl;
}