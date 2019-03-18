#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
	CONCRETE CLASSES
-> The ordinary class type
-> can be instanciated

	ABSTRACT CLASSES
-> classes that can't be instanciated
-> used as base classes in inheritance
-> also known as Abstract Base Classes
-> too generic to create objects from:
	* Shape, Employee, Account, Player, ...
-> CONTAIS AT LEAST ONE PURE VIRTUAL FUNCTION	

	PURE VIRTUAL FUNCTION
-> used to make a class abstract
-> specified with "= 0" in its declaration
-> typically no implementation is provided

ex:
	class Base{ //because of the pure virtual function, now this class is abstract
	public: 
		virtual void function() = 0; //pure virtual function
		virtual ~Base();
	}
	
-> with an abstract class, the derived classes MUST override
the base class
-> if the derived class doesn't override, the derived class will
also be abstract
-> used when it doesn't make sense to implement the base class


ABSTRACT CLASSES CAN'T BE INSTANCIATED, BUT THEY CAN BE
USED AS POINTERS OR REFERENCES FOR THE DERIVED (Concrete) ONES

AbstractClass *ptr_c = new ConcreteDerivedClass();

*/

class Shape{
public:
	virtual void draw() = 0;
	virtual void rotate() = 0;
	virtual ~Shape(){cout << "Destructor Shape" << endl;}
};

class OpenShape : public Shape{
public:
	virtual ~OpenShape(){cout << "Destructor OpenShape" << endl;}
};

class ClosedShape : public Shape{
public:
	virtual ~ClosedShape(){cout << "Destructor ClosedShape" << endl;}
};

class Line : public OpenShape{
public:
	virtual void draw() override{
		cout << "Line draw" << endl;
	}
	
	virtual void rotate() override{
		cout << "Line Rotate" << endl;
	}
	
	virtual ~Line(){cout << "Destructor Line" << endl;}
};

class Circle : public ClosedShape{
public:
	virtual void draw() override{
		cout << "Circle draw" << endl;
	}
	
	virtual void rotate() override{
		cout << "Circle Rotate" << endl;
	}
	
	virtual ~Circle(){cout << "Destructor Circle" << endl;}
};

class Square : public ClosedShape{
public:
	virtual void draw() override{
		cout << "Square draw" << endl;
	}
	
	virtual void rotate() override{
		cout << "Square rotate" << endl;
	}
	
	virtual ~Square(){cout << "Destructor Square" << endl;}
};

void screen_writing(vector<Shape*> &vec){
	for(const auto v : vec){
		v->draw();
		v->rotate();
	}
}

int main()
{
	Shape *l = new Line();
	Shape *c = new Circle();
	Shape *s = new Square();
	
	vector<Shape*> vec{l, c, s};
	
	cout << "\n*******For loop calling shapes*******\n" << endl;
	
	screen_writing(vec);
	
	cout << "\n**************Destructors call**************\n" << endl;
	
	delete l;
	delete c; 
	delete s;
	
	return 0;
}
