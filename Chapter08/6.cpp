#include <iostream>
using namespace std;

class BaseArray {
    int capacity;
    int* mem;
protected:
    BaseArray(int capacity = 100) {
        this->capacity = capacity;
        mem = new int[capacity];
    }
    ~BaseArray() { delete[] mem; }
    void put(int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
};

class MyStack : public BaseArray {
    int top;
public:
    MyStack(int capacity) : BaseArray(capacity) {
        top = -1;
    }
    void push(int n) {
        top++;
        put(top, n);
    }
    int capacity() { return getCapacity(); }
    int length() { return top + 1; }
    int pop() {
        return get(top--);
    }
};

int main(void) {
    MyStack mStack(100);
    int n;
    cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        mStack.push(n); 
    }
    cout << "스택의 용량:" << mStack.capacity() << ", 스택의 크기:" << mStack.length() << endl;
    cout << "스택의 모든 원소를 팝하여 출력한다>> ";
    while (mStack.length() != 0) {
        cout << mStack.pop() << ' ';  
    }
    cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
}