#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
Unary Operators as Global Functions (++, --, -, !)

	return_type operator'X'(type &obj);
	
Example: -> function must be declared as friend in class declaration
	
-> 	As this operator overload is not part of a class, the used string must
	be explicitly inserted. 
	
	Mystring operator-(const Mystring &obj){
		char *buff = new char[std::strlen(obj.str) + 1];
		std::stpcpy(buff, obj.str);
		for(size_t i=0; i < std::strlen(buff); i++){
			buff[i] = std::tolower(buff[i]);
		}
		Mystring temp{buff};
		delete [] buff;
		return temp;
	}

	
Binary Operators as Global Functions (++, --, -, !)

	return_type operator'X'(const type &obj1, const type &obj2);
	
Example:
	
	bool operator==(const Mystring &lhs, const Mystring &rhs){
		return (std::strcmp(lhs.str, rhs.str) == 0);
	}
	
-> 	if declared as friend of Mystring, can access private str attribute,
	otherwise, must use getter methods
	
Example
	
	Mystring operator+(const Mystring &lhs, const Mystring &rhs){
		size_t buff_size = std::strlen(lhs.str) + std::strlen(rhs.str) + 1;
		char *buff = new char[buff_size];
		std::strcpy(buff, lhs.str);
		std::strcat(buff, rhs.str);
		Mystring temp{buff};
		delete [] buff;
		return temp;
	}
	
*/


int main()
{

	return 0;
}
