#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	// (cond_expr) ? expr1 : expr2
	// if cond_expr is true --> return expr1
	// if cond_expr is false --> return expr2
	
	int result{};
	int a{10}, b{20};
	
	result = (a > b) ? 	a : b;
	
	cout << result << " is the largest value" << endl;
	
	result = (a < b) ? a : b;
	
	cout << result << " is the smallest value" << endl;
	
	return 0;
}