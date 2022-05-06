#include <iostream>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	// (1)
	/*Person();
	Person(int id, string name);
	Person(int id, string name, double weight);*/
	// (2)
	Person(int id=1, string name="Grace", double weight=20.5);
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

// (1)
//Person::Person() {
//	id = 1;
//	weight = 20.5;
//	name = "Grace";
//}
//Person::Person(int id, string name) {
//	this->id = id;
//	weight = 20.5;
//	this->name = name;
//}
//Person::Person(int id, string name, double weight) {
//	this->id = id;
//	this->weight = weight;
//	this->name = name;
//}

Person::Person(int id, string name, double weight)
{
	this->id = id;
	this->weight = weight;
	this->name = name;
}

int main(void)
{
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}