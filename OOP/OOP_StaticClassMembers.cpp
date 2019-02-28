#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
--------STATIC MEMBERS--------
-> Members of a class accessible independent of a object
-> Can be used to count the number of created objects of a class
-> Can be used to count the number of active objects of a class
*/

class Player{
private:
	static int num_players; //creates a static variable
	string name;
	int health;
	int xp;	
public:
	Player(string name = "None", int health = 100, int xp = 0);
	~Player();
	Player(const Player &source);
	int get_health(){return health;}
	int get_xp(){return xp;}
	static get_num_players(){return num_players;}
	//creates a static method. Only static methods can work with static variables
};

Player::Player(string name, int health, int xp) 
	: name{name}, health{health}, xp{xp}{
	num_players++;
	cout << "Constructor" << endl;}

Player::~Player(){
	num_players--;
	cout << "Destructor" << endl;}

Player::Player(const Player &source)
	: Player(source.name,source.health,source.xp){
	cout << "Copy Constructor" << endl;}

int Player::num_players{0}; 
//initialize the static variable.
//if using .h and .cpp files, initialization must be made
//in .cpp file
	
int main()
{
	cout << Player::get_num_players() << endl;
	Player *p1 = new Player;
	cout << Player::get_num_players() << endl;
	Player *p2 = new Player;
	cout << Player::get_num_players() << endl;
	Player *p3 = new Player;
	cout << Player::get_num_players() << endl;
	Player p4;
	cout << Player::get_num_players() << endl;
	Player p5;
	cout << Player::get_num_players() << endl;
	
	delete p1;
	cout << Player::get_num_players() << endl;
	delete p2;
	cout << Player::get_num_players() << endl;
	delete p3;
	cout << Player::get_num_players() << endl;

	
	return 0;
}
