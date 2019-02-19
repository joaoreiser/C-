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
	//Pointers and const
	int high_score{100};
	int low_score{50};
	
	const int *ptr_score{&high_score};
	//in this case, the content of high_score CAN'T be changed,
	//but the content of ptr_score (address) can.

	//*ptr_score = 150; //error
	ptr_score = &low_score; //ok
	
	int *const ptr_score_2{&high_score};
	//in this case, the pointer is constant, its content CAN'T be 
	//change. However, the content of high_score can.
	
	*ptr_score_2 = 75; //ok
	//ptr_score_2 = &low_score; //error
	
	const int *const ptr_score_3{&high_score};
	//in this case, both pointer and variable pointed content CAN'T 
	//be changed.
	
	cout << ptr_score_3 << endl;
	
	return 0;
}
