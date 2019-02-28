#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

//CONSTRUCTOR

/*
Default Constructor

class Account{
private:
	string name;
	double balance;
public:
	//with no constructor declaration, system will create an empty one
	
	Account(){ //constructor with no args and with default values
		name = "Joao";
		double = 1000.0;
	}
	
	Account(string n, double b){ //constructor with args -> expect values -> using this way, no empty constructor will be accepted.
		name = n;
		balance = b;
	}
};

*/

/*

CONSTRUCTOR INITIALIZATION LISTS

previous way:

Player::Player(){
	name = "Name";
	health = 10;
	xp = 10;
}

Player::Player(string n, int h, int x){
	name = n;
	health = h;
	xp = x;
}

=>  in this case, the variables of the object are created with junk and
	when the constructor executes, the default values are assigned.

better way:

Player::Player() : name{"Joao"}, health{10}, xp{10}{}

Player::Player(string n) : name{n}, health{10}, xp{10}{} 

Player::Player(string n, int h, int x) : name{n}, health{h}, xp{x}{}

=>	in this case, the variables of the object are created with the specified 
	value, not with junk.

*/

/*
DELEGATING CONSTRUCTORS

A constructor that calls another constructor

Player::Player(string n, int h, int x) : name{n}, health{h}, xp{x}{}

Player::Player() : Player{"None", 0, 0}{} //calls the first constructor and specifies the values

Player::Player(string n} : Player{n, 0, 0}{}

*/

/*
DEFAULT CONSTRUCTOR PARAMETERS

Player::Player(string n, int h, int x} : name{n}, health{h}, xp{x}{}

*/

class Player{
private:
	string name;
	int health;
	int xp;
public:
	//NORMAL CALL
	/*
	Player() : name{"Joao"}, health{10}, xp{0}{}
	Player(string n) : name{n}, health{10}, xp{0}{}
	Player(string n, int h) : name{n}, health{h}, xp{0}{}
	Player(string n, int h, int x) : name{n}, health{h}, xp{x}{}
	*/
	//WITH DELEGATE CALL
	/*
	Player(string n, int h, int x) : name{n}, health{h}, xp{x}{}
	Player() : Player{"Joao", 10, 0}{}
	Player(string n) : Player{n, 10, 0}{}
	Player(string n, int h) : Player{n, h, 0}{}
	*/
	
	/*
	//MASTER DEFAULT CONSTRUCTOR
	Player(string n="None", int h=0, int x=0);
	*/
	
	string get_name(){return name;}
};

/*
//MASTER DEFAULT CONSTRUCTOR
//Only one constructor can handle all cases
Player::Player(string n, int h, int x) : name{n}, health{h}, xp{x}{}
*/

int main()
{
	Player p1;
	Player p2("Other");
	Player p3("Another", 20);
	Player p4("AnotherElse", 30, 10);
	
	Player *p5 = new Player("Me", 100, 50);
	
	cout << p1.get_name() << " " << p2.get_name() << " " << p3.get_name() << " " << p4.get_name() << " " << (*p5).get_name() << " " << p5->get_name() << endl;
	
	return 0;
}
