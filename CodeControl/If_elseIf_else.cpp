#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	cout << "Insert a number: ";
	int number{0};
	cin >> number;
	
	if(number <= 10){
		cout << "Number is smaller/equal to 10" << endl;
	}
	else if(number <= 50){
		cout << "Number is smaller/equal to 50" << endl;
	}
	else{
		cout << "Number is bigger then 50" << endl;
	}

	return 0;
}