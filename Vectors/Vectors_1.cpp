#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	//C++ STL (Standard Template Library)
	//vetores são arrays dinâmicos, com tamanho variável online
	//eles podem aumentar ou diminuir em tempo de execução
	//podem fornecer checagem de fronteiras
	//possuem diversas funções disponíveis (sort, reverse, find,...)
	
	//vector <tipo> nome (qtda) {inicialização};
	
	vector <char> vetor_char;
	vector <int> vetor_int;
	
	vector <char> vetor_char_2 (5);
	vector <int> vetor_int_2 (10);
	
	vector <char> vetor_char_3 {'a', 'b', 'c'};
	vector <int> vetor_int_3 {1, 2, 3, 4};
	
	cout << "Acesso modo array: " << vetor_int_3[2] << endl; //modo array de acesso
	cout << "Acesso modo vector: " << vetor_int_3.at(2) << endl; //modo vector de acesso
	
	cout << "Antes: " << vetor_int_2.at(2) << endl;
	vetor_int_2.at(2) = 4; //.at também usado para alterar
	cout << "Depois: "<< vetor_int_2.at(2) << endl;
	
	//Adicionar elementos ao final do vector (push_back)
	vetor_int_3.push_back(5);	
	cout << "Novo elemento: " << vetor_int_3.at(4) << endl;
	//verifica o tamanho {.size()} do vetor e exibe o último elemento
	cout << "Novo elemento: " << vetor_int_3.at(vetor_int_3.size()-1) << endl;
	
	
	return 0;
}