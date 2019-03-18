#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
VIRTUAL FUNCTIONS

-> redefined functions are bound statically
-> overridden functions are bound dynamically
-> virtual functions are overridden
-> allow us to treat all derived objs generally as objs of the Base class

*/
/*
-> declare the function as virtual in the Base Class
-> virtual functions are virtual all the down the hierarchy
-> dynamic polymorphism is achieved only via Base class pointers or reference
-> It's NECESSARY to declare a VIRTUAL DESTRUCTOR in the Base Class

-> overridde the function in the Derived Class
-> function signature and return must match exactly
-> VIRTUAL keyword is NOT required on derived class, but is BEST PRACTICE
-> if overridden version is not provided, it is inherited from base class

class Account{ //Base Class
public:
	virtual void withdraw(double amount);
	...
	
	virtual ~Account(){ //------virtual destructor-------
	}
}

class Checking : public Account{
public:
	virtual void withdraw(double amount);
	...
}

*/

class Account{
public:
	virtual void withdraw(double amount){
		cout << "In Account:withdraw" << endl;
	}
	
	virtual ~Account(){
		cout << "Account Destructor" << endl;
	}
};

class Checking : public Account{
public:
	virtual void withdraw(double amount){
		cout << "In Checking:withdraw" << endl;
	}
	
	virtual ~Checking(){
		cout << "Checking Destructor" << endl;
	}
};

class Savings : public Account{
public:
	virtual void withdraw(double amount){
		cout << "In Savings:withdraw" << endl;
	}
	
	virtual ~Savings(){
		cout << "Savings Destructor" << endl;
	}
};

class Trust : public Account{
public:
	virtual void withdraw(double amount){
		cout << "In Trust:withdraw" << endl;
	}
	
	virtual ~Trust(){
		cout << "Trust Destructor" << endl;
	}
};

int main()
{
	//DYNAMIC BINDING only achieved via Base Class
	//pointers or reference
	Account *a = new Account();
	Account *c = new Checking();
	Account *s = new Savings();
	Account *t = new Trust();
	
	vector<Account*> vec{a,c,s,t}; //declaring a vector of Account pointers (Account*)
	
	cout << "\nIndependent Call\n" << endl;
	
	a->withdraw(1000);
	c->withdraw(1000);
	s->withdraw(1000);
	t->withdraw(1000);
	
	cout << "\nVector Call\n" << endl;
	
	for(auto v : vec){
		v -> withdraw(1000);
	}
	
	cout << "\nDestructors Call\n" << endl;
	delete a;
	delete c;
	delete s;
	delete t;
	
	return 0;
}
