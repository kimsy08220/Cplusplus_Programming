#include <iostream>
#include "11.h"
using namespace std;

int main(void) {
	Box b(10, 2);
	b.draw();
	cout << endl;

	b.setSize(7,4);
	b.setFill('^');
	b.draw();
}