#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	cout << "Insira um numero: ";
	int numero{0};
	cin >> numero;
	
	if(numero <= 10){
		cout << "Numero menor/igual a 10" << endl;
	}
	else if(numero <= 50){
		cout << "Numero menor/igual a 50" << endl;
	}
	else{
		cout << "Numero maior que 50" << endl;
	}

	return 0;
}