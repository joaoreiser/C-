#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	//explicit conversion
	int total_amount{100};
	int total_number{8};
	double average{0.0};
	
	average = total_amount / total_number;
	//double = int / int; --> truncated
	cout << "Average: " << average << endl;
	
	average = static_cast<double>(total_amount) / total_number;
	//double = double / int; --> double
	cout << "Average Converted: " << average << endl;
	
	
	//create and initialize as 0
	int total{};
	int num1{}, num2{}, num3{};
	const int count{3};
	
	cout << "Insert 3 Numbers: " << endl;
	cin >> num1 >> num2 >> num3;
	
	total = num1 + num2 + num3;
	
	double avg{0.0};
	avg = static_cast<double>(total) / count;
	
	cout << "Sum: " << total << endl;
	cout << "Average: " << avg << endl;
	
	return 0;
}