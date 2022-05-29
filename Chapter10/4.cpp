#include <iostream>
using namespace std;

template <class T>
bool search(T search, T x[], T size) {
	for (T i = 0; i < size; i++) {
		if (search == x[i])
			return true;
	}
	return false;
}

int main(void) {
	int x[] = {1, 10, 100, 5, 4};
	if (search(100, x, 5))
		cout << "100이 배열 x에 포함되어 있다." << endl;
	else
		cout << "100이 배열 x에 포함되어 있지 않다." << endl;
}