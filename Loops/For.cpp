#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	//for(inicializacao; condicao; incremento){}
	
	for(int i{1}; i <= 5; i++){
		cout << i << endl;
	}
		
	
	//for com mais de uma variável iterativa
	for(int i{1}, j{5}; i <= 5; i++, j--){
		cout << i << ' ' << j << endl;
	}
		
		
	for(int i{1}; i <= 100; i++){
		cout << i << ((i % 10 == 0) ? '\n' : ' ');
	}
	
	
	int sum{0};
	
    for(int i{1}; i <= 15; i++){
        sum = (i % 2 == 1) ? sum+i : sum;
	}
	cout << sum << endl;
	
	return 0;
}