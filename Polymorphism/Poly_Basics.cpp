#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
	Polymorphism
	
	In C++ Polymorphism is presented in several different 
ways, since some same name ordinary functions with different 
arguments and behaviour, until virtual functions with run-time
execution selection. 
	
	
-> compile-time - early binding - static binding
-> run-time - late binding - dynamic binding
	--> compile-time 	=> 	function and operator overloading
	--> run-time 		=> 	inheritance / 
							base class pointers or references /
							virtual functions

*/

//STATIC BINDING - COMPILE-TIME

class Base{
public:
	void SayHello() const{
		cout << "Hello - I'm a Base class obj" << endl;
	}
};

class Derived : public Base{
public:
	void SayHello() const{
		cout << "Hello - I'm a Derived class obj" << endl;
	}
};

void greetings(const Base &obj){
	cout << "Greetings: ";
	obj.SayHello();
}

void greetings(const Base *obj){
	cout << "Greetings: ";
	obj->SayHello();
}
//greeting() accept all derived classes from Base,
//cause all Derived are Base too

int main()
{
	cout << "Direct\n" << endl;
	Base b;
	b.SayHello();
	
	Derived d;
	d.SayHello();
	
	cout << "\nMode 1\n" << endl;
	greetings(b);
	greetings(d);
	
	cout << "\nMode 2\n" << endl;	
	greetings(&b);
	greetings(&d);
	//because of the STATIC BINDING, both calls will 
	//result in Base class SayHello execution
	
	cout << "\nPointer\n" << endl;
	Base *ptr_d = new Derived();
	ptr_d -> SayHello();
	//Again, the call result in Base class execution
	
	greetings(ptr_d);
	
	delete ptr_d;
	
	return 0;
}
