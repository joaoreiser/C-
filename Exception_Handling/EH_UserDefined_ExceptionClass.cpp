#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
=> An empty class used to make the code more readable
- Each different exception is a class and it's thrown
when the exception occur. The catch statements wait
for the class exception object.

*/

class DivideByZeroException{
};

class NegativeValueException{
};

double calculate_mpg(int miles, int gallons){
	if(gallons == 0){
		throw DivideByZeroException();
	}
	if(miles < 0 || gallons < 0){
		throw NegativeValueException();
	}
	return static_cast<double>(miles) / gallons;
}

int main()
{
	int miles{};
	int gallons{};
	double mpg{};
	
	cout << "Insert miles: ";
	cin >> miles;
	cout << "Insert gallons: ";
	cin >> gallons;
	
	try{
		mpg = calculate_mpg(miles, gallons);
		cout << "MPG: " << mpg << endl;
	}
	catch(const DivideByZeroException &t){
		cout << "Divide by zero exception" << endl;
	}
	catch(const NegativeValueException &t){
		cout << "Negative Value Exception" << endl;
	}
	
	return 0;
}
