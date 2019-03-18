#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
	C++ PROVIDES FLEXIBILITY WITH MEMORY MANAGEMENT
	
-> allocation
-> deallocation
-> lifetime management

	RAW POINTERS ISSUES
	
-> unitialized (wild) pointers
-> memory leaks
-> dangling pointers (pointers pointing to invalid address)
-> not exception safe
*/

/*
	SMART POINTERS
-> are objects
-> only points to heap-allocated memory
-> automatically call delete when no longer needed
-> RAII* principles (management system that controls resources use)
-> Types: Unique Pointers (unique_ptr), Shared Pointers (shared_ptr), Weak Pointers (weak_ptr)

*-------------RAII steps-------------
-> resource acquisition
	- open file
	- allocate memory
	- acquire a lock
-> Initialization
	- resource is acquired in a constructor
-> Resource Relinquishing
	- destructor
		- close the file
		- deallocate memory
		- release lock
-------------RAII steps-------------

*/


/*

#include <memory> //library needed to use smart pointers

-> operators * (dereference) and -> (selection) work with
smart pointers. Pointer arithmetic (++, --) does NOT!!!
-> Smart Pointers can have custom deleters

std::smart_pointer_type <Name_Class> pointer_name(new Name_Class());

*/


int main()
{

	return 0;
}
