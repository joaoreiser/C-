#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
class Base{
protected:
	* accessible from Base class
	* accessible from classes Derived from Base
	* Not accessible by objects of Base and Derived
};

---------------------------------------------

Base Class
	public: a
	protected: b
	private: c

Public Inheritance

Derived Class Access
	public: a
	protected: b
	c: no access

---------------------------------------------	
	
Base Class
	public: a
	protected: b
	private: c

Protected Inheritance

Derived Class Access
	protected: a
	protected: b
	c: no access

---------------------------------------------

Base Class
	public: a
	protected: b
	private: c

Private Inheritance

Derived Class Access
	private: a
	private: b
	c: no access

---------------------------------------------

*/

class Base{
public:
	int a{};
	void display(){cout << a << " " << b << " " << c << endl;}
protected:
	int b{};
private:
	int c{};
};

class Derived : public Base{
public:
	void AccessBaseMembers(){
		a = 100;
		b = 200;
		//c = 300; //error -> c is protected
	}
	void DisplayMembers(){
		cout << a << " " << b << endl;
	}
};

int main()
{
	cout << "=========Base Member access from base objects========" << endl;
	Base base{};
	base.display();
	
	base.a = 100; //ok
	//base.b = 200; //error -> b is protected
	//base.c = 300; //error -> c is private
	
	base.display();
	
	cout << "=========Base Member access from derived objects========" << endl;

	Derived derived{};
	derived.display();
	
	derived.a = 200;
	//derived.b = 300; //error -> b is protected
	//derived.c = 400; //error -> c is private
	
	derived.display();
	derived.AccessBaseMembers();
	derived.DisplayMembers();
	
	return 0;
}
