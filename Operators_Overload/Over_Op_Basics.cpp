#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
allow an operator to perform different actions and to 
allow an operator to use user-defined types
ex: + -> numbers addition and strings concatenation

OPERATORS THAT CAN'T BE OVERLOADED
"::" , ":?" , ".*' , ".' , "sizeof"

**when dealing with raw pointers in classes, it's necessary to
overload the assignment operator (=) because a shallow copy is
the default.  

*/

//COPY ASSIGNMENT -> L-Value References
/*
	type &type::operator'X'(const type &rhs);
	
		className &classNam e::operator=(const className &rhs);
		
		Obj1 = Obj2; -> Obj1.operator=(Obj2);
*/

//MOVE ASSIGNMENT -> R-Value References
/*
	my_class s1; //creates a empty instance of the class
	s1 = my_class("Hello"); 
	//to assign the instance to an object, a temporary object is created and assigned to s1 by copy by default.
	
	s1 = "Other"; 
	//to assign a now value to an object, a temporary object is created and assigned to s1 by copy.
	
	//doing this by move saves has a lower overhead
	
	type &type::operator'X'(type &&rhs);
*/

int main()
{

	return 0;
}
