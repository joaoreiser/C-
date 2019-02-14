#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	//pointers can be used in:
	//	* assignment
	//	* arithmetic
	//	* comparison
	
	//increment/decrement -> used to navegate through the elements of an array
	//	ptr_array++; => (ptr_array + 2) -> (ptr_array + 3)
	//	ptr_array--; => (ptr_array + 2) -> (ptr_array + 1)
	
	//add/subt -> used to navegate through the elements of an array
	//	ptr_array += 1;
	//	ptr_array -= 2;
	
	//subtration -> know the number of elements between pointers
	//	int n = ptr_1 - ptr_2;
	
	//comparison -> know if two pointers point to the same address
	//
	
	int int1[10]{};
	int int2[10]{};
	
	int *ptr_1{&int1[10]};
	int *ptr_2{&int2[10]};
	
	int n = ptr_1 - ptr_2;
	cout << ptr_1 << " " << ptr_2 << endl;
	cout << n << endl;
		
	ptr_1+=5;
	ptr_2+=3;
	
	n = ptr_1 - ptr_2;
	cout << ptr_1 << " " << ptr_2 << endl;
	cout << n << endl;
	
	cout << boolalpha; //print bools in True/False style
	cout << (ptr_1 == ptr_2) << endl;
	
	ptr_2 = &int1[10];
	ptr_1-=5;
		
	cout << (ptr_1 == ptr_2) << endl;	
		
	return 0;
}