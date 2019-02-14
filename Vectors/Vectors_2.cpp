#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	//criando vetores multidimensionais --> vetor de vetores
	vector <vector<int>> my_mult_vec;
	
	//criando e inicializando valores
	vector <vector<int>> my_mult_vec_2{
		{1,2,3,4},
		{2,3,4,5},
		{3,4,5,6}
	};

	//lendo o valor da posição [2][2]
	cout << my_mult_vec_2.at(2).at(2) << endl;
	//lendo o valor da posição [1][1]
	cout << my_mult_vec_2[1][1] << endl;
	
	my_mult_vec_2.at(0).at(0) = 10; //alterando o valor
	
	cout << my_mult_vec_2[0][0] << endl;
	
	return 0;
}