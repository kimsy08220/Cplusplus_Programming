#include <iostream>
using namespace std;

class Account {
	string name;
	int id;
	int balance;
public:
	Account(string n, int i, int b);
	void deposit(int m);
	string getOwner();
	int inquiry();
	int withdraw(int m);
};

Account::Account(string n, int i, int b) {
	name = n;
	id = i;
	balance = b;
}

void Account::deposit(int m) {
	balance += m;	// balance = balance + m;
}

string Account::getOwner() {
	return name;
}

int Account::inquiry() {
	return balance;
}

int Account::withdraw(int m) {
	balance -= m;
	return balance;
}

int main(void)
{
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}