#include <iostream>
#include <string>
using namespace std;

class Trace {
	static string tag[100];
	static string debug[100];
	static int index;
public:
	static void put(string t1, string t2);
	static void print(string text = "all");
};

int Trace::index = 0;
string Trace::tag[100];
string Trace::debug[100];

void Trace::put(string t1, string t2) {
	tag[index] = t1;
	debug[index] = t2;
	index++;
}

void Trace::print(string text) {
	if (text == "all") {
		cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i < index; i++)
			cout << tag[i] << ":" << debug[i] << endl;
	}
	else {
		cout << "----- " << text << "태그의 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i < index; i++)
			if (text == tag[i])
				cout << tag[i] << ":" << debug[i] << endl;
	}
}

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

int main(void)
{
	Trace::put("main()","프로그램 시작합니다");
	f();
	Trace::put("main()","종료");

	Trace::print("f()");
	Trace::print();
}