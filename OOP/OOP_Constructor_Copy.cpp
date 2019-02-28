#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
COPY OF OBJECTS

-> Pass-by-value /////////////////////////

void function(class_name obj){
	//obj is a copy of an object
	//code here
	//destructor will be called
	}
	
-> Return object by value ////////////////

class_name my_obj;

class_name function_name(){
	class_name object_name(//arguments);
	return object_name; //returns a copy of the object
}

my_obj = function_name();

-> copying an existing object //////////////

class_name obj1;
class_name obj2 {obj1}; //obj2 is a copy of obj1


//must pay attention when copying objects with pointers
//the address of the pointer can be copied, not its content

*/

/*
/////////COPY CONSTRUCTOR////////
class_name(const class_name &source);

class_name::class_name(const class_name &source)
	:atrb1(source.atrb1), atrb2(source.atrb2), ...{}
*/

int main()
{

	return 0;
}
