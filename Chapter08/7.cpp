#include <iostream>
using namespace std;

class BaseArray {
    char* mem;
protected:
    BaseArray(int size) {
        mem = new char[size];
    }
    void set_mem(char* x) {
        mem = x;
    }
    char get_mem(int i) {
        return mem[i];
    }
    void put_mem(int i, char copy) {
        mem[i] = copy;
    }
};

class ROM : public BaseArray {
public:
    ROM(int mem_size, char *x, int arr_size) : BaseArray(mem_size) {
        set_mem(x);
    }
    char read(int i) {
        char mem = get_mem(i);
        return mem;
    }
};

class RAM : public BaseArray {
public:
    RAM(int mem_size) : BaseArray(mem_size) {}
    void write(int i, char rom_mem){
        put_mem(i, rom_mem);
    }
    char read(int i) {
        char mem = get_mem(i);
        return mem;
    }
};

int main(void) {
    char x[5] = { 'h', 'e', 'l', 'l', 'o' };
    ROM biosROM(1024*10, x, 5);
    RAM mainMemory(1024*1024);

    for (int i = 0; i < 5; i++)
        mainMemory.write(i, biosROM.read(i));
    for (int i = 0; i < 5; i++)
        cout << mainMemory.read(i);
    cout << endl;
}