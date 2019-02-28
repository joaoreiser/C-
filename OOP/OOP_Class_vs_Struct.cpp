#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
Struct vs Classes

structs came from C
in C++, structs have very similar behaviour to classes
in structs, the members are public by default
*/

class Person{
	string name;
	string get_name();
}; //both are private by default

struct Person_S{
	string name;
	string get_name();
}; //both are public by default

//Struct
//	-> use them with passive members with public access
//	   an aggregator of variables
//	-> don't declare methods in structs

//Class
//	-> use them for active members with private access
//	-> implement getters/setters
//	-> implement members methods

int main()
{
	Person cls;
	Person_S str;
	
	return 0;
}
