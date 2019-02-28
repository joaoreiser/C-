#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
Objects can be created to be constant,
with no change on its attributes allowed.
But for that, some changes need to be done
to allow some methods to run.
*/

class Player{
private:
	string name;
	int health;
	int xp;
public:
	Player(string name="None", int health=100, int xp=0);
	~Player();
	
	string get_name() const {return name;} 
	//adding a const after the method garanthees 
	//that the method will not change the content.
	//This allow const objects to call this method
	void set_name(string name){name = name;}
};

Player::Player(string name, int health, int xp) : name{name}, health{health}, xp{xp}{
	cout << "Constructor" << endl;
}

Player::~Player(){
	cout << "Destructor" << endl;
}
/*
Player(const Player &source){
	name(source.name), health(source.health), xp(source.xp)
}
*/

void display_player(const Player &p){ //expects a const object to display
	cout << p.get_name() << endl;
}

int main()
{
	const Player villain("Villain", 100, 100);
	
	cout << villain.get_name() << endl;
	
	//villain.set_name("Joao"); //not allowed (ERROR)
	
	display_player(villain);
	
	return 0;
}
