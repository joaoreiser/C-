#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	//switch - case
	int state{};
	cout << "Insert a number: ";
	cin >> state;
	
	switch(state){
		case 1:
			cout << "Case 1" << endl;
			break;
		case 2:
			cout << "Case 2" << endl;
			break;
		case 3:
			cout << "Case 3" << endl;
			break;
		default:
			cout << "Default" << endl;
	}
	
	char state_char{};
	cout << "Insert a letter: ";
	cin >> state_char;
	
	switch(state_char){
		case 'a':
			cout << "Case a" << endl;
			break;
		case 'b':
			cout << "Case b" << endl;
			break;
		case 'c':
			cout << "Case c" << endl;
			break;
		default:
			cout << "Default" << endl;
	}

	return 0;
}