#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	enum my_enum_colors{red, green, blue, yellow};
		
	my_enum_colors colors{red};
		
	///////////////USO DE ENUMERADORES//////////////////
		
	switch(colors){
		case red:
			cout << "Red" << endl;
			break;
		case green:
			cout << "Green" << endl;
			break;
		case blue:
			cout << "Blue" << endl;
			break;
		default:
			cout << "Yellow" << endl;
	}
}