#include <iostream>
#include <vector>
#include <string>
#include <memory>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

class IllegalValueException : public std::exception{
public:
	IllegalValueException() noexcept = default; //noexcept -> don't throw exceptions
	~IllegalValueException() = default;
	virtual const char* what() const noexcept{ //virtual method from std::exception library
		return "IllegalValueException";
	}
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
		cout << t.what() << endl;
	}

	return 0;
}