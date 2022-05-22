#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};

class IntStack : public AbstractStack {
	int top;
	int max;
	int* stack;
public:
	IntStack(int n) {
		stack = new int[n];
		max = n;
		top = -1;
	}
	bool push(int n) {
		if (top == max)
			return false;
		else {
			top++;
			stack[top] = n;
			return true;
		}
	}
	bool pop(int& n) {
		if (top < 0)
			return false;
		else {
			n = stack[top];
			top--;
			return true;
		}
	}
	int size() {
		return top + 1;
	}
};

int main(void) {
	IntStack instack(50);
	int n;

	instack.push(10);
	instack.push(20);
	instack.push(30);
	instack.push(40);
	cout << "현재 원소 개수 : " << instack.size() << "개" << endl;

	instack.pop(n);
	cout << "pop : " << n << endl;
	instack.pop(n);
	cout << "pop : " << n << endl;
	instack.pop(n);
	cout << "pop : " << n << endl;
	cout << "현재 원소 개수 : " << instack.size() << "개" << endl;
}