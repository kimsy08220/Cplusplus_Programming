#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void) {
	cout << left;
	cout << setw(15) << "Number";
	cout << setw(15) << "Square";
	cout << setw(15) << "Square Root" << endl;
	for (int i = 0; i < 50; i += 5) {
		cout << setw(15) << setfill('_') << i;
		cout << setw(15) << setfill('_') << i*i;
		// setprecision(3) : 3자리까지만 나옴
		cout << setw(15) << setfill('_') << setprecision(3) << sqrt(i) << endl;
	} 
}