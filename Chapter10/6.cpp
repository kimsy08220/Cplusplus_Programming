#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], T sizeSrc, T minus[], T sizeMinus, T& retSize) {
	T j;
	T* p = new T[sizeSrc];
	for (T i = 0; i < sizeSrc; i++) {
		for (j = 0; j < sizeMinus; j++) {
			if (src[i] == minus[j]) {
				j--;
				break;
			}
		}
		if (j == sizeMinus) {
			p[retSize] = src[i];
			retSize++;
		}
	}
	return p;
}

int main(void) {
	int x[] = { 1, 10, 7, 6, 2 };
	int y[] = { 7, 6, 10, 9, 2 };
	int size = 0;
	int* result = remove(x, 5, y, 5, size);

	for (int i = 0; i < size; i++)
		cout << result[i] << ' ';
	cout << endl;
}