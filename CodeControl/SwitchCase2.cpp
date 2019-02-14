#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	//Nested cases
	
	int state{2};
	
	switch(state){
		case 1:
		case 2:
			cout << "Casos 1 e 2" << endl;
			break;
		case 3: 
			cout << "Caso 3" << endl;
			break;
		case 4: 
		case 5: 
			cout << "Casos 4 e 5" << endl;
			break;
		default:
			cout << "Caso Default" << endl;		
	}
	
	
	///	case 'a':
	/// case 'A': 
	///		code here!
	
	return 0;
}