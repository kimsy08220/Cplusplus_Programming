#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void) {
	map<string, int> scores;

	cout << "***** �������� ���α׷� HIGH SCORE�� �����մϴ�. *****" << endl;
	while (1) {
		int num, score;
		string name;
		cout << "�Է� : 1, ��ȸ : 2, ���� : 3 >>";
		cin >> num;
		switch (num) {
		case 1:
			cout << "�̸��� ����>> ";
			cin >> name >> score;
			scores.insert(make_pair(name, score));
			break;
		case 2:
			cout << "�̸� >> ";
			cin >> name;
			if (scores.find(name) == scores.end())
				cout << "����" << endl;
			else
				cout << name << "�� ������ " << scores[name] << endl;
			break;
		case 3:
			cout << "���α׷��� �����մϴ�..." << endl;
			return 0;
		default:
			cout << "�ٽ� �Է����ֽñ� �ٶ��ϴ�." << endl;
			break;
		}
	}

}