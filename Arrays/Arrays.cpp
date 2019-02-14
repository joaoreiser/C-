#include<iostream>

using std::cout;
using std::endl;
using std::cin;

/*
-> tamanho fixo
-> elementos do mesmo tipo
-> armazenados continuamente na memória
-> posições acessadas por index (0 to size-1)
-> sempre inicializar arrays
*/

int main()
{
	//tipo nome[tamanho];
	
	int array_1[100] {0}; //inicializa todos com 0
	
	cout << array_1[20] << endl;
	
	int array_2[] {1,2,3,4,5}; //automaticamente determina
	//tamanho do array
	
	cout << array_2[2] << endl;
	
	const int tamanho{30};
	
	int array_3[tamanho];
	
	for(int i = 0; i <= tamanho-1 ; i++){
		array_3[i] = i;
		cout << array_3[i] << ' ';
	}
	
	return 0;
}