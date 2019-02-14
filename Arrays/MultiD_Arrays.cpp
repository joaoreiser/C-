#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	//tipo nome[n_linhas][n_colunas]
	
	int my_multi_array[3][4]{};
	int valor_da_celula = 0;
	
	for(int i=0; i < 3; i++){
		for(int j=0; j < 4; j++){
			my_multi_array[i][j] = valor_da_celula;
			valor_da_celula++;
		}
	}
	
	cout << my_multi_array[2][2] << endl;
	
	return 0;
}