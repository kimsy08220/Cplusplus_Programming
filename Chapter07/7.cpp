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
//	void operator>>(int x[]);
//	void operator<<(int y[]);
//};
//
//void Matrix::operator>>(int x[]) {
//	for (int i = 0; i < 4; i++)
//		x[i] = this->num[i];
//}
//
//void Matrix::operator<<(int y[]) {
//	for (int i = 0; i < 4; i++)
//		this->num[i] = y[i];
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
	friend void operator>>(Matrix a, int x[]);
	friend void operator<<(Matrix& b, int y[]);
};
void operator>>(Matrix a, int x[]) {
	for (int i = 0; i < 4; i++)
		x[i] = a.num[i];
}
void operator<<(Matrix& b, int y[]) {
	for (int i = 0; i < 4; i++)
		b.num[i] = y[i];
}

int main(void) {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1, 2, 3, 4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++)
		cout << x[i] << ' ';
	cout << endl;
	b.show();
}