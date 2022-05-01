#include <iostream>
#include <string>
using namespace std;

// 애매...

class Player {
	string name;
public:
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
};

class GamblingGame {
	Player* p = new Player[2];
public:
	GamblingGame() {
		cout << "***** 겜블링 게임을 시작합니다. *****" << endl;
		srand((unsigned)time(0));
	}
	void nameSet() {
		string name;
		cout << "첫번째 선수 이름>>";
		cin >> name;
		p[0].setName(name);
		cout << "두번째 선수 이름>>";
		cin >> name;
		p[1].setName(name);
	}
	string ranNum(string n) {
		int ran[3];
		cout << "\t\t";
		for (int i = 0; i < 3; i++) {
			ran[i] = rand() % 3;
			cout << ran[i] << "\t";
		}
		if (ran[0] == ran[1] && ran[0] == ran[2]) {
			n += "님 승리!!";
			return n;
		}
		else
			return "아쉽군요!";
	}
	void startGame() {
		string n;
		int i = 0;
		while (1) {
			string m;
			cout << p[i % 2].getName() << ":<Enter>\n";
			getline(cin, n);
			m = p[i % 2].getName();
			n = ranNum(n);
			if (n == "님 승리") {
				cout << m + n;
				break;
			}
			else
				cout << n << endl;
			i++;
		}
	}
};

int main(void)
{
	GamblingGame game;
	game.nameSet();
	game.startGame();
}