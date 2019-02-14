#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

//FUNCTIONS
void global_example();
void local_example(int);
void static_example();
//FUNCTIONS

//GLOBAL VARIABLES (full scope)
int num{10};
//GLOBAL VARIABLES

int main()
{
	global_example();
	global_example();
	global_example();
	local_example(5);
	local_example(10);
	static_example();
	static_example();
	static_example();
	
	int num_1{10}; //(full main scope)
	
	cout << "Num_1 in main: " << num_1 << endl;
	
	{ //opens another scope
		int num_1{20}; //(restrict scope)
		cout << "Num_1 in other scope: " << num_1 << endl;
		num_1 += 5;
		cout << "Num_1 in other scope: " << num_1 << endl;
	} //ends another scope
	
	cout << "Num_1 in main: " << num_1 << endl;
	
	return 0;
}

//uses the global variable (full scope), changing its value
void global_example(){
	cout << "Global_1: " << num << endl;
	num += 5;
	cout << "Global_2: " << num << endl;
}

//uses a local variable (local scope), where the value is lost
//after every call
void local_example(int a){
	int num{20};
	cout << "Local_1: " << num << endl;
	num += a;
	cout << "Local_2: " << num << endl;
}

//uses a STATIC local variable (local scope), where 
//the variable is not lost after every call, 
//and is kept in memory
void static_example(){
	static int num{20};
	cout << "Static: " << num << endl;
	num += 10;
}
