#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	//um vetor irregular
	vector<vector<int>> my_2Dvec{
		{1,2,3},
		{2,3,4,5},
		{3,4,5,6,7}
	};
	
	for(auto vec: my_2Dvec){ //separa cada linha do vector
		for(auto v: vec){    //separa cada termo de cada linha
		cout << v << ' ';
		}
		cout << endl;
	}		

	return 0;
}