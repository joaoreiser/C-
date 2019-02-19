#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;
using std::boolalpha;

int main()
{
	int valores[]{100,54,43,56,87,-1};
	int *ptr_valores{valores};
	
	while(*ptr_valores != -1){ //verifica o valor
		cout << *ptr_valores << " ";
		ptr_valores++; //incrementa o endereço
	}
	cout << endl;
	
	ptr_valores = valores;
	
	while(*ptr_valores != -1){ //verifica o valor
		cout << *ptr_valores++ << " "; //exibe e incrementa o endereço
	}
	cout << endl;
	//same behaviour of the last loop
	
	string n1{"Joao"};
	string n2{"Joao"};
	string n3{"Adriana"};
	
	string *p_n1{&n1};
	string *p_n2{&n2};
	string *p_n3{&n1};
	
	cout << boolalpha;
	cout << (p_n1 == p_n2) << " " << (*p_n1 == *p_n2) << endl;
	cout << (p_n2 == p_n3) << " " << (*p_n2 == *p_n3) << endl;
	cout << (p_n1 == p_n3) << " " << (*p_n1 == *p_n3) << endl;
	
	p_n3 = &n3;
	
	cout << (p_n1 == p_n2) << " " << (*p_n1 == *p_n2) << endl;
	cout << (p_n2 == p_n3) << " " << (*p_n2 == *p_n3) << endl;
	cout << (p_n1 == p_n3) << " " << (*p_n1 == *p_n3) << endl;
	
	//C-Style Strings
	
	char name[] = "Joao Guilherme";
	
	char *p_char_1{&name[5]};
	char *p_char_2{&name[10]};
	
	int n = p_char_2 - p_char_1;
	
	cout << "In " << name << ", " << *p_char_2 << " is " << n << " characters far from " << *p_char_1 << endl;
	
	p_char_1 = &name[0];
	
	while(*p_char_1 != '\0'){
		if(*p_char_1 != ' '){
			cout << *p_char_1++ << " ";
		}
		else{
			p_char_1++;
		}
	}
	
	return 0;
}