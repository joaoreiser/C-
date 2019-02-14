#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

//inline functions are used to 
//acelerate the execution of the program,
//avoiding the function calling overhead.
//Instead of calling a function (jumping to
//its position in memory and handling with the
//stack, the inline function makes a copy of 
//the code in the especified position. The .exe
//becomes bigger, but faster. 

inline int add(int, int);

int main()
{
	int a{5};
	int b{10};
	
	int c = add(a, b);
	
	int d{50};
	int e{100};
	
	int f = add(d, e);
	
	cout << c << " " << f << endl;
	
	return 0;
}

inline int add(int a, int b){
	return a + b;
}