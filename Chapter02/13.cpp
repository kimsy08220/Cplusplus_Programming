#include <iostream>
using namespace std;

int main(void)
{
	int n1, n2;
	cout << "**** �¸��忡 ���� ���� ȯ���մϴ�. ****" << endl;

	while (1) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>>  ";
		cin >> n1;
		if (n1 == 1) {
			cout << "�� �κ�? ";
			cin >> n2;
			cout << "«�� " << n2 << "�κ� ���Խ��ϴ�." << endl;
		}
		else if (n1 == 2) {
			cout << "�� �κ�? ";
			cin >> n2;
			cout << "¥�� " << n2 << "�κ� ���Խ��ϴ�." << endl;
		}
		else if (n1 == 3) {
			cout << "�� �κ�? ";
			cin >> n2;
			cout << "������ " << n2 << "�� ���Խ��ϴ�." << endl;
		}
		else if (n1 == 4) {
			cout << "���� ������ �������ϴ�." << endl;
			break;
		}
		else {
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;
		}
	}
}