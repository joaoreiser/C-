#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	// (cond_expr) ? expr1 : expr2
	// se cond_expr for true --> retorna expr1
	// se cond_expr for false --> retorna expr2
	
	int result{};
	int a{10}, b{20};
	
	result = (a > b) ? 	a : b;
	
	cout << result << " eh o maior valor" << endl;
	
	result = (a < b) ? a : b;
	
	cout << result << " eh o menor valor" << endl;
	
	return 0;
}