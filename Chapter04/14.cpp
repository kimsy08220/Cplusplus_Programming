#include <iostream>
#include <string>
using namespace std;

// �ָ�...

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
		cout << "***** �׺� ������ �����մϴ�. *****" << endl;
		srand((unsigned)time(0));
	}
	void nameSet() {
		string name;
		cout << "ù��° ���� �̸�>>";
		cin >> name;
		p[0].setName(name);
		cout << "�ι�° ���� �̸�>>";
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
			n += "�� �¸�!!";
			return n;
		}
		else
			return "�ƽ�����!";
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
			if (n == "�� �¸�") {
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