#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
	CLASS AS INTERFACE
-> 	An abstract class that has only pure virtual functions
->  All functions must be public
-> 	Every method must be implemented by the derived class

C++ doesn't have a explicit interface keyword
-> use abstract classes and pure virtual functions to achieve

-> It's normal to use an I_(Interface) before the name of the 
interface to be more visual

class I_Shape{ //interface Shape
	virtual void func1() = 0; //pure virtual methods
	virtual void func2() = 0;
	virtual ~I_Shape(){}
};

*/
class I_Printable{
	friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
	virtual void print(std::ostream &os) const = 0;
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj){
	obj.print(os);
	return os;
}


class Account : public I_Printable{
public:
	virtual void withdraw(double amount){
		cout << "In Account withdraw" << endl;
	}
	
	virtual void print(std::ostream &os) const override{
		os << "Account display";
	}
	
	virtual ~Account(){}
};

class Checking : public Account{
public:
	virtual void withdraw(double amount){
		cout << "In Checking withdraw" << endl;
	}
	
	virtual void print(std::ostream &os) const override{
		os << "Checking display";
	}
	
	virtual ~Checking(){}
};

class Savings : public Account{
public:
	virtual void withdraw(double amount){
		cout << "In Savings withdraw" << endl;
	}
	
	virtual void print(std::ostream &os) const override{
		os << "Savings display";
	}
	
	virtual ~Savings(){}
};

class Trust : public Account{
public:
	virtual void withdraw(double amount){
		cout << "In Trust withdraw" << endl;
	}
	
	virtual void print(std::ostream &os) const override{
		os << "Trust display";
	}
	
	virtual ~Trust(){}
};

int main()
{
	Account *p1 = new Account();
	cout << *p1 << endl;
	
	Account *p2 = new Checking();
	cout << *p2 << endl;
	
	delete p1;
	delete p2;
	return 0;
}
