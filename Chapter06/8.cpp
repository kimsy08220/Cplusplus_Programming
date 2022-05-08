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
		cout << "----- ��� Trace ������ ����մϴ�. -----" << endl;
		for (int i = 0; i < index; i++)
			cout << tag[i] << ":" << debug[i] << endl;
	}
	else {
		cout << "----- " << text << "�±��� Trace ������ ����մϴ�. -----" << endl;
		for (int i = 0; i < index; i++)
			if (text == tag[i])
				cout << tag[i] << ":" << debug[i] << endl;
	}
}

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}

int main(void)
{
	Trace::put("main()","���α׷� �����մϴ�");
	f();
	Trace::put("main()","����");

	Trace::print("f()");
	Trace::print();
}