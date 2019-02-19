#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
=> with an object
-> dot operator(.)
	- object.method;
	- object.method2(int, float);

=> with a pointer to an object
- two options
-> dereference first
	- class *object = new class(); //object creation
	- (*object).method; //access method
	- (*object).method2(int, float);

-> using the arrow operator (->)
	- class *object = new class(); //object creation
	- object->method; //access method
	- object->method2(int, float);
*/


class Player{
public: //everything is accessible from object
	//attributes
	string name;
	int health;
	int xp;
	
	//methods
	void talk(string);
	bool is_dead();
}; //don't forget the semicolon

class Account{
public:
	//attributes
	string name;
	double balance;
	
	//methods
	bool deposit(double);
	bool withdraw(double);
};

int main()
{
	Player p1;
	p1.name = "Joao";
	p1.health = 100;
	p1.xp = 100;
	
	Account a1;
	a1.name = "Account1";
	a1.balance = 9.5;
	
	cout << p1.name << " " << p1.health << endl;
	cout << a1.name << " " << a1.balance << endl;
	
	Player *p2 = new Player; //never forget the new
	(*p2).name = "Other";
	(*p2).health = 50;
	p2->xp = 50;
	
	cout << p2->name << " " << p2->health << endl;
	
	delete p2;
	
	return 0;
}
