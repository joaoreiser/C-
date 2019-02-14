#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

void say_hello();
void say_world();

int main()
{
	//	name
	//should be meaningful
	//usually a verb or verb phrase
	
	//	return type function_name(parameter1, parameter2){
	//		statements;
	//		return; 
	//	}
	say_hello();
	
	return 0;
}

void say_hello(){
	cout << "Hello ";
	say_world();
}

void say_world(){
	cout << "World!" << endl;
}