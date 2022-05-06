#include <iostream>
using namespace std;

// (1)
//int big(int a, int b)
//{
//	int big = a;
//	if (a < b)
//		big = b;
//	if (big > 100)
//		big = 100;
//	return big;
//}
//
//int big(int a, int b, int max)
//{
//	int big = a;
//	if (a < b)
//		big = b;
//	if (big > max)
//		big = max;
//	return big;
//}

// (2)
int big(int a, int b, int max =100)
{
	int big = a;
	if (a < b)
		big = b;
	if (big > max)
		big = max;
	return big;
}

int main(void)
{
	int x = big(3,5);
	int y = big(300,60);
	int z = big(30,60,50);
	cout << x << ' ' << y << ' ' << z << endl;
}