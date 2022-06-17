#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector<int> v;
	double sum = 0;
	while (true) {
		int num;
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> num;
		if (!num)
			break;
		v.push_back(num);
		for (int i = 0; i < v.size(); i++)
			cout << v.at(i) << ' ';
		cout << endl;
		sum += num;
		cout << "평균 = " << sum / v.size() << endl;
	}
}