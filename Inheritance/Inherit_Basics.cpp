#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
Inheritance
-> create new classes from existing classes
-> the new class contains the data and behaviour of the existing class

* Related Classes:
=> Player, Enemy, Level Boss, Hero, SuperPlayer, ...
=> Account, SavingsAccount, CheckingAccount, TrustAccount, ...
=> Shape, Line, Oval, Circle, Square, ...
=> Person, Employee, Student, Faculty, Staff, Administrator, ...

-> Account
	balance, deposit, withdraw
-> SavingsAccount
	balance, deposit, withdraw, interest_rate
-> CheckingAccount
	balance, deposit, withdraw, minimum_balance, per_check_fee
-> TrustAccount
	balance, deposit, withdraw, interest_rate, specialized_withdraw
	
*reuse a class that already has the arguments and methods needed
	
class Account{
	balance, deposit, withdraw
};	

class SavingsAccount : public Account{
	interest_rate
};
	
#Single Inheritance -> a new class is created from another single class
#Multiple Inheritance -> a new class is created from several classes

 _______		  ________
|		|		 |		  |  -> base class: the class being extended
| base	|<-------|derived |	 -> derived class: the class being created
|_______|		 |________|


Student	-->	Person	<-- Employee  <-- Faculty 
								  <-- Staff
								  <-- Administrator
Student Is A Person
Employee Is A Person
Faculty Is An Employee and Is A Person
Staff Is An Employee and Is A Person
Administrator Is An Employee and Is A Person
   
 s*/

int main()
{

	return 0;
}
