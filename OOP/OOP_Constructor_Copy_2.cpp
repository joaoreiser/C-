#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

class Player{
private:
	string name;
	int health;
	int xp;
public:
	Player(string n="None", int h=0, int x=0); //INSTANCE
	Player(const Player &src); //INSTANCE
	~Player(); //INSTANCE
	
	string get_name(){return name;}
	int get_health(){return health;}
	int get_xp(){return xp;}
};

Player::Player(string n, int h, int x) //CONSTRUCTOR
	:name{n}, health{h}, xp{x}{
	cout << "Constructor for " << name << endl;
}

Player::Player(const Player &src) //COPY CONSTRUCTOR
	:name(src.name), health(src.health), xp(src.xp){
	cout << "Copy Constructor of " << src.name << endl;	
	}

Player::~Player(){ //DESTRUCTOR
	cout << "Destructor for " << name << endl;
	}

void display_object(Player obj){
	cout << "Name: " << obj.get_name() << endl;
	cout << "Health: " << obj.get_health() << endl;
	cout << "XP: " << obj.get_xp() << endl;
}


int main()
{
	Player empty;
	
	display_object(empty);
	
	Player p1("Joao");
	Player p2("Pedro", 10);
	Player p3("Jose", 20, 5);
	
	display_object(p3);
	
	Player *p4 = new Player("Ze", 50, 50);
	
	display_object(*p4);
	
	delete p4;
	
	return 0;
}
