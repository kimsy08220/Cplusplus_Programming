#include <iostream>
using namespace std;

istream& prompt(istream& ins) {
	cout << "¾ÏÈ£?";
	return ins;
}

int main(void) {
	string password;
	while (true) {
		cin >> prompt >> password;
		if (password == "C++") {
			cout << "login success!!" << endl;
			break;
		}
		else
			cout << "login fail. try again" << endl;
	}
}