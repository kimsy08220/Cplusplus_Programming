#include <iostream>
using namespace std;

istream& pos(istream& ins) {
	cout << "��ġ��? ";
	return ins;
}

int main(void) {
	int x, y;
	cin >> pos >> x;
	cin >> pos >> y;
	cout << x << ',' << y << endl;
}