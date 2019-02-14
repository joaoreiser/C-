#include<iostream>
#include<climits>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	//two modes of variables initialization
	//first mode {} provides overflow checking
	int num_integer{10}; 
	int number_integer = 10;
	
	long number_long{100000000};
	
	long long number_very_long{10000000000000};
	
	float number_float{3.14};
	
	double number_float_precision{3.141516};
	
	long double number_float_high_precision{0.0000000000001};
	
	bool status{true};
	
	cout << num_integer << endl << number_integer << endl;
	cout << number_long << endl << number_very_long << endl;
	cout << number_float << endl << number_float_precision << endl << number_float_high_precision << endl;	
	cout << status << endl;
	
	cout << "char: " << CHAR_MIN << ", size: " << sizeof(char) << endl;
	cout << "short: " << SHRT_MIN << ", size: " << sizeof(short) << endl;
	cout << "int: " << INT_MIN << ", size: " << sizeof(int) << endl;
	cout << "long: " << LONG_MIN << ", size: " << sizeof(long) << endl;
	cout << "long long: " << LLONG_MIN << ", size: " << sizeof(long long) << endl;
	
	cout << "char: " << CHAR_MAX << endl;
	cout << "short: " << SHRT_MAX << endl;
	cout << "int: " << INT_MAX << endl;
	cout << "long: " << LONG_MAX << endl;
	cout << "long long: " << LLONG_MAX << endl;
	
	return 0;
}

