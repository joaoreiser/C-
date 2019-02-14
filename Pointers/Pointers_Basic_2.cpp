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
	vector<string> names{"Joao", "Jose", "Adriana", "Ana"};
	vector<string> *ptr_names{nullptr};
	
	cout << "Pointer content: " << ptr_names << endl << endl;
	
	ptr_names = &names;
	
	cout << "Pointer content: " << ptr_names << endl << endl;
	
	cout << (*ptr_names).at(0) << endl << endl;
	
	for(auto name: *ptr_names){
		cout << name << " ";
	}
	cout << endl;
	
	
	
	return 0;
}