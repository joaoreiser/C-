#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

//////functions declarations//////

void display_options();
char read_keyboard();
bool switch_module(char, vector<int> &list);
void numbers_print(const vector<int> list);
void numbers_add(vector<int> &list);
void numbers_mean(const vector<int> list);
void numbers_smallest(const vector<int> list);
void numbers_largest(const vector<int> list);

//////functions declarations//////

int main()
{	
	bool status{false};
	vector<int> list{};
	do{
		display_options();
		char choice = read_keyboard();
		status = switch_module(choice, list);
	}
	while(status != true);
	
	return 0;
}

void display_options(){
	cout << endl;
	cout << "P - Print Numbers" << endl;
	cout << "A - Add a Number" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number" << endl;
	cout << "Q - Quit" << endl;
}

char read_keyboard(){
	char choice_letter{};
	cin >> choice_letter;
	return tolower(choice_letter);
}

bool switch_module(char choice, vector<int> &list){
	bool status = false;
	switch(choice){
		case 'p':
			numbers_print(list);
			break;
		case 'a':
			numbers_add(list);
			break;
		case 'm':
			numbers_mean(list);
			break;
		case 's':
			numbers_smallest(list);
			break;
		case 'l':
			numbers_largest(list);
			break;
		case 'q':
			cout << "Goodbye" << endl;
			status = true;
			break;
		default:
			cout << "Unknown selection, please try again" << endl;
	}
	return status;
}

void numbers_print(const vector<int> list){
	if(list.size() == 0){
		cout << "[] - list is empty" << endl;
	}
	else{
		for(int element : list){
			cout << element << ' ';
		}
		cout << endl;
	}
}

void numbers_add(vector<int> &list){
	int num;
	cout << "Insert a Number: ";
	cin >> num;
	list.push_back(num);
	cout << num << " added" << endl;
}

void numbers_mean(const vector<int> list){
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
}

void numbers_smallest(const vector<int> list){
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
}

void numbers_largest(const vector<int> list){
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
}
