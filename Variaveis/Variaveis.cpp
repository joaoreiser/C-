#include<iostream>
#include<climits>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	//dois modos de inicialização de valores
	//o primeiro modo {} previne contra overflow
	int num_inteiro{10}; 
	int numero_inteiro = 10;
	
	long numero_longo{100000000};
	
	long long numero_muito_longo{10000000000000};
	
	float numero_flutuante{3.14};
	
	double numero_flutuante_preciso{3.141516};
	
	long double numero_flutuante_muito_preciso{0.0000000000001};
	
	bool estado{true};
	
	cout << num_inteiro << endl << numero_inteiro << endl;
	cout << numero_longo << endl << numero_muito_longo << endl;
	cout << numero_flutuante << endl << numero_flutuante_preciso << endl << numero_flutuante_muito_preciso << endl;	
	cout << estado << endl;
	
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

