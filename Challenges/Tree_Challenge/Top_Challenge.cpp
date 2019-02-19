#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main()
{
	string string_padrao{};
	string modelo_output{};	
	
	cout << "Insert a String: ";
	getline(cin, string_padrao);
	
	int altura_modelo = string_padrao.length();
	
	for(int index{}; index < altura_modelo; index++){
		int qtda_espacos = altura_modelo - index;
		for(int i{1}; i < qtda_espacos; i++){
			modelo_output += " ";
		}
		for(int j{}; j <= index; j++){
			modelo_output += string_padrao.at(j);
		}
		for(int k{index - 1}; k >= 0; k--){
			modelo_output += string_padrao.at(k);
		}
		for(int l{1}; l < qtda_espacos; l++){
			modelo_output += " ";
		}
		cout << modelo_output << endl;
		modelo_output.clear();
	}
	
	return 0;
}