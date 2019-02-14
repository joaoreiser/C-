#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	//do{code;}while(condição)
		
	int number{};
	do{
		cout << "Insira um numero entre 10 e 20: " << endl;
		cin >> number;
	}while(number < 10 || number > 20);
		
	cout << "Muito bem" << endl;
	
	return 0;
}