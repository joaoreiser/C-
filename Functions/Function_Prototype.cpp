#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

//function prototypes

void say_hello();
void say_hi(std::string = "Joao"); //function with default value
int calculate_square_area(int = 2, int = 2); //not necessary specify variable name
int calculate_rectangle_area(int a, int b); //only type is necessary

//function prototypes

int main()
{
	std::string name{"Joao Guilherme"};
	
	say_hello();
	say_hi("Joao");
	say_hi(name);
	cout << "Square Area: " << calculate_square_area() << endl;
	cout << "Rectangle Area: " << calculate_rectangle_area(3,6) << endl;
	return 0;
}

//function definition//

void say_hello(){
	cout << "Hello" << endl;
}

void say_hi(std::string name){
	cout << "Hi " << name << endl;
}

int calculate_square_area(int a, int b){
	return a*b;
}

int calculate_rectangle_area(int a, int b){
	return calculate_square_area(a,b);
}

//function definition//
