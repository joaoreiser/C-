#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	vector<int> list;
	bool status = false;
	do{
		cout << endl;
		cout << "P - Print Numbers" << endl;
		cout << "A - Add a Number" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - Quit" << endl;
		
		char choice_letter{};
		cin >> choice_letter;
		
		switch(choice_letter){	
			case 'p':
			case 'P':
				if(list.size() == 0){
					cout << "[] - list is empty" << endl;
				}
				else{
					for(int element : list){
						cout << element << ' ';
					}
					cout << endl;
				}
				break;
			
			case 'a':
			case 'A':
				int num;
				cout << "Insert a Number: ";
				cin >> num;
				list.push_back(num);
				cout << num << " added" << endl;
				break;
			
			case 'm':
			case 'M':
				if(list.size() == 0){
					cout << "Unable to calculate the mean - no data" << endl;
				}
				else{
					double sum{};
					for(int element : list){
						sum += element;
					}
					cout << "The mean is " << sum / list.size() << endl;
				}				
				break;
				
			case 's':
			case 'S':
				if(list.size() == 0){
					cout << "Unable to determine the smallest number - empty list" << endl;
				}
				else{
					int smaller = list.at(0);
					for(int element : list){
						if(element < smaller){
							smaller = element;
						}
					}
					cout << "The smallest number is " << smaller << endl;
				}			
				break;
				
			case 'l':
			case 'L':
				if(list.size() == 0){
					cout << "Unable to determine the largest number - empty list" << endl;
				}
				else{
					int larger = list.at(0);
					for(int element : list){
						if(element > larger){
							larger = element;
						}
					}
					cout << "The larger number is " << larger << endl;
				}	
				break;
				
			case 'q':
			case 'Q':
				cout << "Goodbye" << endl;
				status = true;
				break;
				
			default:
				cout << "Unknown selection, please try again" << endl;
		}
	}while(!status);
	
	
	return 0;
}