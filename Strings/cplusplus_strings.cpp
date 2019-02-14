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
	string s1;				//empty
	string s2 {"Joao"};		//Joao
	string s3 {s2};			//Joao
	string s4 {"Joao", 3};	//Joa	-> (string, length)
	string s5 {s3, 0, 2};	//Jo 	-> (string, start, length)
	string s6 {3, 'X'};		//XXX	-> (length, letter)
	
	s1 = "C++ Rocks!"; //no need for stpcpy()
	
	string sentence;
	
	sentence = s2 + " " + s1; // use + to concatenate
	
	cout << sentence << endl;
	
	//use [] or .at() to achieve letters - same as vectors
	cout << s2[0] << " " << s2.at(1) << " " << s2[2] << " " << s2.at(3) << endl;
	
	s2.at(0) = 'T';
	s2[1] = 'i';
	
	cout << s2 << endl;
	
	//show the letters of sentence
	for(char letter : sentence){
		cout << letter << " ";
	}
	
	cout << endl;
	
	//show the ascii indexs of the sentence
	for(int ascii : sentence){
		cout << ascii << " ";
	}
	
	cout << endl << endl;
	//////////////////////OPERATIONS/////////////////////
	
	// == != > >= < <=
	// Comparable objects
	// two c++ strings
	// one c++ string - one c_style string literal
	// one c++ string - one c_style string variable
	
	string a1{"Apple"};
	string a2{"Banana"};
	string a3{"Kiwi"};
	string a4{"apple"};
	string a5{a1};
	
	cout << (a1 == a1) << endl;
	cout << (a1 == a5) << endl;
	cout << (a2 == a3) << endl;
	cout << (a2 != a3) << endl;
	cout << (a2 > a1) << endl;
	cout << (a4 < a5) << endl;
	cout << (a4 == "apple") << endl;
	
	//substring -> string.substr(start_index, lenght)
	
	string q1{"This is a test"};
	
	cout << q1.substr(0, 4) << endl;
	cout << q1.substr(5, 2) << endl;
	cout << q1.substr(8, 1) << endl;
	cout << q1.substr(10, 4) << endl;	
	
	//find substring -> string.find(substring) -> return index
	
	cout << "This in index: " << q1.find("This") << endl;
	cout << "is in index: " << q1.find("is") << endl;
	cout << "a in index: " << q1.find("a") << endl;
	cout << "test in index: " << q1.find("test") << endl;
	cout << "second s in index: " << q1.find('s', 5) << endl; // -> ("string", start_position_look_for)
	cout << "XX in index: " << q1.find("XX") << endl;
	
	//remove characters -> string.erase(start, length) -> string.clear()
	
	cout << q1.erase(0,5) << endl;
	cout << q1.erase(5,4) << endl;
	q1.clear();
	
	//lenght and concatenate
	string name{"Joao"};
	
	cout << name << " " << name.length() << endl;

	name += " Guilherme"; //concatenate string
	
	cout << name << " " << name.length() << endl;
	
	//INPUT to strings -> getline(cin, string) -> getline(cin, string, 'end_letter')
	
	string x1;

	//read all the line
	getline(cin, x1);
	cout << x1 << endl;
	
	//read until the letter specified
	getline(cin, x1, 'a');
	cout << x1 << endl;
	
	return 0;
}