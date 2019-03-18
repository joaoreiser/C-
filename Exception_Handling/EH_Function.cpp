#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
		EXCEPTION HANDLING WITH FUNCTIONS OR METHODS
-> 	A throw can be implemented inside a function or method
-> 	the try / catch structure will be applied where the 
	function is called
*/

double calculete_mpg(int miles, int gallons);

int main()
{
	int miles{};
	int gallons{};
	double miles_per_gallon{};
	
	cout << "Enter the miles: ";
	cin >> miles;
	cout << "Enter the gallons: ";
	cin >> gallons;

	try{
		miles_per_gallon = calculete_mpg(miles, gallons);
		cout << "Result: " << miles_per_gallon << endl;
	}
	catch(int &t){
		cout << "ERROR" << endl;
	}
	catch(string &t){
		cout << t << endl;
	}
	
	return 0;
}

double calculete_mpg(int miles, int gallons){
	if(gallons == 0){ //exception by gallons == 0
		throw 0;
	}
	if(miles < 0 || gallons < 0){ //exception by negative value
		throw string("Miles or Gallons < 0");
	}
	double mpg = static_cast<double>(miles) / gallons;
	return mpg;
}