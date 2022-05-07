#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n, int val);
	~MyVector() { delete[] mem; }
	void show();
};

MyVector::MyVector(int n=100, int val=0) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++)
		mem[i] = val;
}

void MyVector::show() {
	cout << size << endl;
	for (int i = 0; i < size; i++)
		cout << mem[i] << ' ';
	cout << endl;
}

int main(void)
{
	MyVector a, b(20,123);
	a.show();
	b.show();
}