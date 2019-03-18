#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
	DINAMIC BINDING

-> what is necessary?:
	* inheritance
		- see Inheritance
	* base class pointer or reference
		Account *p1 = new Account();
		Account *p2 = new Savings();
		Account *p3 = new Checking();
		Account *p4 = new Trust();
		=> Account is the Base Class
		=> Savings, Checking and Trust are derived from Account
		=> A Base Class can be a type for the derived object pointer
	
	* virtual functions
	
	

	
-> Possibilities
	
	Account *arr[] = {p1, p2, p3, p4};
	//with an array or vector of type Base Class
	//run them with a for loop
	
	for(auto i=0; i < 4; i++){
		arr[i] -> withdraw(1000);
	}
	
	vector<Account*> vec{p1, p2, p3, p4};
	
	for(auto el : vec){
		el -> withdraw(1000);
	}

	//NEVER FORGET TO DELETE THE 
	//DINAMICALLY ALLOCATED POINTERS
	
	//New elements can be added to the vector
	vec.push_back(p3);
	vec.push_back(p4);
	
	delete p1;
	delete p2;
	delete p3; 
	delete p4;
	
*/



int main()
{

	return 0;
}
