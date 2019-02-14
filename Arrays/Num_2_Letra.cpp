#include <iostream>

using std::cout;
using std::cin;
using std::endl;

char letras[10]{'a','b','c','d','e','f','g','h','i', 'j'};
int numeros[5]{1,4,6,3,8};

void substituir(char* array, int index);

int main(){
	int numero_termos = sizeof(numeros)/sizeof(int);
	char *numero_2_letras = new char[numero_termos]{};	
	cout << numero_2_letras << endl;
	
	for(int i=0; i < numero_termos; i++){
		substituir(numero_2_letras, i);
	}	
	cout << numero_2_letras << endl;

	delete[] numero_2_letras;
	
	return 0;
}

void substituir(char *array, int index){
	*(array+index) = letras[numeros[index]];
}