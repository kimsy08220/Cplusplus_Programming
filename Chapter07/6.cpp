#include <iostream>
using namespace std;

// (1)
//class Matrix {
//	int num[4];
//public:
//	Matrix() {}
//	Matrix(int a, int b, int c, int d) {
//		num[0] = a;
//		num[1] = b;
//		num[2] = c;
//		num[3] = d;
//	}
//	void show() {
//		cout << "Matrix = { ";
//		for (int i = 0; i < 4; i++)
//			cout << num[i] << ' ';
//		cout << "}" << endl;
//	}
//	Matrix operator+(Matrix b);
//	Matrix& operator+=(Matrix b);
//	bool operator==(Matrix c);
//};
//
//Matrix Matrix::operator+(Matrix b) {
//	Matrix c;
//	for (int i = 0; i < 4; i++)
//		c.num[i] = this->num[i] + b.num[i];
//	return c;
//}
//
//Matrix& Matrix::operator+=(Matrix b) {
//	for (int i = 0; i < 4; i++)
//		this->num[i] += b.num[i];
//	return *this;
//}
//
//bool Matrix::operator==(Matrix c) {
//	for (int i = 0; i < 4; i++) {
//		if (this->num[i] == c.num[i]);
//		else return false;
//	}
//	return true;
//}

// (2)
class Matrix {
	int num[4];
public:
	Matrix() {}
	Matrix(int a, int b, int c, int d) {
		num[0] = a;
		num[1] = b;
		num[2] = c;
		num[3] = d;
	}
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++)
			cout << num[i] << ' ';
		cout << "}" << endl;
	}
	friend Matrix operator+(Matrix a, Matrix b);
	friend Matrix operator+=(Matrix &a, Matrix b);
	friend bool operator==(Matrix a, Matrix c);
};

Matrix operator+(Matrix a, Matrix b) {
	Matrix c;
	for (int i = 0; i < 4; i++)
		c.num[i] = a.num[i] + b.num[i];
	return c;
}

//void operator+=(Matrix& a, Matrix b) {
//	for (int i = 0; i < 4; i++) {
//		a.num[i] += b.num[i];
//	}
//}

Matrix operator+=(Matrix& a, Matrix b) {
	for (int i = 0; i < 4; i++)
		a.num[i] += b.num[i];
	return a;
}

bool operator==(Matrix a, Matrix c) {
	for (int i = 0; i < 4; i++) {
		if (a.num[i] == c.num[i]);
		else return false;
	}
	return true;
}

int main(void) {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show();
	b.show();
	c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}