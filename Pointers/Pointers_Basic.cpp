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
	// type *name{initialization};
	// int *pointer_name{&variable_name};
	
	int score{100}; 			//variable
	int *ptr_score{&score};	//pointer variable
	
	cout << endl << "Pointer pointing to score" << endl << endl;
	
	cout << "&score: " << &score << endl;			//variable address
	cout << "ptr_score: " << ptr_score << endl;		//pointer content
	cout << "ptr_score addres: " << &ptr_score << endl; //pointer address
	cout << "score: " << score << endl;				//variable content
	cout << "*ptr_score: " << *ptr_score << endl;	//content of the variable pointed by pointer
	cout << endl;
	
	int score2{200};
	
	cout << "Changed pointer content - pointer pointing to score2" << endl << endl;
	
	ptr_score = &score2;
	
	cout << "&score2: " << &score2 << endl;			//variable address
	cout << "ptr_score: " << ptr_score << endl;		//pointer content
	cout << "ptr_score addres: " << &ptr_score << endl; //pointer address
	cout << "score2: " << score2 << endl;				//variable content
	cout << "*ptr_score: " << *ptr_score << endl;	//content of the variable pointed by pointer
	cout << endl;
	
	string my_name{"Joao"};
	string *ptr_my_name{&my_name};
	
	cout << "String variable: " << my_name << endl;
	cout << "Pointer content: " << ptr_my_name << endl;
	cout << "Pointer dereference: " << *ptr_my_name << endl << endl;
	
	cout << "Variable content changed" << endl << endl;
	
	my_name = "Jose"; 
	cout << "Pointer dereference: " << *ptr_my_name << endl << endl;
	
	cout << "Variable content changed by pointer" << endl << endl;
	
	*ptr_my_name = "Adriana";
	cout << "Variable Content: " << my_name << endl << endl;
	
	return 0;
}