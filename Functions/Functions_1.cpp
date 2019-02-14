#include <iostream>
#include <vector>

//important libraries
#include <cmath>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	//using functions of some libraries
	
	//cmath//
	
	//double number{};
	
	//cout << "Insert a Number: ";
	//cin >> number;
	
	//cout << "Sqrt: " << sqrt(number) << endl;
	//cout << "Cubed Root: " << cbrt(number) << endl;
	//cout << "Sine: " << sin(number) << endl;
	//cout << "Cosine: " << cos(number) << endl;
	//cout << "Ceil: " << ceil(number) << endl;
	//cout << "Floor: " << floor(number) << endl;
	//cout << "Round: " << round(number) << endl;
	//cout << "Power2: " << pow(number, 2) << endl;
	
	//cstdlib//
	
	int random_number{};
	const int count{10};
	const int min{1};
	const int max{100};
	
	cout << "Max Random Number of System: " << RAND_MAX << endl;
	
	srand(time(nullptr)); //seed for random number -> using system time for seed
	
	for(int i{1}; i <= count; i++){
		random_number = rand()% max + min;
		cout << random_number << endl;
	}
	
	return 0;
}