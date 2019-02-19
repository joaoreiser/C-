#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	//steps to dynamic allocation
	//1) declare a pointer
	int *ptr_int{nullptr};
	//2) use the command NEW --> ptr_name = new data_type;
	ptr_int = new int;
	//3) assign some data
	*ptr_int = 100;
	//4) use the pointer as needed
	// CODE //
	//5) deallocate the pointer
	delete ptr_int;
	//IMPORTANT -> delete command don't delete the pointer,
	//			   it only let the memory space free to be used again.
	//			   deallocate the memory space, finish the memory restriction.
	//			   The pointer variable is not destroyed and still can be used.
	
	////// for arrays //////
	
	//Declare a pointer
	int *ptr_array{nullptr};
	int array_size = 10;
	//Use the command new -> specify the size
	ptr_array = new int[array_size];
	//Use the pointer
	//deallocate the pointer
	delete [] ptr_array;
	cout << "Pointing: " << ptr_array << endl;
	
	//EXAMPLE//
	int *ptr_int_1{nullptr};
	ptr_int_1 = new int;
	cout << "Pointer Address: " << ptr_int_1 << endl;
	delete ptr_int_1;
	*ptr_int_1 = 10;
	cout << "Pointer Address: " << *ptr_int_1 << endl;
	
	
	int size{};
	cout << "Insert the quantity of elements: ";
	cin >> size;
	
	double *ptr_int_3{nullptr};
	ptr_int_3 = new double[size];
		
	cout << ptr_int_3 << endl;
	
	delete [] ptr_int_3;	
	
	return 0;
}