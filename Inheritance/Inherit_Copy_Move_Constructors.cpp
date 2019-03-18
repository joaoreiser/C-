#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
-> 	Copy / Move Constructors and overloaded operator= are not
	inherated from Base class
-> 	Their need must be verified (pointers used)
-> 	Can be explicitly invoke from Base class
*/

/*
	Copy / Move constructors and overloaded operator=
-> 	often it's not necessary to provide your own
-> 	if they are not define in the Derived, the compiler
	will create them automatically and call the base version
-> 	if they are define, the base class version must be explicitly
	invoked
-> 	BE CAREFUL WITH RAW POINTERS
	* especially if Base and Derived have them
	* provide them with deep copy
*/

class Base{ 
//this example class has NO real need to copy/move/overload= constructors
private:
	int value;
public:
	Base() : value{0}{
		cout << "Base no-args constructor" << endl;
	}
	
	Base(int x) : value{x}{
		cout << "Base int constructor" << endl;
	}
	
	Base(const Base &other) 
		: value{other.value}{
		cout << "Base copy constructor" << endl;
	}
	
	Base &operator=(const Base &rhs){
		cout << "Base overloaded operator=" << endl;
		if(this == &rhs){
			return *this;
		}
		value = rhs.value;
		return *this;
	}
	
	~Base(){
		cout << "Base destructor" << endl;
	}
};

class Derived : Base{
private:
	int value2;
public:
	Derived() : Base(), value2{0}{
		cout << "Derived constructor" << endl;
	}
	
	Derived(int x) : Base(x), value2{2*x}{
		cout << "Derived int constructor" << endl;
	}
	
	Derived (const Derived &other) 
		: Base(other), value2{other.value2}{
		cout << "Derived copy constructor" << endl;
	}
	
	Derived operator=(const Derived &rhs){
		cout << "Derived overloaded operator=" << endl;
		if(this == &rhs){
			return *this;
		}
		Base::operator=(rhs);
		value2 = rhs.value2;
		return *this;
	}
	
	~Derived(){
		cout << "Derived destructor" << endl;
	}
};

int main()
{
	cout << "------------Base Class------------\n" << endl;
	Base b1{100}; //base int
	Base b2{b1}; //base copy
	b1 = b2; //base overloaded operator=
	
	cout << "\n------------Derived Class------------\n" << endl;
	
	Derived d1{1000};
	Derived d2{d1};
	d1 = d2;
	
	cout << "\n------------Destructors------------" << endl;
	return 0;
}
