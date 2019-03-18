#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
OVERRIDE SPECIFIER
-> function signature and return must be exactly the same
-> if they are different, it is redefinition, not override
-> redefinition is static, override is dynamic

-> the override specifier garantees that the functions are
identical and the polymorphism will be performed as desired

*/

/*
class Base{
	virtual void function() const{
	}
	
	virtual ~Base(){
	}
};

class Base{
	virtual void function(){
	}
	
	virtual ~Base(){
	}
};

//THIS CODE WILL COMPILE AND RUN, BUT THE BEHAVIOUR WILL
NOT BE THE DESIRED, SINCE THE FUNCTIONS ARE NOT EXACTLY 
THE SAME (CONST)


class Base{
	virtual void function() const{
	}
	
	virtual ~Base(){
	}
};

class Base{
	virtual void function() override{
	}
	
	virtual ~Base(){
	}
};

//THIS CODE WILL RETURN AN ERROR, SINCE THE FUNCTIONS ARE
NOT EXACTLY THE SAME AND THE OVERRIDE SPECIFIER VERIFIES IT


class Base{
	virtual void function() const{
	}
	
	virtual ~Base(){
	}
};

class Base{
	virtual void function() const override{
	}
	
	virtual ~Base(){
	}
};

//NOW THE CODE WILL COMPILE AND RUN PROPERLY, SINCE BOTH FUNCTIONS
ARE IDENTICAL AND THE DYNAMIC BINDING CAN BE PERFORMED CORRECTLY
*/

/*
FINAL SPECIFIER
-> prevents a class or a method from being derived/overrided

class My_Class final{ //can't be derived
	...
	virtual void function() final; //can't be overrided
};

class Derived final : public Base{ //can't be derived
	...
};

*/

class Base{
public:
	virtual void function1(){
		cout << "Base F1" << endl;
	}
	
	virtual void function2(){
		cout << "Base F2" << endl;
	}
	
	virtual ~Base(){
		cout << "Base D" << endl;
	}
};

class Derived1 : public Base{
public:
	virtual void function1() override{
		cout << "Derived1 F1" << endl;
	}
	
	virtual void function2() override final{
		cout << "Derived1 F2" << endl;
	}
	
	virtual ~Derived1(){
		cout << "Derived1 D" << endl;
	}
};

class Derived2 : public Derived1{
public:
	virtual void function1() override{
		cout << "Derived2 F1" << endl;
	}
	
	virtual ~Derived2(){
		cout << "Derived2 D" << endl;
	}
};


int main()
{
	Base *b = new Base();
	Base *d1 = new Derived1();
	Base *d2 = new Derived2();
	
	b->function1(); //Base F1
	b->function2(); //Base F2
	
	d1->function1(); //Derived1 F1
	d1->function2(); //Derived1 F2
	
	d2->function1(); //Derived2 F1
	
	delete b; //Base D
	delete d1; //Derived1 D -> Base D
	delete d2; //Derived2 D -> Derived1 D -> Base D
	
	return 0;
}
