#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

//Overload -> same name / diferent data types and statements

int add_numbers(int, int);
double add_numbers(double, double);

int main()
{
	cout << add_numbers(3,5) << endl;
	cout << add_numbers(2.4, 5.7) << endl;
	return 0;
}

int add_numbers(int a, int b){
	return a + b;
}

double add_numbers(double a, double b){
	return a + b;
}