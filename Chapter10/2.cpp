#include <iostream>
using namespace std;

template <class T>
bool equalArrays(T x[], T y[], T size) {
	for (T i = 0; i < size; i++)
		if (x[i] != y[i])
			return false;
	return true;
}

int main(void) {
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 1, 10, 100, 5, 4 };
	if (equalArrays(x, y, 5))
		cout << "같다" << endl;
	else
		cout << "다르다" << endl;
}