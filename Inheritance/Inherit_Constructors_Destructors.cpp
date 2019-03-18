#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
CONSTRUCTORS AND DESTRUCTORS BEHAVIOUR WITH INHERITANCE

class Base{
	Base(); //constructor
	~Base(); //destructor
};

class Derived : public Base{
	Derived(); //constructor
	~Derived(); //destructor
};

Base obj_base;				-> Base constructor call

Derived obj_derived;		-> Base constructor call
							-> Derived constructor call

//destructing obj_base		-> Base destructor call

//destructing obj_derived	-> Derived destructor call
							-> Base destructor call
							
							
--------------------------------------> Constructors Sequence
Base -> Derived1 -> Derived2 -> Derived3
<-------------------------------------- Destructors Sequence

Each Destructor must deallocate resources on its own scope
*ex: pointers of Derived2 must be deallocate on Derived2 destructor							

*************************************************
-> A Derived class does NOT inherit
 * Base class constructors
 * Base class destructors
 * Base class overloaded assignment operators
 * Base class friend functions

=> 	"however, the Derived Class constructors, destructors,
	overloaded assignment operators can invoke the base-class
	versions"
*************************************************
*/

/*
INVOKING BASE CLASS CONSTRUCTORS AND PASSING ARGUMENTS TO IT



*/


class Base{
	int value{0};
public:
	Base(){cout << "Base Constructor" << endl;};
	Base(int v): value{v} {cout << "Base Int Constructor" << endl;};
	~Base(){cout << "Base Destructor" << endl;};
};

class Derived : Base{
	int value2{0};
public:
	Derived(){cout << "Derived Constructor" << endl;};
	Derived(int d): value2{2*d} {cout << "Derived Int Constructor" << endl;};
	~Derived(){cout << "Derived Destructor" << endl;};
};

/////////////INVOKING BASE CLASS CONSTRUCTORS/////////////

class Base2{
	int value;
public:
	Base2(): value{0} {cout << "Base2 Constructor" << endl;};
	Base2(int v): value{v} {cout << "Base2 Int Constructor" << endl;};
	~Base2(){cout << "Base2 Destructor" << endl;};
};

class Derived2 : Base2{
	int value2;
public:
	Derived2(): Base2(), value2{0} {cout << "Derived2 Constructor" << endl;};
	Derived2(int d): Base2(d), value2{2*d} {cout << "Derived2 Int Constructor" << endl;};
	~Derived2(){cout << "Derived2 Destructor" << endl;};
};

/////////////INVOKING BASE CLASS CONSTRUCTORS/////////////

int main()
{
	cout << "-----------Constructors Base/Derived call-----------\n" << endl;
	Base base;
	Base base2(10);
	Derived derived;
	Derived derived2(17); 	//in this case, the no-args Base constructor
							//will be called, not the Int Overloaded one.
							//To call the Int Overloaded it's necessary to
							//explicity specify
							
	cout << "\n-----------Constructors Base2/Derived2 (Explicit Invoke) call-----------\n" << endl;
	Base2 base4;
	Base2 base8(10);
	Derived2 derived4;
	cout << "***Explicit Invoke Base2(int) Constructor***" << endl;
	Derived2 derived8(17); 
	
	cout << "\n-----------Destructors call-----------\n" << endl;
		
	return 0;
}
