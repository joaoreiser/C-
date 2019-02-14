#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	//Arrays have a close relationship with pointers
	
	int scores[] {3,2,1};
	
	cout << scores << endl;	//array first position address
	cout << *scores << endl;//content of the first position of the array
	//even not explicit declaring a pointer, the array behave like a pointer
	
	int *ptr_scores{scores}; //as the array returns the address, there is no need for '&'
	
	cout << ptr_scores << endl;
	cout << *ptr_scores << endl;
	
	//data access//
	cout << scores[0] << " " << ptr_scores[0] << endl;
	cout << scores[1] << " " << ptr_scores[1] << endl;
	cout << scores[2] << " " << ptr_scores[2] << endl;
	
	//address access
	cout << scores << " " << ptr_scores << endl;
	cout << (scores + 1) << " " << (ptr_scores + 1) << endl;
	cout << (scores + 2) << " " << (ptr_scores + 2) << endl;
	
	//data address
	cout << *scores << " " << *ptr_scores << endl;
	cout << *(scores + 1) << " " << *(ptr_scores + 1) << endl;
	cout << *(scores + 2) << " " << *(ptr_scores + 2) << endl;
	
	return 0;
}