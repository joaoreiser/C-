#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
POLYMORPHISM WITH REFERENCES

-> useful for passing objects to functions
that expects a Base class reference

use:
	BaseClass obj; //creates an object
	BaseClass &ref = obj; //creates a reference to the object
	ref.function(); //calls the method with the reference
	
	DerivedClass obj2; //creates an object
	BaseClass &ref2 = obj2; //creates a reference of the Base Class type
	ref2.function(); //calls the overrided method with the reference

ex:
	void do_withdraw(Account &account, double amount){
		account.withdraw(amount);
	}
	//do_withdraw is a function outside any class
	//it waits an Account type object reference and an amount 
	
	Account a; //Base Class
	do_withdraw(a, 1000);
	
	Savings s; //Derived Class with overrided method withdraw()
	do_withdraw(s, 2000);
	
	Trust t; //Derived Class with overrided method withdraw()
	do_withdraw(t, 3000);
*/

int main()
{

	return 0;
}
