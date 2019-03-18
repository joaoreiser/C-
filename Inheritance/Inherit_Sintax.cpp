#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
class Base{
	//class members
};

class Derived: access-especifier Base{
	access-especifier: public, private or protected
	//class members
	public:
		most common
		"is-a" relationship
	private and protected:
		"has-a" relationship, but different from Composition
};



class Account{
	//class members
};

class Savings_Account: public Account{
	//class members
};

*/

class Account{
public:
	string name;
	double value;
	Account();
	~Account();
	void deposit(double amount);
	void withdraw(double amount);	
};

Account::Account(): name{"None"}, value{0}{
	cout << "Constructor" << endl;
}

Account::~Account(){
	cout << "Destructor" << endl;
}

void Account::deposit(double amount){
	cout << "Account deposit called with " << amount << endl;
}

void Account::withdraw(double amount){
	cout << "Account withdraw called with " << amount << endl;
}

class Savings_Account : public Account{
public:
	int quantity;
	Savings_Account();
	~Savings_Account();
	//void deposit(double amount);
	//void withdraw(double amount);
};

Savings_Account::Savings_Account(): quantity{0}{
	cout << "Constructor SA" << endl;
}

Savings_Account::~Savings_Account(){
	cout << "Destructor SA" << endl;
}
/*
void Savings_Account::deposit(double amount){
	cout << "Savings Account deposit called with " << amount << endl;
}

void Savings_Account::withdraw(double amount){
	cout << "Savings Account withdraw called with " << amount << endl;
}
*/

int main()
{
	Account acc{};
	Account *p_acc = new Account();
	
	acc.deposit(1000);
	acc.withdraw(300);
	
	p_acc->deposit(2000);
	p_acc->withdraw(1000);
	
	Savings_Account s_acc{};
	Savings_Account *p_sa = new Savings_Account();
	
	s_acc.deposit(1000);
	s_acc.withdraw(400);
	
	p_sa->deposit(4000);
	p_sa->withdraw(2300);
	
	cout << p_acc->name << " " << p_acc->value << endl;
	cout << s_acc.quantity << " " << s_acc.name << endl;
	
	delete p_acc;
	delete p_sa;
	
	return 0;
}
