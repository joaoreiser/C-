#include <iostream>
#include <vector>
#include <cstring> //library para c-style strings
#include <cctype>
#include <cstdlib> //converts c-style strings to other types

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	// how to work with strings in C 
	// works for C++, but C++ has more advanced tools
	// array of char
	// terminated by a NULL char
	// "C++ is fun"
	// |C|+|+|' '|i|s|' '|f|u|n|\0| -> in memory
	
	// char_my_name[8]; [?|?|?|?|?|?|?|?]
	// my_name = "Joao";[J|o|a|o]	--> Error (my_name is waiting 8 chars, not 4)
	// stpcpy(my_name, "Joao") 		--> This function fix the problem 
	
	char str[80]{};
	
	cout << str << endl;
	
	strcpy(str, "Hello"); // copy word in string
	strcat(str, "there");  //concatenate word in string
	
	cout << strlen(str) << endl; //verify the lenght of string
	
	cout << strcmp(str, "Another"); //compare the lenght (1 -> str1 bigger than str2)
	
	return 0;
	
}