#include <iostream>
#include <string>
using namespace std;

class Integer {
	int num;
public:
	Integer(int n) {
		num = n;
	}
	Integer(string s) {
		num = stoi(s);
	}
	int get() {
		return num;
	}
	void set(int n) {
		num = n;
	}
	int isEven() {
		return true;
	}
};

int main(void)
{
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}