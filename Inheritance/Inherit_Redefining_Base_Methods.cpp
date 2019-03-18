#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
	Methods of a Base class can be redefined in the
Derived class.
	The binding is static, base object will can the base
method, the derived object will call the derived method.
	The base method can be explicitly called from the 
derived. 

********
	The variable in the base class must be kept in the base
class. In this example, balance is a base class variable. This
value must be kept in the account class and accessed from there
when needed.
	When using inheritance, all the public methods are inherited,
so, they can be used by the derived. When necessary, some redefinition
can be done. 
*/

class Account{
protected:
	double balance;
public:
	Account();
	Account(double balance);
	~Account();
	void deposit(double amount);
	void withdraw(double amount);
	double get_balance(){return balance;}
};

Account::Account() : balance{0}{
}

Account::Account(double balance) : balance{balance}{
}

Account::~Account(){
}

void Account::deposit(double amount){
	balance+=amount;
}

void Account::withdraw(double amount){
	if(balance-amount >= 0){
		balance-=amount;
	}
	else{
		cout << "Insufficient funds" << endl;
	}
}

class Savings_Account : public Account{
protected:
	double int_rate;
public:
	Savings_Account();
	Savings_Account(double balance, double int_rate);
	~Savings_Account();
	void deposit(double amount); //savings_account has a different calc 
};

Savings_Account::Savings_Account() 
	: Savings_Account{0.0, 0.0}{
}

Savings_Account::Savings_Account(double balance, double int_rate) 
	: Account{balance}, int_rate{int_rate}{
}

Savings_Account::~Savings_Account(){
}

void Savings_Account::deposit(double amount){
	amount += (amount * int_rate/100); //make the calc
	Account::deposit(amount); //and call the base method to save the value
}

int main()
{
	cout << "----------Account----------\n" << endl;
	Account a1{1000};
	cout << a1.get_balance() << endl;
	
	a1.deposit(500);
	cout << a1.get_balance() << endl;
	
	a1.withdraw(500);
	cout << a1.get_balance() << endl;
	
	a1.withdraw(2000);
	cout << a1.get_balance() << endl;
	
	cout << "\n-----------Savings_Account--------------\n" << endl;
	
	Savings_Account s1{1000, 5};
	cout << s1.get_balance() << endl;
	
	s1.deposit(500); //redefined
	cout << s1.get_balance() << endl; //inherited
	
	s1.deposit(1000); //redefined
	cout << s1.get_balance() << endl; //inherited
	
	s1.withdraw(500); //inherited
	cout << s1.get_balance() << endl; //inherited
	
	s1.withdraw(5000); //inherited
	cout << s1.get_balance() << endl; //inherited
	
	return 0;
}
