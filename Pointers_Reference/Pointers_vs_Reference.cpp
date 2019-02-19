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
	/*when to use pass-by-value, pass-by-reference or pointers
	pass-by-value
		-> when function doesn't modify the parameter content
		-> the parameter is small and effient to copy
	
	pass-by-reference using reference
		-> when the function does modify the parameter content
		-> the parameter is expensive to copy
		-> the parameter will never be nullptr
	
	pass-by-reference using CONST reference	
		-> when the function does not modify the parameter content
		-> the parameter is expensive to copy
		-> the parameter will never be nullptr
		
	pass-by-reference a pointer
		-> when the function does modify the parameter content
		-> the parameter is expensive to copy
		-> the parameter pointer can be/be_set to nullptr
	
	pass-by-reference a pointer to CONST
		-> when the function does not modify the parameter content
		-> the parameter is expensive to copy
		-> the parameter pointer can be/be_set to nullptr
	
	pass-by-reference a CONST pointer to CONST
		-> when the function does not modify the parameter content
		-> the parameter is expensive to copy
		-> the parameter pointer can be nullptr
		-> the parameter pointer will never the set to nullptr
	
	
	RECAP:
		-> The parameter need to be changed?
			NO: 
				The parameter is small?
					YES: Pass-by-Value
					NO: The pointer will/can be nullptr?
						Yes: Pass-by-Reference a Pointer
						No: Pass-by-Reference a Reference
			YES: The pointer will/can be nullptr?
					YES: Pass-by-Reference a Pointer
					NO: Pass-by-Reference a Reference
	
	
	*/
	return 0;
}
