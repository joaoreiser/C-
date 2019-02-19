#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int numero_favorito = 0;

int main(){
	cout << "Enter your favorite number: " << endl;
	cin >> numero_favorito;
	cout << "Amazing! That's my favorite number too!" << endl;
	cout << "No really! " << numero_favorito << " is my favorite number" << endl;
	return 0;	
}