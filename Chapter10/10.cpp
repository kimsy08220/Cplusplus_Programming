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
	v.push_back(Nation("���ѹα�","����"));
	v.push_back(Nation("�߱�", "����¡"));
	v.push_back(Nation("����", "���"));
	v.push_back(Nation("�̱�", "�ͽ���"));
	v.push_back(Nation("�븸", "Ÿ�̺���"));
	v.push_back(Nation("ĳ����", "��Ÿ��"));
	v.push_back(Nation("������", "���׹�"));
	v.push_back(Nation("������", "�ĸ�"));
	v.push_back(Nation("����Ʈ", "ī�̷�"));
	cout << "***** ������ ���� ���߱� ������ �����մϴ�. *****" << endl;

	while (1) {
		int num;
		cout << "���� �Է� : 1, ���� : 2, ���� : 3 >> ";
		cin >> num;

		switch (num) {
		case 1:
			cout << "���� " << v.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�." << endl;
			cout << "����� ������ �Է��ϼ���(no no �̸� �Է³�)" << endl;
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
				cout << v.at(random).getNation() << "�� ������?";
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