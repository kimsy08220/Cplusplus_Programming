#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	char coffee[100];
	int num, sum = 0, total = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;
	while (total <= 20000) {
		cout << "�ֹ�>> ";
		cin >> coffee >> num;
		if (strcmp(coffee, "����������") == 0) {
			sum = 2000 * num;
			total += sum;
			cout << sum << "�� �Դϴ�. ���ְ� �弼��" << endl;
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			sum = 2300 * num;
			total += sum;
			cout << sum << "�� �Դϴ�. ���ְ� �弼��" << endl;
		}
		else if (strcmp(coffee, "īǪġ��") == 0) {
			sum = 2500 * num;
			total += sum;
			cout << sum << "�� �Դϴ�. ���ְ� �弼��" << endl;
		}
		else {
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
		}
	}
	cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;
}