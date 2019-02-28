#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
	Methods have access to class attributes. Don't need to pass arguments
	Can be implemented inside the class declaration,
	Outside the class, using class_name::method_name or 
	in separate files [header (.h) and implement (.cpp)].
*/

///////////INSIDE///////////
class Account{
private:
	double balance;
public:
	void set_balance(double bal){
		balance = bal;
	}
	double get_balance(){
		return balance;
	}
};
////////////////////////////

//////////OUTSIDE///////////
class Account2{
private:
	double balance;
public:
	void set_balance(double bal);
	double get_balance();
};

void Account2::set_balance(double bal){
	balance = bal;
}
double Account2::get_balance(){
	return balance;
}
////////////////////////////

///////SEPARATE_FILES///////
/*
to use separate files implementation is important to use
Include Guards. They prevent more than one declaration error.

On .h file:

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

	//class declaration

#endif

or 

#pragma once //not suppported by all compiles
	
	//class declaration 

*/

//Account.h
/*

class Account2{
private:
	double balance;
public:
	void set_balance(double bal);
	double get_balance();
};

*/

//Account.cpp
/*

#include "Account.h" //include the .h file

void Account2::set_balance(double bal){
	balance = bal;
}
double Account2::get_balance(){
	return balance;
}

*/

//main.cpp
/*

#include "Account.h" //always include the .h file

*/

////////////////////////////

int main()
{
	Account account1;
	Account2 account2;
	
	account1.set_balance(100.0);
	account2.set_balance(200.0);
	
	cout << account1.get_balance() << " " << account2.get_balance() << endl;
	
	return 0;
}
