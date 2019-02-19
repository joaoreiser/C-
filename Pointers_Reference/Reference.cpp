#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main()
{
	//References//
	//must be initialized when declared
	//can't be NULL
	//once initialized, can't refer to another variable
	//very useful as function parameters
	//can be thought as a "constant pointer" with automatic dereference
	
	vector<string> names{"Joao", "Adriana", "Jose", "Ana"};
	
	for(auto name: names){ //as names is a copy, nothing changes
		name = "Other";
	}
	
	for(auto name: names){
		cout << name << " ";
	}
	
	for(auto &name: names){ //as a reference, now the content is changed
		name = "Other";
	}
	
	cout << endl << endl;
	
	for(auto const &name: names){ //const prevent any change in names content
		cout << name << " ";
	}
	
	cout << endl << endl;
	
	//----------EXAMPLE----------//
	
	int num{100};
	int &ref_num{num};
	
	cout << "Num: " << num << " " << "Ref_num: " << ref_num << endl;
	
	num = 200; //change directly in the variable 
	
	cout << "Num: " << num << " " << "Ref_num: " << ref_num << endl;
	
	ref_num = 300; //or in the reference have the same behaviour
	
	cout << "Num: " << num << " " << "Ref_num: " << ref_num << endl;
	
	//references only accept l-values, values that have address (variables).
	//references don't accept r-values, vaules that don't have address, like literals or expressions.
	
	return 0;
}
