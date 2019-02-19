#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

void double_value(int *p_value);
void swap(int *a, int *b);
void split_names(const vector<string> *p_names);
void find_element(int *array, int element);

int main()
{
	//pass by reference with pointers
	
	int value{10}; //declare variable
	int *ptr_value{&value}; //declare pointer to variable
	
	cout << value << " " << *ptr_value << endl; //print the content in both ways
	
	double_value(&value); //call function passing the address of value
	
	cout << value << " " << *ptr_value << endl;
	
	double_value(ptr_value); //call function passing the pointer directly
	
	//both ways have the same behaviour
	
	cout << value << " " << *ptr_value << endl;
	
	cout << endl << "--------SWAP--------" << endl << endl;
	
	int n1{10}, n2{20};
	
	cout << "N1: " << n1 << " N2: " << n2 << endl;
	
	swap(&n1, &n2); //pass variable directly
	
	cout << "N1: " << n1 << " N2: " << n2 << endl;

	int *p_n1{&n1}, *p_n2{&n2};
	
	swap(p_n1, p_n2); //pass through pointer
	
	cout << "N1: " << n1 << " N2: " << n2 << endl;
	
	cout << endl << "--------STRING--------" << endl << endl;
	
	vector<string> names{"Joao", "Adriana", "Jose", "Ana"};
	vector<string> *ptr_names{&names};
	
	cout << "VARIABLE DIRECTLY:" << endl;
	split_names(&names);
	
	cout << "POINTER:" << endl;
	split_names(ptr_names);
	
	cout << endl;
	
	cout << endl << "--------ARRAY--------" << endl << endl;
	
	int scores[]{12,34,45,56,67,-1};
	
	find_element(scores, -1);
		
	return 0;
}


void double_value(int *p_value){
	*p_value *= 2;
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void split_names(const vector<string> *const p_names){ //conts - prevent any change in the vector content and in the pointer content
	//(*p_names).at(0) = "John"; //change the content in index 0
	for(auto name : *p_names){
		cout << name << " ";
	}
	cout << endl;
	//p_names = nullptr; //change the content of the pointer
}

void find_element(int *array, int element){
	while(*array != element){
		cout << *array++ << " ";
	}
	cout << endl;
}