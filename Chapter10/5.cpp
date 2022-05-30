#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], T sizea, T b[], T sizeb) {
	T* p = new T[sizea + sizeb];
	int i;
	for (i = 0; i < sizea; i++)
		p[i] = a[i];
	for (i = sizea; i < sizea + sizeb; i++)
		p[i] = b[i - sizea];
	return p;
}

int main(void) {
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 7, 6, 10, 9, 2 };

	int* a = concat(x, 5, y, 5);

	for (int i = 0; i < 10; i++)
		cout << a[i] << ' ';
	cout << endl;
}