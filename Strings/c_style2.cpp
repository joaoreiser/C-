#include <iostream>
#include <vector>
#include <cstring> //library para c-style strings
#include <cctype>
#include <cstdlib> //converts c-style strings to other types

using std::cout;
using std::endl;
using std::cin;
using std::vector;

using namespace std;

int main()
{
	
	char full_name[50]{};
	char first_name[50]{};
	char last_name[50]{};
	
	cout << "Insert your first name: ";
	cin >> first_name;
	cout << "Insert your last name: ";
	cin >> last_name;
	
	strcpy(full_name, first_name);
	strcat(full_name, " ");
	strcat(full_name, last_name);
	
	cout << full_name << " " << strlen(full_name) << endl; //strlen only counts the used part, until \0
	
	//cin >> full_name_2; // doesn't work (space interrupt the string read)
	
	//cout << full_name_2 << endl;
	
	char full_name_2[50];

	cout << "Insert your full name: " << endl;
	
	cin.ignore();
	cin.getline(full_name_2, 50); // to fix the space problem
	
	cout << full_name_2 << endl;
	
	//deixa o nome todo em maiusculo
	for(size_t i{0}; i < strlen(full_name_2); i++){
		if(isalpha(full_name_2[i])){
			full_name_2[i] = toupper(full_name_2[i]);
		}
	}
	
	cout << full_name_2 << endl;
	
	return 0;
	
}