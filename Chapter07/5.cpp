#include <iostream>
using namespace std;

// (1)
//class Color {
//	int red, green, blue;
//public:
//	Color() { red = green = blue = 0; }
//	Color(int r, int g, int b) { red = r; green = g; blue = b; }
//	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
//	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
//	Color operator+(Color b);
//	bool operator==(Color f);
//};
//
//Color Color::operator+(Color b) {
//	Color tmp;
//	tmp.red = this->red + b.red;
//	tmp.green = this->green + b.green;
//	tmp.blue = this->blue + b.blue;
//	return tmp;
//}
//
//bool Color::operator==(Color f) {
//	if (this->red == f.red && this->green == f.green && this->blue == f.blue)
//		return true;
//	return false;
//}

// (2)
class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
	friend Color operator+(Color a, Color b);
	friend bool operator==(Color a, Color b);
};

Color operator+(Color a, Color b) {
	Color tmp;
	tmp.red = a.red + b.red;
	tmp.green = a.green + b.green;
	tmp.blue = a.blue + b.blue;
	return tmp;
}

bool operator==(Color a, Color b) {
	if (a.red == b.red && a.green == b.green && a.blue == b.blue)
		return true;
	return false;
}

int main(void) {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음" << endl;
	else
		cout << "보라색 아님" << endl;
}