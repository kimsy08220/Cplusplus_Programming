#include <iostream>
using namespace std;

void half(double &num)
{
	num = num / 2.0;
}

int main(void)
{
	double n = 20;
	half(n);
	cout << n << endl;
}