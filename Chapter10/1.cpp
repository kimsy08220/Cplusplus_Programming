#include <iostream>
using namespace std;

template <class T>
T biggest(T x[], T size) {
	T big = x[0];
	for (T i = 1; i < 5; i++) {
		if (x[i] > big)
			big = x[i];
	}
	return big;
}

int main(void)
{
	int x[] = {1, 10, 100, 5, 4};
	cout << biggest(x, 5) << endl;
}