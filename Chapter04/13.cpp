#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string text;
public:
	Histogram(string text) {
		this->text = text;
		cout << text;
	}
	void put(string text) {
		this->text += text;
		cout << text;
	}
	void putc(char c) {
		text += c;
		cout << c;
	}
	void print() {
		int alpha[26] = {0};
		int num = 0;
		for (int i = 0; i < text.length(); i++) {
			if (isalpha(text[i])) {
				char c = tolower(text[i]);
				alpha[c - 97]++;
				num++;
			}
		}
		cout << endl << endl;
		cout << "ÃÑ ¾ËÆÄºª ¼ö " << num << endl << endl;
		for (int i = 0; i < 26; i++) {
			char c = 'a' + i;
			cout << c << " (" << alpha[i] << ")\t: ";
			for (int j = 0; j < alpha[i]; j++)
				cout << "*";
			cout << endl;
		}
	}
};

int main(void)
{
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help. ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}