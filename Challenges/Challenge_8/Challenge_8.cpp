#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int *apply_all(int *arr_1, int *arr_2, size_t size_1, size_t size_2);
int multiply(int a, int b);
void print_all(const int *const ptr_arr, size_t size_1, size_t size_2);

int main()
{
	size_t size_1{}, size_2{};
	int array_1[]{1,2,3,4,5};
	int array_2[]{10,20,30,40,50};
	
	size_1 = sizeof(array_1) / sizeof(int);
	size_2 = sizeof(array_2) / sizeof(int);
		
	int *ptr_arr = apply_all(array_1, array_2, size_1, size_2);
	print_all(array_1, size_1, 1);
	print_all(array_2, size_2, 1);
	print_all(ptr_arr, size_1, size_2);

	delete [] ptr_arr; //never forget to delete after use
	
	return 0;
}

int *apply_all(int *arr_1, int *arr_2, size_t size_1, size_t size_2){
	int index{};
	int *array_result = new int[size_1 * size_2];
	for (size_t i = 0; i < size_1; i++){
		for (size_t j = 0; j < size_2; j++){
			*(array_result + index) = multiply(arr_1[i], arr_2[j]);
			//array_result[index] = multiply();
			index++;
		}
	}
	return array_result;
}

int multiply(int a, int b){
	return a * b;
}

void print_all(const int *const ptr_arr, size_t size_1, size_t size_2){
	size_t index = size_1 * size_2;
	for (size_t i{0}; i < index; i++){
		cout << *(ptr_arr + i) << " ";
		//cout << ptr_arr[i] << " ";
	}
	cout << endl;
}