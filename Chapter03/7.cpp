#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
public:
	SelectableRandom();
	int next();
	int nextInRange(int start, int end);
};

SelectableRandom::SelectableRandom() {
	srand((unsigned)time(0));
}

int SelectableRandom::next() {
	int n = rand();
	if (n % 2 == 0)
		return n;
	else
		return --n;
}

int SelectableRandom::nextInRange(int start, int end) {
	int n = rand() % (end - start + 1) + start;
	if (n % 2 == 0)
		return ++n;
	else
		return n;
}

int main(void)
{
	SelectableRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "9까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}