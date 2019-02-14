#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	int state{2};
	
	switch(state){
		case 1:
		case 2:
			cout << "Cases 1 and 2" << endl;
			break;
		case 3: 
			cout << "Case 3" << endl;
			break;
		case 4: 
		case 5: 
			cout << "Cases 4 and 5" << endl;
			break;
		default:
			cout << "Default Case" << endl;		
	}
	
	return 0;
}