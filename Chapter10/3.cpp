#include <iostream>
using namespace std;

template <class T>
void reverseArray(T x[], T size) {
	T tmp;
	for (T i = 0; i < size / 2; i++) {
		tmp = x[i];
		x[i] = x[size - i - 1];
		x[size - i - 1] = tmp;
	}
}

int main(void)
{
	int x[] = {1, 10, 100, 5, 4};
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++)
		cout << x[i] << ' ';
	cout << endl;
}