#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big)
{
	if (a < b) {
		big = b;
		return false;
	}
	else if (a > b) {
		big = a;
		return false;
	}
	else {
		big = a;
		return true;
	}
}

int main(void)
{
	int a = 10, b = 10;
	int max;

	if (bigger(a, b, max)) 
		cout << "�� ���� �����ϴ�." << endl;
	else
		cout << a << "�� " << b << "�� " << max << "�� �� Ů�ϴ�." << endl;

	a = 10, b = 20;
	if (bigger(a, b, max))
		cout << "�� ���� �����ϴ�." << endl;
	else
		cout << a << "�� " << b << "�� " << max << "�� �� Ů�ϴ�." << endl;

	a = 20, b = 10;
	if (bigger(a, b, max))
		cout << "�� ���� �����ϴ�." << endl;
	else
		cout << a << "�� " << b << "�� " << max << "�� �� Ů�ϴ�." << endl;

}