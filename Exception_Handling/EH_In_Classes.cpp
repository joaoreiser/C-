#include <iostream>
#include <vector>
#include <string>
#include <memory> 

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
	EH IN CLASSES
=> Methods -> works the same way as for functions

=> Constructors -> 	constructors may fail
					throw an exception if can't initialize an object

=> Destructors -> DO NOT THROW exceptions from destructors

*/

/*
	CONSTRUCTOR
-> in the constructor, verify if any argument is out of
range or has an illegal value and throws an exception
*/
class IllegalValueException{
public:
	IllegalValueException(){cout << "Exception Constructor" << endl;}
	~IllegalValueException(){cout << "Exception Destructor" << endl;}
};

class Class{
	int value; //must be positive
public:
	Class(int v) : value{v}{
		cout << "Class Constructor" << endl;
		if(v < 0){
			throw IllegalValueException();
		}
	}
	~Class(){cout << "Class Destructor" << endl;}
};


int main()
{
	try{
		std::unique_ptr<Class> ptr = std::make_unique<Class>(-100);
		cout << "Object Created" << endl;
	}
	catch(const IllegalValueException &t){
		cout << "Object NOT Created. Exception Occurred" << endl;
	}

	return 0;
}
