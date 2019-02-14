#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

//passing an array to a function actually pass its 
//address, not its content. So, the real array in
//main() becomes changeable. 

void zero_array(int numbers[], int len);
void print_array(const int numbers[], int len);
//to avoid an array to be modified in a function, use
//CONST in the function declaration

int main()
{
	int numbers_array[] {1,2,3,4,5};
	int len = sizeof(numbers_array) / sizeof(int);
	
	print_array(numbers_array, len);
	zero_array(numbers_array, len);
	print_array(numbers_array, len);
	
	return 0;
}

void zero_array(int numbers[], int len){
	
	for(int i{}; i < len; i++){
		numbers[i] = 0;
	}
}

void print_array(const int numbers[], int len){
	for(int i{}; i < len; i++){
		cout << numbers[i] << " ";
	}
	cout << endl;
}