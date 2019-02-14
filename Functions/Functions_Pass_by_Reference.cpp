#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

//use the & symbol

void scale_number(int &num);
void swap(int &a, int &b);
void print(const vector<int> &v); 
//not changeable vector
//instead of copying all the vector content, 
//only the initial address is passed

void print_vector(vector<string> &str);
void clear_vector(vector<string> &str);

int main()
{
	int number{1000};
	
	scale_number(number);
	cout << number << endl;
	
	int num1{3}, num2{6};
	
	cout << num1 << " " << num2 << endl;
	swap(num1, num2);
	cout << num1 << " " << num2 << endl;	
	
	vector<int> vec{1,2,3,4,5};
	print(vec);
	
	vector<string> str{"Joao", "Adriana", "Ana", "Jose"};
	
	print_vector(str);
	clear_vector(str);
	print_vector(str);
	
	return 0;
}

void scale_number(int &num){
	if(num > 100){
		num = 100;
	}
}

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void print(const vector<int> &v){
	for(int el : v){
		cout << el << " ";
	}
	cout << endl;
}

void print_vector(vector<string> &str){
	cout << "Vec: ";
	for(auto s : str){
		cout << s << " ";
	}
	cout << endl;
}

void clear_vector(vector<string> &str){
	str.clear();
}

