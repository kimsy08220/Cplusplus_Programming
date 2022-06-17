#include <iostream>
#include <vector>
using namespace std;

class Nation {
	string nation;
	string capital;
public:
	Nation(string n = "", string c = "") {
		this->nation = n;
		this->capital = c;
	}
	string getNation() {
		return nation;
	}
	string getCapital() {
		return capital;
	}
	bool nationCompare(string n) {  
		if (nation == n)
			return true;
		return false;
	}

};

int main(void) {
	vector<Nation> v;
	v.push_back(Nation("대한민국","서울"));
	v.push_back(Nation("중국", "베이징"));
	v.push_back(Nation("북한", "평양"));
	v.push_back(Nation("미국", "와싱턴"));
	v.push_back(Nation("대만", "타이베이"));
	v.push_back(Nation("캐나다", "오타와"));
	v.push_back(Nation("스위스", "제네바"));
	v.push_back(Nation("프랑스", "파리"));
	v.push_back(Nation("이집트", "카이로"));
	cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << endl;

	while (1) {
		int num;
		cout << "정보 입력 : 1, 퀴즈 : 2, 종료 : 3 >> ";
		cin >> num;

		switch (num) {
		case 1:
			cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << endl;
			cout << "나라와 수도를 입력하세요(no no 이면 입력끝)" << endl;
			for (int i = v.size() + 1;; i++) {
				string n, c;
				bool b;
				cout << i << ">>";
				cin >> n >> c;
				if (n == "no" && c == "no")
					break;
				for (int j = 0; j < v.size(); j++) {
					if (b = v.at(j).nationCompare(n)) {
						cout << "already exists !!" << endl;
						i--;
						break;
					}
				}
				if (b)
					continue;
				v.push_back(Nation(n, c));
			}
			break;
		case 2:
			int random;
			while (1) {
				string c;
				random = rand() % v.size();
				cout << v.at(random).getNation() << "의 수도는?";
				cin >> c;
				if (c == "exit")
					break;
				else if (v.at(random).getCapital() == c)
					cout << "Correct !!" << endl;
				else
					cout << "No !!" << endl;
			}
			break;
		case 3:
			return 0;
		default:
			break;
		}
	}
}