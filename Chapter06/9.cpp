#include <iostream>
#include <string>
using namespace std;

class Board {
public:
	static int index;
	static string p[100];
	static void add(string text);
	static void print();
};

int Board::index = 0;
string Board::p[100];

void Board::add(string text)
{
	p[index] = text;
	index++;
}

void Board::print()
{
	cout << "********** �Խ����Դϴ�. **********" << endl;
	for (int i = 0; i < index; i++)
		cout << i << ":" << p[i] << endl;
	cout << endl;
}

int main(void)
{
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}