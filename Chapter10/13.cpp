#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void) {
	map<string, int> scores;

	cout << "***** 점수관리 프로그램 HIGH SCORE을 시작합니다. *****" << endl;
	while (1) {
		int num, score;
		string name;
		cout << "입력 : 1, 조회 : 2, 종료 : 3 >>";
		cin >> num;
		switch (num) {
		case 1:
			cout << "이름과 점수>> ";
			cin >> name >> score;
			scores.insert(make_pair(name, score));
			break;
		case 2:
			cout << "이름 >> ";
			cin >> name;
			if (scores.find(name) == scores.end())
				cout << "없음" << endl;
			else
				cout << name << "의 점수는 " << scores[name] << endl;
			break;
		case 3:
			cout << "프로그램을 종료합니다..." << endl;
			return 0;
		default:
			cout << "다시 입력해주시기 바랍니다." << endl;
			break;
		}
	}

}