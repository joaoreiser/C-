#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
CONSTRUCTOR
-> invoked during object creation
-> useful for initialization
-> same name as the class and no return
-> can be overloaded

class Player{
private:
	string name;
	int health;
	int xp;
public:
	//three options constructors
	Player();
	Player(string name);
	Player(string name, int health, int xp);
};

*/

/*
DESTRUCTOR
-> same name as the class with a (~)
-> invoked automatically when an object is destroyed
-> no return and arguments
-> only 1 destructor per class
-> useful to release memory and resources

class Player(){
...
public: 
	~Player();
};

-> when an object goes out of scope, destructors are called
   automatically
-> with object pointers, when calling "delete object;"

*/


class Test{
private:
	string name;
	int int_value;
	double float_value;
public:
	Test(){
		cout << "Constructor 1" << endl;
	}
	Test(string name){
		cout << "Constructor 2" << endl;
	}
	Test(int int_value){
		cout << "Constructor 3" << endl;
	}
	Test(double float_value){
		cout << "Constructor 4" << endl;
	}
	Test(string name, int int_value, double float_value){
		cout << "Constructor 5" << endl;
	}	
	~Test(){
		cout << "Destructor Call" << endl;
	}
};


int main()
{
	Test test1;
	{//scope
		Test test2("Name");
	}//end scope
	{
		Test test3(10);
	}
	{
		Test test4(5.2);
	}
	{
		Test test5("Name", 10, 5.2);
	}
	
	Test *test6 = new Test;
	Test *test7 = new Test(4.5);
	
	delete test6;
	delete test7;
	
	
	return 0;
}
