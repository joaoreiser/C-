#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
	EXCEPTION HANDLING
-> in C++, only for syncronous code, NOT for assyncronous (Threads)
-> dealing with extraordinary situation in a smooth manner
-> extraordinary situations:
	- insufficient resources
	- missing resources
	- invalid operations
	- range violations
	- underflows and overflows
	- illegal data
	- ...

=> Terminology

-> EXCEPTION: 			  an object or primitive signals that an error 
						  occurred

-> THROWING AN EXCEPTION: detect the error and send it to a part of
						  the program that can handle it

-> CATCHING AN EXCEPTION: handle the exception. May or may not terminate 
						  the program


=> Keywords

-> THROW: 				  throws an exception. Followed by an argument

-> TRY: 				  code that can potencially throw an exception

-> CATCH: 				  code that handle the exception. Can be multiple handlers						  
						  
*/

int main()
{
	int miles{};
	int gallons{};
	double miles_per_gallon{};
	
	cout << "Enter the miles: ";
	cin >> miles;
	cout << "Enter the gallons: ";
	cin >> gallons;
	
	try{ //try some code
		if(gallons == 0){ //condition
			throw 0; //throw something out (int)
		}
		miles_per_gallon = static_cast<double>(miles) / gallons;
		cout << "Result: " << miles_per_gallon << endl;
	}
	catch(int &t){ //catch the throw type (int) with some name
		cout << "ERROR" << endl;
	}
	
	
	return 0;
}
