#include <iostream>
#include <vector>
#include <string>
#include <memory>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
	CUSTOM DELETERS
-> NOT OFTEN NEEDED
-> Sometimes only destroy the object on the heap is not enough
-> Special use-cases
-> Ways to achieve:
	functions, lambdas, ...
-> CAN'T use make_unique, make_shared constructors
*/

class Test{
private:
	int data;
public:
	Test() : data{0}{cout << "Constructor" << endl;}
	Test(int data) : data{data}{cout << "Constructor2: " << data << endl;}
	int get_data() const {return data;}
	~Test(){cout << "Destructor: " << data << endl;}
};

void my_deleter(Test *ptr){
	cout << "Using my custom function deleter" << endl;
	delete ptr;
}

int main()
{
	std::shared_ptr<Test> ptr1{new Test{100}, my_deleter};
	//the custom deleter must be passed in the pointer creation
	return 0;
}
