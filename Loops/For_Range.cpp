#include <iostream>
#include <vector>
#include <iomanip> //biblioteca para usar o setprecision

using std::cout;
using std::endl;
using std::cin;
using std::vector;

using namespace std;

int main()
{
	// for(tipo variavel_loop : variavel_sequencia){}
	
	// verifica automaticamente o tipo de dado
	// for(auto variavel_loop : variavel_sequencia){}
	
	vector <double> temps {87.23, 77.12, 80.04, 72.57};
	
	double average_temp{};
	double running_sum{};
	
	for(auto temp : temps){
		running_sum += temp;
	}
	
	average_temp = running_sum / temps.size();
	
	cout << fixed << setprecision(1); //define a precisão dos valores
	cout << "Sum of the Temperatures: " << running_sum << endl;
	cout << "Average of the Temperatures: " << average_temp << endl;
	
	for(auto value : {1,2,3,4,5,6}){
		cout << value << ' ';
	}
	
	for(char letter : "This is a test"){
		if(letter != ' '){ //elimina os espaços na string
			cout << letter;
		}
	}
	
	return 0;
}