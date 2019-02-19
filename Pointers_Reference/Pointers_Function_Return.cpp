#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int *largest_value(int *v1, int *v2);
int *create_array(int size, int init_value = 0);

//--------NEVER DO--------//
//never return a pointer to local variable
//	-> 	create a pointer inside a function and return it,
//		unless the pointer was dinamically allocated and will 
// 		be used in main. This can be deallocated later. 


int main()
{
	//Return a pointer from a Function
	int *ptr_return{nullptr};
	int n1{100}, n2{200};	
	
	ptr_return = largest_value(&n1, &n2);

	cout << endl << "The largest is " << *ptr_return << " in address " << ptr_return << endl;
	
	cout << endl;
	
	cout << "------------CREATE_AND_ALLOCATE_ARRAY------------" << endl << endl;
	
	int *created_array{nullptr};
	
	created_array = create_array(10, 0);

	cout << created_array << " " << *created_array << endl;
	
	delete [] created_array;
	
	return 0;
}

int *largest_value(int *p_v1, int *p_v2){
	if(*p_v1 > *p_v2){
		return p_v1;
	}
	else{
		return p_v2;
	}
}

int *create_array(int size, int init_value){
	int *array{nullptr};	//create a pointer
	array = new int[size];	//allocate some memory
	for(int i{0}; i < size; i++){ //initialize each memory space
		*(array+i) = init_value;
	}
	return array;	//return the create pointer
}