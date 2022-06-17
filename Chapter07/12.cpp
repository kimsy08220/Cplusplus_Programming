#include <iostream>
using namespace std;

class SortedArray {
	int size;
	int* p;
	void sort();
public:
	SortedArray();
	SortedArray(SortedArray& src);
	SortedArray(int p[], int size);
	~SortedArray();
	SortedArray operator+(SortedArray& op2);
	SortedArray& operator=(const SortedArray& op2);
	void show();
};

SortedArray::SortedArray() {
	size = 0;
	p = NULL;
}

SortedArray::SortedArray(int p[], int size) {
	this->size = size;
	this->p = new int[size];
	for (int i = 0; i < size; i++)
		this->p[i] = p[i];
}

SortedArray::SortedArray(SortedArray& src) {
	this->size = src.size;
	this->p = new int[this->size];
	for (int i = 0; i < this->size; i++)
		this->p[i] = src.p[i];
}

SortedArray::~SortedArray() {
	if (p)
		delete[] p;
}

SortedArray SortedArray::operator+(SortedArray& op2) {
	SortedArray tmp;
	tmp.size = this->size + op2.size;
	tmp.p = new int[tmp.size];
	for (int i = 0; i < tmp.size; i++) {
		if (i < this->size)
			tmp.p[i] = this->p[i];
		else
			tmp.p[i] = op2.p[i - (tmp.size - op2.size)]; 
	}
	return tmp;
}

SortedArray& SortedArray::operator=(const SortedArray& op2) {
	delete[] p; 

	this->size = op2.size;
	this->p = new int[this->size]; 
	for (int i = 0; i < this->size; i++)
		this->p[i] = op2.p[i];
	return *this;
}

void SortedArray::sort() {
	int tmp;
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (p[i] < p[j] || p[i] == p[j]);
			else {
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
}

void SortedArray::show() {
	sort();
	cout << "배열 출력 : ";
	for (int i = 0; i < size; i++)
		cout << p[i] << ' ';
	cout << endl;
}

int main(void) {
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7, 8, 30 };
	SortedArray a(n, 3), b(m, 4), c;
	c = a + b;

	a.show();
	b.show();
	c.show();
}