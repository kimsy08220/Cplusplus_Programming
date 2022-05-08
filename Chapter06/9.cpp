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
	cout << "********** 게시판입니다. **********" << endl;
	for (int i = 0; i < index; i++)
		cout << i << ":" << p[i] << endl;
	cout << endl;
}

int main(void)
{
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
}