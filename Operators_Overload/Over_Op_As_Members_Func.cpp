#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

//Unary Operators (++, --, -, !)
/*
	return_type type::operator'X'();
	
Example: overload - to make lowercase operation

	Mystring Mystring::operator-() const{				//header of the overload with const (input data with not be changed)
		char *buff = new char[std::strlen(str) + 1];	//allocate memory for work
		std::stpcpy(buff, str);							//copy content of str in the allocated space
		for(size_t i=0; i < std::strlen(buff); i++){	//run the string 
			buff[i] = std::tolower(buff[i]);			//and apply lowercase operation
		}
		Mystring temp{buff};							//create a temporary Mystring object with buff as content
		delete [] buff;									//deallocate the memory
		return temp;									//return the Mystring object with the lowercase content
	}
	
*/

//Binary Operators (+, -, ==, !=, <, >, ...)
/*
	return_type operator'X'(const &type rhs);
	return_type type::operator'X'(const &type rhs){}

Example: overload == to compare strings

	bool operator==(const Mystring &rhs) const;
	bool Mystring::operator==(const Mystring &rhs) const{
		return (std::strcmp(str, rhs.str) == 0);
	}
	
	use: if(s1 == s2) -> s1 and s2 are Mystring objects
	
Example: overload + to concatenate strings

	Mystring operator+(const Mystring &rhs) const;
	Mystring Mystring::operator+(const Mystring &rhs) const{
		size_t buff_size = std::strlen(str) + std::strlen(rhs.str) + 1; //calculate the length of both strings together
		char *buff = new char[buff_size];								//allocate memory
		std::stpcpy(buff, str);											//copy the content of first string to buff
		std::strcat(buff, rhs.str);										//concatenate the second string
		Mystring temp{buff};											//create a temporary object with the content of buff
		delete [] buff;													//deallocate the memory
		return temp;													//return the object
	}
	
*/

int main()
{

	return 0;
}
