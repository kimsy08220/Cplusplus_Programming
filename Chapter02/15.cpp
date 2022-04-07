#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int n1, n2;
	char *cal, *n, txt[100];


	while (1) {
		cout << "? ";
		cin.getline(txt, 100, '\n');

		n1 = atoi(strtok_s(txt, " ", &n));
		cal = strtok_s(NULL, " ", &n);
		n2 = atoi(strtok_s(NULL, " ", &n));

		if (*cal == '+')
			cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
		else if (*cal == '-')
			cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
		else if (*cal == '*')
			cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
		else if (*cal == '/')
			cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
		else if (*cal == '%')
			cout << n1 << " % " << n2 << " = " << n1 % n2 << endl;
		else
			cout << "다시 입력해주세요." << endl;
	}
}