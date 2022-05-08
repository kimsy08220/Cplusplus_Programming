#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min=0, int max=32767);
	static char nextAlphabet();
	static double nextDouble();
};
int Random::nextInt(int min, int max)
{
	int a = rand() % (max - min + 1) + min;
	return a;
}
char Random::nextAlphabet()
{
	char b;
	while (1) {
		b = rand() % 'z';
		if ('a' <= b && b <= 'z' || 'A' <= b && b <= 'Z')
			break;
	}
	return b;
}
double Random::nextDouble()
{
	double c = rand() / 32767.0;
	return c;
}
int main(void)
{
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다." << endl;
	for (int i = 0; i < 10; i++)
		cout << Random::nextInt(1, 100) << ' ';

	cout << endl << "알파벳을 랜덤하게 10개를 출력합니다." << endl;
	for (int i = 0; i < 10; i++)
		cout << Random::nextAlphabet() << ' ';

	cout << endl << "랜덤한 실수를 10개를 출력합니다." << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextDouble() << ' ';
		if (i == 4)
			cout << endl;
	}
	cout << endl;
}