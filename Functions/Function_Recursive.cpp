#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

unsigned long long factorial(unsigned long long);
unsigned long long fibonacci(unsigned long long);

int main()
{
	cout << factorial(5) << endl;
	cout << fibonacci(30) << endl;
	
	return 0;
}

unsigned long long factorial(unsigned long long num){
	if(num == 0){
		return 1;
	}
	else{
		return num * factorial(num - 1);
	}
}

unsigned long long fibonacci(unsigned long long num){
	if(num <= 1){
		return num;
	}
	else{
		return fibonacci(num - 1) + fibonacci(num - 2);
	}
}
