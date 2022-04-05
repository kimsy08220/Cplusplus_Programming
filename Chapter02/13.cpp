#include <iostream>
using namespace std;

int main(void)
{
	int n1, n2;
	cout << "**** 승리장에 오신 것을 환영합니다. ****" << endl;

	while (1) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>  ";
		cin >> n1;
		if (n1 == 1) {
			cout << "몇 인분? ";
			cin >> n2;
			cout << "짬뽕 " << n2 << "인분 나왔습니다." << endl;
		}
		else if (n1 == 2) {
			cout << "몇 인분? ";
			cin >> n2;
			cout << "짜장 " << n2 << "인분 나왔습니다." << endl;
		}
		else if (n1 == 3) {
			cout << "몇 인분? ";
			cin >> n2;
			cout << "군만두 " << n2 << "개 나왔습니다." << endl;
		}
		else if (n1 == 4) {
			cout << "오늘 영업은 끝났습니다." << endl;
			break;
		}
		else {
			cout << "다시 주문하세요!!" << endl;
		}
	}
}