#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
SHALLOW COPY VS DEEP COPY

SHALLOW
->  when the class has a pointer as attribute, the copy of an object can
	cause problems. If an ordinary copy (Shallow) is done, the original pointer
	and its copy will point to the same address. When a destructor is called for
	the copy, the original pointer will point to a invalid address. It can crash
	the program at some point.

DEEP 
->	will make a copy of the data pointed by the pointer. Each pointer and pointed
	address will be in a unique storage in the heap.
-> 	must be used when dealing with raw pointer as class members.
-> 	WHEN DEALING WITH POINTERS AS CLASS MEMBERS, NEVER FORGET TO DELETE THEM IN THE
	DESTRUCTOR.
*/

/*
class Deep{
private:
	int *data; 					//POINTER
public:
	Deep(int d); 				//CONSTRUCTOR
	Deep(const Deep &source);	//COPY CONSTRUCTOR
	~Deep();					//DESTRUCTOR
};

Deep::Deep(int d){
	data = new int;		//allocate storage
	*data = d;			//initialize data
}

Deep::~Deep(){
	delete data;		//free storage
}

Deep::Deep(const Deep &source){
	data = new int;			//allocate a new storage on the heap
	*data = *source.data;	//copy the content to the new storage
}

////////DELEGATING CONSTRUCTOR//////////
Deep::Deep(const Deep &source)
	:Deep{*source.data}{} //delegate the copy creation to the CONSTRUCTOR
////////DELEGATING CONSTRUCTOR//////////

*/

class Deep{
private:
	int *data; 					//POINTER
public:
	Deep(int d=10); 				//CONSTRUCTOR
	Deep(const Deep &source);	//COPY CONSTRUCTOR
	~Deep();					//DESTRUCTOR
	int get_data(){return *data;}
	void set_data(int d){*data = d;}
};

Deep::Deep(int d){
	data = new int;		//allocate storage
	*data = d;			//initialize data
	cout << "Constructor call" << endl;
}

Deep::~Deep(){
	delete data;		//free storage
	cout << "Destructor call" << endl;
}

////////NORMAL COPY CONSTRUCTOR//////////
/*
Deep::Deep(const Deep &source){
	data = new int;			//allocate a new storage on the heap
	*data = *source.data;	//copy the content to the new storage
	cout << "Copy Constructor call" << endl;
}
*/
////////NORMAL COPY CONSTRUCTOR//////////

////////DELEGATING CONSTRUCTOR//////////
Deep::Deep(const Deep &source)
	:Deep(*source.data){
	cout << "Copy Constructor call" << endl;
}
////////DELEGATING CONSTRUCTOR//////////

void print_content(Deep obj){
	cout << "Data is: " << obj.get_data() << endl;
}

int main()
{
	cout << "Create obj1" << endl;
	Deep obj1(100);
	cout << "Create obj2" << endl;
	Deep obj2(obj1);
	cout << "Change value obj2" << endl;
	obj2.set_data(200);
	cout << "Show content obj1" << endl;
	print_content(obj1);
	cout << "Show content obj2" << endl;
	print_content(obj2);
	
	return 0;
}
