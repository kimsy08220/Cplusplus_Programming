#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector<int> v;
	double sum = 0;
	while (true) {
		int num;
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
		cin >> num;
		if (!num)
			break;
		v.push_back(num);
		for (int i = 0; i < v.size(); i++)
			cout << v.at(i) << ' ';
		cout << endl;
		sum += num;
		cout << "��� = " << sum / v.size() << endl;
	}
}