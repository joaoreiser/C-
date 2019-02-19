#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main()
{
	//Uninitialized Pointers
	
	//	int *ptr_int; //points to anywhere??
	//	*ptr_int = 100; //can cause a crash or unespectable behaviour
	
	//Dangling Pointers
	//	-> Pointer that points to released memory (after delete)
	//	-> Pointer that points to memory that is invalid (function local variables)
	
	//Not checking if NEW failed
	//	-> if NEW fail, an exception is thrown
	//	-> use exception handling
	//	-> can crash the program
	
	//Leaking memory (most common problems)
	// 	-> Forget to release memory with delete
	//	-> Lost a pointer. No way to have the storage back. Less memory available
	
	
	return 0;
}
