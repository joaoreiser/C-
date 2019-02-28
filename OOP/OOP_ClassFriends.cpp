#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
The "friend" keyword garantee access of a method or
other class to a specific class.
Friendship is not symmetric or transitive
-> if A is friend of B, B is not automatically friend of A
-> Friendship must be explicit
*/

class Player{
	string name;
	int health;
	int xp;
	friend void display_player(Player &p);
	//-> display_player is a external method friend of Player
	//-> it has access of Player's members and don't need to use
	//-> getters and setters to access the variables
	
	//friend void Other_Class::display_player(Player &p);
	//-> a especific method of another class can have access to the friend class
	
	//friend class Other_Class;
	//-> a full different class can be friend and have access to a class
	
public:
	//...
}

void display_player(Player &p){
	cout << p.name << " " << p.health << " " p.xp << endl;
}

int main()
{

	return 0;
}
